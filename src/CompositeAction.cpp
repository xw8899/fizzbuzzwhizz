/*
 * CompositeAction.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <CompositeAction.h>

namespace kata {

CompositeAction* CompositeAction::Create2Action(Action* a1, Action* a2){
	CompositeAction* ac = new CompositeAction();
	ac->AddAction(a1);
	ac->AddAction(a2);
	return ac;
}

CompositeAction* CompositeAction::Create3Action(Action* a1, Action* a2, Action* a3) {
	CompositeAction* ac = new CompositeAction();
	ac->AddAction(a1);
	ac->AddAction(a2);
	ac->AddAction(a3);
	return ac;

}

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
