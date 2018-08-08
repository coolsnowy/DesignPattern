//
// Created by coolsnowy on 2018/8/8.
//

#ifndef TEST_COMPOSITE_H
#define TEST_COMPOSITE_H

#include <vector>
#include "Component.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

class Composite : public Component {
public:
	Composite (string strName) : Component(strName) {}
	virtual ~Composite() {
		while (!elements.empty()) {
			auto it = elements.begin();
			SAFE_DELETE(*it);
			elements.erase(it);
		}
	}
	void add(Component *cmpt) {
		elements.push_back(cmpt);
	}
	void remove(Component *cmpt) {
		auto it = elements.begin();
		while (it != elements.end())  {
			if (*it == cmpt) {
				SAFE_DELETE(cmpt);
				elements.erase(it);
				break;
			}
			++it;
		}
	}
	Component* getChild(int index) {
		if (index >= elements.size())
			return NULL;

		return elements[index];
	}
	// recursive show the child
	void operation(int indent) {
		string newStr(indent, '-');
		cout << newStr << "+ " << name << endl;
		// recursive show all children of each node
		auto it = elements.begin();
		auto end = elements.end();
		while (it != end) {
			(*it)->operation(indent + 3);
			++it;
		}
	}

private:
	Composite();  // not allowed

private:
	vector<Component *> elements;
};



#endif //TEST_COMPOSITE_H
