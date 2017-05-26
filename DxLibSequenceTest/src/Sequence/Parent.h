#pragma once

namespace Sequence {
class Child;
class Parent {
	public:
		void update();
		static void create();
		static void destroy();
		static Parent* instance();
	private:
		Parent();
		~Parent();
		Child *mChild;
		static Parent *mInstance;
	};
}