/*
 * Handler.cpp
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#include <Handler.h>
namespace kata {

Handler::Handler(Handler* s) : _successor(s) {
	// TODO Auto-generated constructor stub

}

Handler::~Handler() {
	// TODO Auto-generated destructor stub
}

bool Handler::Matched(int num) {
	return true;
}

string Handler::Transfer(int num) {
	if (_successor != 0)
		return _successor->Transfer(num);
	return "dd";
}

void Handler::SetHandler(Handler* s)
{
	_successor = s;
}

} /* namespace kata */
