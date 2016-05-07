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
class Rule;
class FizzBuzzGame {
public:
	FizzBuzzGame(int first, int second, int third);
	~FizzBuzzGame();
	std::string handle(int num);

private:
	int _secondDigit;
	int _thirdDigit;
	int _firstDigit;
	Rule* _containFirstDigit;
	Rule* _multipleOfFirstDigit;
	Rule* _multipleOfSecondDigit;
	Rule* _multipleOfThirdDigit;


};

} /* namespace kata */

#endif /* INCLUDE_FIZZBUZZGAME_H_ */
