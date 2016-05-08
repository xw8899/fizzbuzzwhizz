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
//	for (vector<Action*>::iterator it = _actions.begin(); it != _actions.end(); ++it)
//	{
//		delete (*it);
//	}
	for (Action* act : _actions) {
		delete act;
	}
}

string CompositeAction::Transfer(int num) {
	string s;
//	for (vector<Action*>::iterator it = _actions.begin(); it != _actions.end(); ++it)
//	{
//		s = s + (*it)->Transfer(num);
//	}
	for (Action* act : _actions) {
		s = s + act->Transfer(num);
	}
	return s;
}

} /* namespace kata */
