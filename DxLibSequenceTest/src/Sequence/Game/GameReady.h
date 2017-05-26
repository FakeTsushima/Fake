#pragma once
#include "GameChild.h"
namespace Sequence {
	class GameParent;
	class GameReady : public GameChild{
	public:
		GameReady::GameReady();
		GameReady::~GameReady();
		Base *GameReady::update(GameParent *);
	};
}