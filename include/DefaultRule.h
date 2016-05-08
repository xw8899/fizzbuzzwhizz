/*
 * DefaultRule.h
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_DEFAULTRULE_H_
#define INCLUDE_DEFAULTRULE_H_

#include <Handler.h>

namespace kata {

class DefaultRule: public Handler {
public:
	DefaultRule();
	virtual ~DefaultRule();
	virtual bool Matched(int num);
	virtual string Transfer(int num);
};

} /* namespace kata */

#endif /* INCLUDE_DEFAULTRULE_H_ */
