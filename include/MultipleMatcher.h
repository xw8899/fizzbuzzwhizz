/*
 * MultipleMatcher.h
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#ifndef INCLUDE_MULTIPLEMATCHER_H_
#define INCLUDE_MULTIPLEMATCHER_H_

#include <Matcher.h>

namespace kata {

class MultipleMatcher: public Matcher {
public:
	MultipleMatcher(int digit);
	virtual ~MultipleMatcher();
	virtual bool Matched(int num);
private:
	int _digit;

};

} /* namespace kata */

#endif /* INCLUDE_MULTIPLEMATCHER_H_ */
