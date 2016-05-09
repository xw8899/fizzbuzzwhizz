/*
 * CompositeAction.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <CompositeAction.h>

namespace kata {

CompositeAction::CompositeAction(const vector<Action*>& acts) : Action("composite") {
	_actions.assign(acts.begin(), acts.end());
}

CompositeAction::~CompositeAction() {
	for (Action* act : _actions) {
		delete act;
	}
}

string CompositeAction::Transfer(int num) {
	string s;
	for (Action* act : _actions) {
		s = s + act->Transfer(num);
	}
	return s;
}

} /* namespace kata */
