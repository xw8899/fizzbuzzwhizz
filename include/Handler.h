/*
 * Handler.h
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_HANDLER_H_
#define INCLUDE_HANDLER_H_
#include <string>
using namespace std;
namespace kata {
class Action;
class Matcher;
class Handler {
public:
	Handler(Handler* s, Matcher* matcher, Action* action);
	virtual ~Handler();
	virtual bool Matched(int num);
	virtual string Transfer(int num);
private:
	Handler* _successor;
	Matcher* _matcher;
	Action* _action;
};

} /* namespace kata */

#endif /* INCLUDE_HANDLER_H_ */
