/*
 * DefaultRule.cpp
 *
 *  Created on: 2016Äê5ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include <DefaultRule.h>
#include <sstream>

namespace kata {

DefaultRule::DefaultRule() : Handler(NULL) {
	// TODO Auto-generated constructor stub

}

DefaultRule::~DefaultRule() {
	// TODO Auto-generated destructor stub
}

bool DefaultRule::Matched(int num) {
	return true;
}

string DefaultRule::Transfer(int num) {

	ostringstream os;
	os << num;
	return os.str();
}
} /* namespace kata */
