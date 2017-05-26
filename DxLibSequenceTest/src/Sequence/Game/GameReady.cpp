#include "GameReady.h"
#include "DxLib.h"
#include "..\..\common\Input.h"
#include "GamePlay.h"
#include "..\Title.h"

namespace Sequence {
	GameReady::GameReady() {

	}

	GameReady::~GameReady() {

	}

	Base *GameReady::update(GameParent *p) {
		Base *next = this;

		if (Input::instance()->isTriggered(Input::A)) {
			next = new Title();
		}

		DrawFormatString(
			0, 60, GetColor(255, 255, 255),
			"scene is GameReady"
		);

		return next;
	}
}