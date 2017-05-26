#pragma once
#include "Child.h"

namespace Sequence {
	class Parent;
	class Title : public Child {
	public:
		Title();
		~Title();
		Base *update(Parent *);
	};
}