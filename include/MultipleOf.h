/*
 * MultipleOf.h
 *
 *  Created on: 2016��5��7��
 *      Author: Administrator
 */

#ifndef INCLUDE_MULTIPLEOF_H_
#define INCLUDE_MULTIPLEOF_H_

#include <Rule.h>

namespace kata {

class MultipleOf: public Rule {
public:
	MultipleOf(int num);
	virtual ~MultipleOf();
public:
	virtual bool Matched(int num);
};

} /* namespace kata */

#endif /* INCLUDE_MULTIPLEOF_H_ */
