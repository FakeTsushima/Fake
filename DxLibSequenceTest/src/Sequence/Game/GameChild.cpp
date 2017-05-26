#include "GameChild.h"
#include "GameParent.h"

namespace Sequence {
	GameChild::~GameChild() {

	}
	Base *GameChild::update(Base *p) {
		GameParent* parent = dynamic_cast<GameParent *>(p);
		return update(parent);
	}
}