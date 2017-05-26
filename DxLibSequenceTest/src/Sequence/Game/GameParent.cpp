#include "GameParent.h"
#include "DxLib.h"
#include "GameReady.h"

namespace Sequence {
	GameParent::GameParent() {
		mChild = new GameReady();
	}

	GameParent::~GameParent() {

	}

	Base *GameParent::update(Parent *p) {
		Base *next = this;
		Base *nextChild = mChild->update(this);

		if (nextChild != mChild) {
			GameChild *casted = dynamic_cast<GameChild *>(nextChild);
			if (casted) {
				delete mChild;
				mChild = 0;
				mChild = casted;
			}
			else {
				next = nextChild;
			}
		}
		nextChild = 0;

		DrawFormatString(
			0, 40, GetColor(255, 255, 255),
			"scene is GameParent"
		);

		return next;
	}
}