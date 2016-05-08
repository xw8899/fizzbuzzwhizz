/*
 * FizzBuzzGame.h
 *
 *  Created on: 2016Äê5ÔÂ4ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_FIZZBUZZGAME_H_
#define INCLUDE_FIZZBUZZGAME_H_
#include <string>

namespace kata {

class Handler;
class FizzBuzzGame {
public:
	FizzBuzzGame(int first, int second, int third);
	~FizzBuzzGame();
	std::string handle(int num);

private:
	bool contain(int num, int digit);
	bool IsMultipleOfThirdDigit(int num);
	bool IsMultipleOfSecondDigit(int num);
	bool IsMultipleOfFirstDigit(int num);
	bool IsMultipleOf(int num, int digit);

	int _secondDigit;
	int _thirdDigit;
	int _firstDigit;
	Handler* _defaultRule;
	Handler* _m1;
	Handler* _m2;
	Handler* _m3;
};

} /* namespace kata */

#endif /* INCLUDE_FIZZBUZZGAME_H_ */
