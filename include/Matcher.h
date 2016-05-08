/*
 * Matcher.h
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_MATCHER_H_
#define INCLUDE_MATCHER_H_

namespace kata {

class Matcher {
public:
	Matcher();
	virtual ~Matcher();
	virtual bool Matched(int num) = 0;
};

} /* namespace kata */

#endif /* INCLUDE_MATCHER_H_ */
