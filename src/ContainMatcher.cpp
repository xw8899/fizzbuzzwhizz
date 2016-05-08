/*
 * ContainMatcher.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <ContainMatcher.h>

namespace kata {

ContainMatcher::ContainMatcher(int digit) : _digit(digit) {
	// TODO Auto-generated constructor stub

}

ContainMatcher::~ContainMatcher() {
	// TODO Auto-generated destructor stub
}

bool ContainMatcher::Matched(int num)
{
	int tensDigit = num / 10;
	return (tensDigit % 10 == _digit) || (num % 10 == _digit);
}
} /* namespace kata */
