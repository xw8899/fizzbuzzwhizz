/*
 * WhizzAction.h
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#ifndef INCLUDE_WHIZZACTION_H_
#define INCLUDE_WHIZZACTION_H_

#include <Action.h>

namespace kata {

class WhizzAction: public Action {
public:
	WhizzAction();
	virtual ~WhizzAction();
	virtual string Transfer(int num);
};

} /* namespace kata */

#endif /* INCLUDE_WHIZZACTION_H_ */
