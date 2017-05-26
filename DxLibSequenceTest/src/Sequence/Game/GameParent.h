#pragma once
#include "..\Child.h"

namespace Sequence {
	class Parent;
	class GameChild;
	class GameParent : public Sequence::Child {
	public:
		GameParent();
		~GameParent();
		Base *update(Sequence::Parent *);
	private:
		GameChild *mChild;
	};
}