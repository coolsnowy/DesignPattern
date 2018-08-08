
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main () {
	// create a new tree struct
	// create root node
	Component *pRoot = new Composite("江湖公司（任我行）");

	// create a new composite
	Component *pDepart1 = new Composite("日月神教（东方不败）");
	// add two leaves
	pDepart1->add(new Leaf("光明左使（向问天）"));
	pDepart1->add(new Leaf("光明右使（曲洋）"));
	// add this composite to tree
	pRoot->add(pDepart1);

	// create a new composite
	Component *pDepart2 = new Composite("五岳剑派（左冷蝉）");
	// add five leaves
	pDepart2->add(new Leaf("嵩山（左冷蝉）"));
	pDepart2->add(new Leaf("衡山（莫大）"));
	pDepart2->add(new Leaf("华山（岳不群）"));
	pDepart2->add(new Leaf("泰山（天门道长）"));
	pDepart2->add(new Leaf("恒山（定闲师太）"));
	// add this composite to tree
	pRoot->add(pDepart2);

	// add three leaf
	pRoot->add(new Leaf("少林（方证大师）"));
	pRoot->add(new Leaf("武当（冲虚道长）"));
	Component *pLeaf = new Leaf("青城（余沧海）");
	pRoot->add(pLeaf);

	// rubbish，remove it
	pRoot->remove(pLeaf);

	// recursive show the structure of the entire tree
	pRoot->operation(1);

	// can't add a node to a leaf
	Component *p = new Leaf("skc");
	p->add(new Leaf("sdf"));
	SAFE_DELETE(p);

	// error, this is safe composite pattern, we can't manage child in leaf, we can only do that with composite node
	/*
	Component1 *p1 = new Leaf1("skc");
	p1->add(new Leaf("sdf"));
	SAFE_DELETE(p1);
	*/


	// delete the allocate heap memory
	SAFE_DELETE(pRoot);


	return 0;


}