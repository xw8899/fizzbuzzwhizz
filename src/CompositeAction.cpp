/*
 * CompositeAction.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <CompositeAction.h>

namespace kata {

CompositeAction::CompositeAction() {
}

void CompositeAction::AddAction(Action* act)
{
	_actions.push_back(act);
}

CompositeAction::~CompositeAction() {
	for (vector<Action*>::iterator it = _actions.begin(); it != _actions.end(); ++it)
	{
		delete (*it);
	}
}

string CompositeAction::Transfer(int num)
{
	string s;
	for (vector<Action*>::iterator it = _actions.begin(); it != _actions.end(); ++it)
	{
		s = s + (*it)->Transfer(num);
	}
	return s;
}

} /* namespace kata */
