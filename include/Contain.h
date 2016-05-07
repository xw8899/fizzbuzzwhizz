/*
 * Contain.h
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_CONTAIN_H_
#define INCLUDE_CONTAIN_H_

#include <Rule.h>

namespace kata {

class Contain: public Rule {
public:
	Contain(int digit);
	virtual ~Contain();
public:
	virtual bool Matched(int num);
private:
	int _digit;

};

} /* namespace kata */

#endif /* INCLUDE_CONTAIN_H_ */
