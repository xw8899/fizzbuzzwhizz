/*
 * BuzzAction.h
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#ifndef INCLUDE_BUZZACTION_H_
#define INCLUDE_BUZZACTION_H_

#include <Action.h>

namespace kata {

class BuzzAction: public Action {
public:
	BuzzAction();
	virtual ~BuzzAction();
	virtual string Transfer(int num);
};

} /* namespace kata */

#endif /* INCLUDE_BUZZACTION_H_ */
