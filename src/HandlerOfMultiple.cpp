/*
 * HandlerOfMultiple.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <HandlerOfMultiple.h>
#include <iostream>
namespace kata {

HandlerOfMultiple::HandlerOfMultiple(Handler* s, int digit) :
		Handler(s), _digit(digit) {
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
		if (_digit == 3)
			return "fizz";
		if (_digit == 5)
			return "buzz";
		if (_digit == 7)
			return "whizz";
		return "norule";
	} else {
		return Handler::Transfer(num);
	}
}

} /* namespace kata */
