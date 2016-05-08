/*
 * CompositeMatcher.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <CompositeMatcher.h>

namespace kata {

CompositeMatcher* CompositeMatcher::Create2Matcher(Matcher* a1, Matcher* a2)
{
	CompositeMatcher* m = new CompositeMatcher();
	m->AddMatcher(a1);
	m->AddMatcher(a2);
	return m;
}
CompositeMatcher* CompositeMatcher::Create3Matcher(Matcher* a1, Matcher* a2, Matcher* a3)
{
	CompositeMatcher* m = new CompositeMatcher();
	m->AddMatcher(a1);
	m->AddMatcher(a2);
	m->AddMatcher(a3);
	return m;
}

CompositeMatcher::CompositeMatcher() {
	// TODO Auto-generated constructor stub

}

CompositeMatcher::~CompositeMatcher() {
	for (vector<Matcher*>::iterator it = _matchers.begin();
			it != _matchers.end(); ++it) {
		delete (*it);
	}
}
bool CompositeMatcher::Matched(int num) {
	if (_matchers.size() == 0)
	{
		return false;
	}
	for (vector<Matcher*>::iterator it = _matchers.begin();
			it != _matchers.end(); ++it) {
		if (!(*it)->Matched(num))
		{
			return false;
		}
	}
	return true;
}
void CompositeMatcher::AddMatcher(Matcher* ma) {
	_matchers.push_back(ma);
}
} /* namespace kata */
