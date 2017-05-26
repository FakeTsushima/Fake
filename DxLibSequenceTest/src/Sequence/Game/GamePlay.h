#pragma once
#include "GameChild.h"
namespace Sequence {
	class GameParent;
	class GamePlay : public GameChild {
	public:
		GamePlay::GamePlay();
		GamePlay::~GamePlay();
		Base *GamePlay::update(GameParent *);
	};
}