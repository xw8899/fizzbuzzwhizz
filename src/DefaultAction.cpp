/*
 * DefaultAction.cpp
 *
 *  Created on: 2016��5��8��
 *      Author: Administrator
 */

#include <DefaultAction.h>
#include <sstream>
namespace kata {

DefaultAction::DefaultAction() {
	// TODO Auto-generated constructor stub

}

DefaultAction::~DefaultAction() {
	// TODO Auto-generated destructor stub
}

string DefaultAction::Transfer(int num) {

	ostringstream os;
	os << num;
	return os.str();
}
} /* namespace kata */
