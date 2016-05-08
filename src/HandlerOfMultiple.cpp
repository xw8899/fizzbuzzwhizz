/*
 * HandlerOfMultiple.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <HandlerOfMultiple.h>
namespace kata {

HandlerOfMultiple::HandlerOfMultiple(Handler* s, Matcher* matcher, Action* action) :
		Handler(s, matcher, action){
	// TODO Auto-generated constructor stub

}

HandlerOfMultiple::~HandlerOfMultiple() {
	// TODO Auto-generated destructor stub
}

string HandlerOfMultiple::Transfer(int num) {
	if (Matched(num)) {
			return Handler::Act(num);
	} else {
		return Handler::Transfer(num);
	}
}

} /* namespace kata */
