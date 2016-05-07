/*
 * AllOf.h
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_ALLOF_H_
#define INCLUDE_ALLOF_H_

#include <Rule.h>
#include <vector>
namespace kata {

class AllOf: public Rule {
public:
	AllOf();
	virtual ~AllOf();
	virtual bool Matched(int num);
	void AddRule(Rule* rule);
private:
	std::vector<Rule*> _rules;
};

} /* namespace kata */

#endif /* INCLUDE_ALLOF_H_ */
