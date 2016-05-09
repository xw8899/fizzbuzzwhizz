/*
 * FizzBuzzGame.cpp
 *
 *  Created on: 2016Äê5ÔÂ4ÈÕ
 *      Author: Administrator
 */

#include "FizzBuzzGame.h"
#include "Handler.h"
#include "DefaultAction.h"
#include "DefaultMatcher.h"
#include "MultipleMatcher.h"
#include "CompositeAction.h"
#include "CompositeMatcher.h"
#include "ContainMatcher.h"

namespace kata {

const char* FIZZ = "fizz";
const char* BUZZ = "buzz";
const char* WHIZZ = "whizz";

FizzBuzzGame::FizzBuzzGame(int first, int second, int third) {
	Handler* _default = new Handler(NULL, new DefaultMatcher(), new DefaultAction());
	_handlers.push_back(_default);
	Handler* _m1 = new Handler(_default, new MultipleMatcher(first), new Action(FIZZ));
	_handlers.push_back(_m1);
	Handler* _m2 = new Handler(_m1, new MultipleMatcher(second), new Action(BUZZ));
	_handlers.push_back(_m2);
	Handler* _m3 = new Handler(_m2, new MultipleMatcher(third),	new Action(WHIZZ));
	_handlers.push_back(_m3);

	Handler* _m12 = new Handler(_m3,
    		new CompositeMatcher({new MultipleMatcher(first), new MultipleMatcher(second)}),
			new CompositeAction({new Action(FIZZ), new Action(BUZZ)}));
    _handlers.push_back(_m12);

    Handler* _m23 = new Handler(_m12,
    		new CompositeMatcher({new MultipleMatcher(second), new MultipleMatcher(third)}),
			new CompositeAction({new Action(BUZZ), new Action(WHIZZ)}));
    _handlers.push_back(_m23);

    Handler* _m123 = new Handler(_m23,
    		new CompositeMatcher({new MultipleMatcher(first),new MultipleMatcher(second),new MultipleMatcher(third)}),
			new CompositeAction({new Action(FIZZ),new Action(BUZZ),new Action(WHIZZ)}));
    _handlers.push_back(_m123);

    Handler* _mc = new Handler(_m123, new ContainMatcher(first), new Action(FIZZ));
    _handlers.push_back(_mc);
}

FizzBuzzGame::~FizzBuzzGame() {
	for (Handler* handler : _handlers)
	{
		delete handler;
	}
}

string FizzBuzzGame::handle(int num) {
	return _handlers.back()->Transfer(num);
}

} /* namespace kata */
