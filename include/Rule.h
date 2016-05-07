/*
 * Rule.h
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_RULE_H_
#define INCLUDE_RULE_H_

namespace kata {

class Rule {
public:
	Rule(int digit);
	virtual ~Rule();
	virtual bool Matched(int num) = 0;
protected:
	int _digit;
};

} /* namespace kata */

#endif /* INCLUDE_RULE_H_ */
