#include "Input.h"

#include <DxLib.h>
#define STR(var) #var
Input* Input::mInstance = 0;

Input* Input::instance() {
	if (!mInstance) {
		create();
	}
	return mInstance;
}

void Input::create() {
	mInstance = new Input();
}

void Input::destroy() {
	delete mInstance;
	mInstance = 0;
}

bool Input::isOn(Button btn) {
	int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	bool ret = false;
	if (key & mInputAry[static_cast<int>(btn)]) {
		ret = true;
	}
	return ret;
}

bool Input::isTriggered(Button btn) {
	int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	bool ret = false;
	if (key & mInputAry[static_cast<int>(btn)]) {
		if (!mPreInput) {
			mPreInput = true;
			ret = true;
		}
		else {
			ret = false;
		}
	}
	else {
		mPreInput = false;
	}
	return ret;
}

Input::Input() :
	mPreInput(false){
	mInputAry = new int[7] {
		PAD_INPUT_A,
		PAD_INPUT_B,
		PAD_INPUT_UP,
		PAD_INPUT_DOWN,
		PAD_INPUT_LEFT,
		PAD_INPUT_RIGHT,
		PAD_INPUT_L
	};
}

Input::~Input() {
	delete[] mInputAry;
	mInputAry = 0;
}