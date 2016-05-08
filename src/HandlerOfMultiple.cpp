/*
 * HandlerOfMultiple.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <HandlerOfMultiple.h>
namespace kata {

HandlerOfMultiple::HandlerOfMultiple(Handler* s, int digit, Action* action) :
		Handler(s, action), _digit(digit) {
	// TODO Auto-generated constructor stub

}

HandlerOfMultiple::~HandlerOfMultiple() {
	// TODO Auto-generated destructor stub
}

bool HandlerOfMultiple::Matched(int num) {
	return ( (num % _digit) == 0);
}

string HandlerOfMultiple::Transfer(int num) {
	if (Matched(num)) {
			return Handler::Act(num);
	} else {
		return Handler::Transfer(num);
	}
}

} /* namespace kata */
