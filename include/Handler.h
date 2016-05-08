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

class Handler {
public:
	Handler(Handler* s = 0);
	virtual ~Handler();
	virtual bool Matched(int num);
	virtual string Transfer(int num);
	void SetHandler(Handler* s);
private:
	Handler* _successor;

};

} /* namespace kata */

#endif /* INCLUDE_HANDLER_H_ */
