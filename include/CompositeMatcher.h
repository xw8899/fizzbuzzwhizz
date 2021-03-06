/*
 * CompositeMatcher.h
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#ifndef INCLUDE_COMPOSITEMATCHER_H_
#define INCLUDE_COMPOSITEMATCHER_H_

#include <Matcher.h>
#include <vector>
using namespace std;
namespace kata {

class CompositeMatcher: public Matcher {
public:
	CompositeMatcher(const vector<Matcher*>&);
	virtual ~CompositeMatcher();
	virtual bool Matched(int num);
	void AddMatcher(Matcher* ma);
private:
	vector<Matcher*> _matchers;
};

} /* namespace kata */

#endif /* INCLUDE_COMPOSITEMATCHER_H_ */
