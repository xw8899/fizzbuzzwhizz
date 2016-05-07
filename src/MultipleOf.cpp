/*
 * MultipleOf.cpp
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#include <MultipleOf.h>

namespace kata {

MultipleOf::MultipleOf(int digit) : Rule(digit) {
	// TODO Auto-generated constructor stub

}

MultipleOf::~MultipleOf() {
	// TODO Auto-generated destructor stub
}

bool MultipleOf::Matched(int num)
{
	return (num % _digit == 0);
}
} /* namespace kata */

