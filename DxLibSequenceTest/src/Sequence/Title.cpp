#include "Title.h"
#include "DxLib.h"
#include "Menu.h"
#include "..\common\Input.h"

namespace Sequence {
	Title::Title() {

	}

	Title::~Title() {

	}

	Base *Title::update(Parent *p) {
		Base *next = this;

		if (Input::instance()->isTriggered(Input::A)) {
			next = new Menu();
		}

		DrawFormatString(
			0, 40, GetColor(255, 255, 255),
			"scene is TITLE"
		);

		return next;
	}
}