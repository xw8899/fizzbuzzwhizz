/*
 * FizzBuzzGame.cpp
 *
 *  Created on: 2016Äê5ÔÂ4ÈÕ
 *      Author: Administrator
 */

#include <FizzBuzzGame.h>
#include <sstream>
using namespace std;
namespace kata {

FizzBuzzGame::FizzBuzzGame(int first, int second, int third) {
	_firstDigit = first;
	_secondDigit = second;
	_thirdDigit = third;
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

	if (IsMultipleOfFirstDigit(num)) {
		return "fizz";
	}

	if (IsMultipleOfSecondDigit(num)) {
		return "buzz";
	}

	if (IsMultipleOfThirdDigit(num)) {
		return "whizz";
	}

	ostringstream os;
	os << num;
	return os.str();
}

} /* namespace kata */
