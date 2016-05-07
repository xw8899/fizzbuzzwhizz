/*
 * FizzBuzzGame.cpp
 *
 *  Created on: 2016Äê5ÔÂ4ÈÕ
 *      Author: Administrator
 */

#include <FizzBuzzGame.h>
#include <sstream>
#include "Contain.h"
#include "MultipleOf.h"
using namespace std;
namespace kata {

FizzBuzzGame::FizzBuzzGame(int first, int second, int third) {
	_firstDigit = first;
	_secondDigit = second;
	_thirdDigit = third;
	_containFirstDigit = new Contain(first);
	_multipleOfFirstDigit = new MultipleOf(first);
	_multipleOfSecondDigit = new MultipleOf(second);
	_multipleOfThirdDigit = new MultipleOf(third);
}

FizzBuzzGame::~FizzBuzzGame()
{
	delete _containFirstDigit;
	delete _multipleOfFirstDigit;
	delete _multipleOfSecondDigit;
	delete _multipleOfThirdDigit;
}

string FizzBuzzGame::handle(int num) {
	if (_containFirstDigit->Matched(num)) {
		return "fizz";
	}

	if (_multipleOfThirdDigit->Matched(num) && _multipleOfSecondDigit->Matched(num)
			&& _multipleOfFirstDigit->Matched(num)) {
		return "fizzbuzzwhizz";
	}

	if (_multipleOfSecondDigit->Matched(num)
			&& _multipleOfFirstDigit->Matched(num)) {
		return "fizzbuzz";
	}
	if (_multipleOfThirdDigit->Matched(num) && _multipleOfSecondDigit->Matched(num)) {
		return "buzzwhizz";
	}

	if (_multipleOfFirstDigit->Matched(num)) {
		return "fizz";
	}

	if (_multipleOfSecondDigit->Matched(num)) {
		return "buzz";
	}

	if (_multipleOfThirdDigit->Matched(num)) {
		return "whizz";
	}

	ostringstream os;
	os << num;
	return os.str();
}

} /* namespace kata */
