#include "Menu.h"
#include "DxLib.h"
#include "Title.h"
#include "Game\GameParent.h"
#include "..\common\Input.h"

namespace Sequence {
	Menu::Menu() {

	}

	Menu::~Menu() {

	}

	Base *Menu::update(Parent *p) {
		Base *next = this;

		if (Input::instance()->isTriggered(Input::A)) {
			next = new GameParent();
		}

		DrawFormatString(
			0, 40, GetColor(255, 255, 255),
			"scene is MENU"
		);

		return next;
	}
}