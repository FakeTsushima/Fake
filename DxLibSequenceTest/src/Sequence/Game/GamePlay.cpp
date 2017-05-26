#include "GamePlay.h"
#include "DxLib.h"
#include "..\..\common\Input.h"

namespace Sequence {
	GamePlay::GamePlay() {

	}

	GamePlay::~GamePlay() {

	}

	Base *GamePlay::update(GameParent *) {
		Base *next = this;

		if (Input::instance()->isTriggered(Input::A)) {

		}

		DrawFormatString(
			0, 60, GetColor(255, 255, 255),
			"scene is GamePlay"
		);

		return next;
	}
}