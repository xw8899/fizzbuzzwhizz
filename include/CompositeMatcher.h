/*
 * CompositeMatcher.h
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
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
	static CompositeMatcher* Create2Matcher(Matcher* a1, Matcher* a2);
	static CompositeMatcher* Create3Matcher(Matcher* a1, Matcher* a2, Matcher* a3);
public:
	CompositeMatcher();
	virtual ~CompositeMatcher();
	virtual bool Matched(int num);
	void AddMatcher(Matcher* ma);
private:
	vector<Matcher*> _matchers;
};

} /* namespace kata */

#endif /* INCLUDE_COMPOSITEMATCHER_H_ */
