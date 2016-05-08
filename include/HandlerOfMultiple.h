/*
 * HandlerOfMultiple.h
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_HANDLEROFMULTIPLE_H_
#define INCLUDE_HANDLEROFMULTIPLE_H_

#include <Handler.h>

namespace kata {

class HandlerOfMultiple: public Handler {
public:
	HandlerOfMultiple(Handler* s, int digit);
	virtual ~HandlerOfMultiple();
	virtual bool Matched(int num);
	virtual std::string Transfer(int num);
private:
	int _digit;
};

} /* namespace kata */

#endif /* INCLUDE_HANDLEROFMULTIPLE_H_ */
