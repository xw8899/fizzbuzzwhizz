/*
 * DefaultRule.h
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#ifndef INCLUDE_DEFAULTHANDLER_H_
#define INCLUDE_DEFAULTHANDLER_H_

#include <Handler.h>

namespace kata {

class DefaultHandler: public Handler {

public:
	DefaultHandler(Action* action);
	virtual ~DefaultHandler();
	virtual bool Matched(int num);
	virtual string Transfer(int num);
};

} /* namespace kata */

#endif /* INCLUDE_DEFAULTHANDLER_H_ */
