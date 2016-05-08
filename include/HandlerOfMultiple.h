/*
 * HandlerOfMultiple.h
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#ifndef INCLUDE_HANDLEROFMULTIPLE_H_
#define INCLUDE_HANDLEROFMULTIPLE_H_

#include <Handler.h>

namespace kata {
class Action;

class HandlerOfMultiple: public Handler {
public:
	HandlerOfMultiple(Handler* s, Matcher* matcher, Action* action);
	virtual ~HandlerOfMultiple();
	virtual std::string Transfer(int num);
};

} /* namespace kata */

#endif /* INCLUDE_HANDLEROFMULTIPLE_H_ */
