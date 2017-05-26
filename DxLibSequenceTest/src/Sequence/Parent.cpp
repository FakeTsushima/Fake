#include "Parent.h"
#include "Title.h"

namespace Sequence {
	Parent* Parent::mInstance = 0;

	Parent::Parent() {
		mChild = new Title();
	}

	Parent::~Parent() {

	}

	void Parent::update() {
		Base *nextChild = mChild->update(this);
		if (nextChild != mChild) {
			Child *casted = dynamic_cast<Child *>(nextChild);
			delete mChild;
			mChild = 0;
			mChild = casted;
		}
		nextChild = 0;
	}


	void Parent::create() {
		mInstance = new Parent();
	}

	void Parent::destroy() {
		delete mInstance;
		mInstance = 0;
	}

	Parent *Parent::instance() {
		return mInstance;
	}
}