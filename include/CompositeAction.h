/*
 * ComposizeAction.h
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_COMPOSIZEACTION_H_
#define INCLUDE_COMPOSIZEACTION_H_

#include <Action.h>
#include <vector>
namespace kata {

class CompositeAction: public Action {
public:
	static CompositeAction* Create2Action(Action* a1, Action* a2);
	static CompositeAction* Create3Action(Action* a1, Action* a2, Action* a3);
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
