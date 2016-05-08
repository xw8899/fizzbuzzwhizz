/*
 * FizzBuzzGame.cpp
 *
 *  Created on: 2016Äê5ÔÂ4ÈÕ
 *      Author: Administrator
 */

#include <FizzBuzzGame.h>
#include "Handler.h"
#include "DefaultAction.h"
#include "FizzAction.h"
#include "BuzzAction.h"
#include "WhizzAction.h"
#include "DefaultMatcher.h"
#include "MultipleMatcher.h"
#include "CompositeAction.h"
#include "CompositeMatcher.h"
#include "ContainMatcher.h"

using namespace std;
namespace kata {

FizzBuzzGame::FizzBuzzGame(int first, int second, int third) {
	_default = new Handler(NULL, new DefaultMatcher(), new DefaultAction());
	_m1 = new Handler(_default, new MultipleMatcher(first),
			new FizzAction());
	_m2 = new Handler(_m1, new MultipleMatcher(second), new BuzzAction());
	_m3 = new Handler(_m2, new MultipleMatcher(third), new WhizzAction());
	CompositeAction *ca12 = new CompositeAction();
	ca12->AddAction(new FizzAction());
	ca12->AddAction(new BuzzAction());
	CompositeAction *ca23 = new CompositeAction();
	ca23->AddAction(new BuzzAction());
	ca23->AddAction(new WhizzAction());
	CompositeAction *ca123 = new CompositeAction();
	ca123->AddAction(new FizzAction());
	ca123->AddAction(new BuzzAction());
	ca123->AddAction(new WhizzAction());

	CompositeMatcher * cm12 = new CompositeMatcher();
	cm12->AddMatcher(new MultipleMatcher(first));
	cm12->AddMatcher(new MultipleMatcher(second));
	CompositeMatcher * cm23 = new CompositeMatcher();
	cm23->AddMatcher(new MultipleMatcher(second));
	cm23->AddMatcher(new MultipleMatcher(third));
	CompositeMatcher * cm123 = new CompositeMatcher();
	cm123->AddMatcher(new MultipleMatcher(first));
	cm123->AddMatcher(new MultipleMatcher(second));
	cm123->AddMatcher(new MultipleMatcher(third));

    _m12 = new Handler(_m3, cm12, ca12);
    _m23 = new Handler(_m12, cm23, ca23);
    _m123 = new Handler(_m23, cm123, ca123);
    _mc = new Handler(_m123, new ContainMatcher(first), new FizzAction());

}

FizzBuzzGame::~FizzBuzzGame() {
	delete _default;
	delete _m1;
	delete _m2;
	delete _m3;
	delete _m12;
	delete _m23;
	delete _m123;
	delete _mc;
}


string FizzBuzzGame::handle(int num) {
	return _mc->Transfer(num);
}

} /* namespace kata */
