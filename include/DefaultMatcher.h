/*
 * DefaultMather.h
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#ifndef INCLUDE_DEFAULTMATCHER_H_
#define INCLUDE_DEFAULTMATCHER_H_

#include <Matcher.h>

namespace kata {

class DefaultMatcher: public Matcher {
public:
	DefaultMatcher();
	virtual ~DefaultMatcher();
	virtual bool Matched(int num);
};

} /* namespace kata */

#endif /* INCLUDE_DEFAULTMATCHER_H_ */
