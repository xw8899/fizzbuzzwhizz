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
	Handler* _default;
	Handler* _m1;
	Handler* _m2;
	Handler* _m3;
	Handler* _m12;
		Handler* _m23;
		Handler* _m123;
		Handler* _mc;
};

} /* namespace kata */

#endif /* INCLUDE_FIZZBUZZGAME_H_ */
