/*
 * DefaultAction.h
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#ifndef INCLUDE_DEFAULTACTION_H_
#define INCLUDE_DEFAULTACTION_H_

#include <Action.h>

namespace kata {

class DefaultAction: public Action {
public:
	DefaultAction();
	virtual ~DefaultAction();
	virtual string Transfer(int num);
};

} /* namespace kata */

#endif /* INCLUDE_DEFAULTACTION_H_ */
