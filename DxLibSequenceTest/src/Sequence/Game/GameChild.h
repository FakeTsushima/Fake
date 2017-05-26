#pragma once
#include "..\Base.h"
namespace Sequence {
	class GameParent;
	class GameChild : public Base{
	public:
		virtual ~GameChild();
		Base *update(Base *);
		virtual Base *update(GameParent *) = 0;
	};
}