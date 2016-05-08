/*
 * MultipleMatcher.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <MultipleMatcher.h>

namespace kata {

MultipleMatcher::MultipleMatcher(int digit) : _digit(digit) {
	// TODO Auto-generated constructor stub

}

MultipleMatcher::~MultipleMatcher() {
	// TODO Auto-generated destructor stub
}

bool MultipleMatcher::Matched(int num)
{
	return ( (num % _digit) == 0);
}

} /* namespace kata */
