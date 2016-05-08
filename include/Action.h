/*
 * Action.h
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_ACTION_H_
#define INCLUDE_ACTION_H_
#include <string>
using namespace std;
namespace kata {

class Action {
public:
	virtual ~Action();
	Action();
	virtual string Transfer(int num) = 0;
};

} /* namespace kata */

#endif /* INCLUDE_ACTION_H_ */
