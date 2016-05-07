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
#include "AllOf.h"
#include "AnyOf.h"
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
	_allOf123 = new AllOf();
	_allOf123->AddRule(_multipleOfFirstDigit);
	_allOf123->AddRule(_multipleOfSecondDigit);
	_allOf123->AddRule(_multipleOfThirdDigit);
	_allOf12 = new AllOf();
	_allOf12->AddRule(_multipleOfFirstDigit);
	_allOf12->AddRule(_multipleOfSecondDigit);
	_allOf23 = new AllOf();
	_allOf23->AddRule(_multipleOfSecondDigit);
	_allOf23->AddRule(_multipleOfThirdDigit);
	_anyOf = new AnyOf();
	_anyOf->AddRule(_containFirstDigit);
	_anyOf->AddRule(_allOf123);
	_anyOf->AddRule(_allOf12);
	_anyOf->AddRule(_allOf23);
	_anyOf->AddRule(_multipleOfFirstDigit);
	_anyOf->AddRule(_multipleOfSecondDigit);
	_anyOf->AddRule(_multipleOfThirdDigit);
}

FizzBuzzGame::~FizzBuzzGame() {
	delete _containFirstDigit;
	delete _multipleOfFirstDigit;
	delete _multipleOfSecondDigit;
	delete _multipleOfThirdDigit;
	delete _allOf123;
	delete _allOf12;
	delete _allOf23;
	delete _anyOf;
}

string FizzBuzzGame::handle(int num) {
	if (_containFirstDigit->Matched(num)) {
		return "fizz";
	}

	if (_allOf123->Matched(num)) {
		return "fizzbuzzwhizz";
	}

	if (_allOf12->Matched(num)) {
		return "fizzbuzz";
	}
	if (_allOf23->Matched(num)) {
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
