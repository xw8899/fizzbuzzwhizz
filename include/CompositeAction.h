/*
 * ComposizeAction.h
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#ifndef INCLUDE_COMPOSIZEACTION_H_
#define INCLUDE_COMPOSIZEACTION_H_

#include <Action.h>
#include <vector>
namespace kata {

class CompositeAction: public Action {
public:
	CompositeAction();
	virtual ~CompositeAction();
	virtual string Transfer(int num);
	void AddAction(Action* act);
private:
	vector<Action*> _actions;
};

} /* namespace kata */

#endif /* INCLUDE_COMPOSIZEACTION_H_ */
