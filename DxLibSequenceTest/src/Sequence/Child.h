#pragma once
#include "Base.h"

namespace Sequence {
	class Parent;
	class Child : public Base{
	public:
		virtual ~Child();
		Base *update(Base *);
		virtual Base *update(Parent *) = 0;
	};
}