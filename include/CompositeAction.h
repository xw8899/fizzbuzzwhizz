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
	CompositeAction(const vector<Action*>&);
	virtual ~CompositeAction();
	virtual string Transfer(int num);
private:
	vector<Action*> _actions;
};

} /* namespace kata */

#endif /* INCLUDE_COMPOSIZEACTION_H_ */
