/*
 * DefaultRule.cpp
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#include <DefaultHandler.h>

namespace kata {

DefaultHandler::DefaultHandler(Action* action) : Handler(NULL, action) {
	// TODO Auto-generated constructor stub

}

DefaultHandler::~DefaultHandler() {
}

bool DefaultHandler::Matched(int num) {
	return true;
}

string DefaultHandler::Transfer(int num) {

	return Handler::Act(num);
}
} /* namespace kata */
