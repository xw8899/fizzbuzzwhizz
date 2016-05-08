/*
 * FizzBuzzGame.cpp
 *
 *  Created on: 2016Äê5ÔÂ4ÈÕ
 *      Author: Administrator
 */

#include <FizzBuzzGame.h>
#include "Handler.h"
#include "HandlerOfMultiple.h"
#include "DefaultRule.h"
using namespace std;
namespace kata {

FizzBuzzGame::FizzBuzzGame(int first, int second, int third) {
	_firstDigit = first;
	_secondDigit = second;
	_thirdDigit = third;
	_defaultRule = new DefaultRule();
	_m1 = new HandlerOfMultiple(_defaultRule, first);
	_m2 = new HandlerOfMultiple(_m1, second);
	_m3 = new HandlerOfMultiple(_m2, third);
}

FizzBuzzGame::~FizzBuzzGame()
{
	delete _defaultRule;
	delete _m1;
	delete _m2;
	delete _m3;
}

bool FizzBuzzGame::contain(int num, int digit) {
	int tensDigit = num / 10;
	return (tensDigit % 10 == digit) || (num % 10 == digit);
}

bool FizzBuzzGame::IsMultipleOf(int num, int digit) {
	return (num % digit == 0);
}

bool FizzBuzzGame::IsMultipleOfThirdDigit(int num) {
	return IsMultipleOf(num, _thirdDigit);
}

bool FizzBuzzGame::IsMultipleOfSecondDigit(int num) {
	return IsMultipleOf(num, _secondDigit);
}

bool FizzBuzzGame::IsMultipleOfFirstDigit(int num) {
	return IsMultipleOf(num, _firstDigit);
}

string FizzBuzzGame::handle(int num) {
	if (contain(num, _firstDigit)) {
		return "fizz";
	}

	if (IsMultipleOfThirdDigit(num) && IsMultipleOfSecondDigit(num)
			&& IsMultipleOfFirstDigit(num)) {
		return "fizzbuzzwhizz";
	}

	if (IsMultipleOfSecondDigit(num)
			&& IsMultipleOfFirstDigit(num)) {
		return "fizzbuzz";
	}
	if (IsMultipleOfThirdDigit(num) && IsMultipleOfSecondDigit(num)) {
		return "buzzwhizz";
	}

	return _m3->Transfer(num);
}

} /* namespace kata */
