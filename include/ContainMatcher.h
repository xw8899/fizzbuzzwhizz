/*
 * ContainMatcher.h
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_CONTAINMATCHER_H_
#define INCLUDE_CONTAINMATCHER_H_

#include <Matcher.h>

namespace kata {

class ContainMatcher: public Matcher {
public:
	ContainMatcher(int);
	virtual ~ContainMatcher();
	virtual bool Matched(int num);
private:
	int _digit;
};

} /* namespace kata */

#endif /* INCLUDE_CONTAINMATCHER_H_ */
