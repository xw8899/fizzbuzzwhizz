/*
 * Handler.cpp
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#include <Handler.h>
#include <Action.h>
#include "Matcher.h"
namespace kata {

Handler::Handler(Handler* s, Matcher* matcher, Action* action) : _successor(s), _matcher(matcher), _action(action) {
	// TODO Auto-generated constructor stub

}

Handler::~Handler() {
	delete _action;
	delete _matcher;
}

string Handler::Act(int num)
{
	return _action->Transfer(num);
}

bool Handler::Matched(int num) {
	return _matcher->Matched(num);
}

string Handler::Transfer(int num) {
	if (Matched(num))
	{
		return Act(num);
	}
	else if (_successor != 0)
	{
		return _successor->Transfer(num);
	}

	return "nohandler";
}

void Handler::SetHandler(Handler* s)
{
	_successor = s;
}

} /* namespace kata */
