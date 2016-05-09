/*
 * CompositeMatcher.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <CompositeMatcher.h>

namespace kata {

CompositeMatcher::CompositeMatcher(const vector<Matcher*>& matchers) {
	_matchers.assign(matchers.begin(), matchers.end());
}

CompositeMatcher::~CompositeMatcher() {
	for (Matcher* matcher : _matchers) {
		delete matcher;
	}
}
bool CompositeMatcher::Matched(int num) {
	if (_matchers.size() == 0)
	{
		return false;
	}
	for (Matcher* matcher : _matchers) {
		if (!matcher->Matched(num))
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
