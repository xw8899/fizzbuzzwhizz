/*
 * Handler.cpp
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#include <Handler.h>
#include <Action.h>
namespace kata {

Handler::Handler(Handler* s, Action* action) : _successor(s), _action(action) {
	// TODO Auto-generated constructor stub

}

Handler::~Handler() {
	delete _action;
}

string Handler::Act(int num)
{
	return _action->Transfer(num);
}

bool Handler::Matched(int num) {
	return true;
}

string Handler::Transfer(int num) {
	if (_successor != 0)
		return _successor->Transfer(num);
	return "nohandler";
}

void Handler::SetHandler(Handler* s)
{
	_successor = s;
}

} /* namespace kata */
