/*
 * FizzAction.h
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#ifndef INCLUDE_FIZZACTION_H_
#define INCLUDE_FIZZACTION_H_

#include <Action.h>

namespace kata {

class FizzAction: public Action {
public:
	FizzAction();
	virtual ~FizzAction();
	virtual string Transfer(int num);
};

} /* namespace kata */

#endif /* INCLUDE_FIZZACTION_H_ */
