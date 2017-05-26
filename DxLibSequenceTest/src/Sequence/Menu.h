#pragma once
#include "Child.h"

namespace Sequence {
	class Parent;
	class Menu : public Child{
	public:
		Menu();
		~Menu();
		Base *update(Parent *);
	};
}