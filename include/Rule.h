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
	virtual ~Rule();
	virtual bool Matched(int num) = 0;
};

} /* namespace kata */

#endif /* INCLUDE_RULE_H_ */
