/*
 * Contain.cpp
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#include <Contain.h>

namespace kata {

Contain::~Contain() {
	// TODO Auto-generated destructor stub
}

Contain::Contain(int digit) : _digit(digit) {

}

bool Contain::Matched(int num)
{
	int tensDigit = num / 10;
	return (tensDigit % 10 == _digit) || (num % 10 == _digit);
}

} /* namespace kata */
