/*
 * AnyOf.h
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_ANYOF_H_
#define INCLUDE_ANYOF_H_

#include <Rule.h>
#include <vector>

namespace kata {

class AnyOf: public Rule {
public:
	AnyOf();
	virtual ~AnyOf();
	virtual bool Matched(int num);
	void AddRule(Rule* rule);
private:
	std::vector<Rule*> _rules;
};

} /* namespace kata */

#endif /* INCLUDE_ANYOF_H_ */
