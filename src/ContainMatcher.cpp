/*
 * ContainMatcher.cpp
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#include <ContainMatcher.h>

namespace kata {

ContainMatcher::ContainMatcher(int digit) : _digit(digit) {
}

ContainMatcher::~ContainMatcher() {
}

bool ContainMatcher::Matched(int num)
{
	int tensDigit = num / 10;
	return (tensDigit % 10 == _digit) || (num % 10 == _digit);
}
} /* namespace kata */
