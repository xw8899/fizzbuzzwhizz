/*
 * FizzBuzzGame.h
 *
 *  Created on: 2016Äê5ÔÂ4ÈÕ
 *      Author: Administrator
 */

#ifndef INCLUDE_FIZZBUZZGAME_H_
#define INCLUDE_FIZZBUZZGAME_H_
#include <string>
#include <vector>
using namespace std;
namespace kata {

class Handler;
class FizzBuzzGame {
public:
	FizzBuzzGame(int first, int second, int third);
	~FizzBuzzGame();
	string handle(int num);

private:
	vector<Handler*> _handlers;
};

} /* namespace kata */

#endif /* INCLUDE_FIZZBUZZGAME_H_ */
