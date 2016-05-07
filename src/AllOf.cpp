/*
 * AllOf.cpp
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#include <AllOf.h>
using namespace std;

namespace kata {

AllOf::AllOf() {
	// TODO Auto-generated constructor stub

}

AllOf::~AllOf() {
	// TODO Auto-generated destructor stub
}
void AllOf::AddRule(Rule* rule)
{
	_rules.push_back(rule);
}
bool AllOf::Matched(int num)
{
	if (_rules.size() == 0)
		return false;
	for( vector<Rule*>::iterator it = _rules.begin(); it != _rules.end(); ++it)
	{
		if (!(*it)->Matched(num))
		{
			return false;
		}
	}
	return true;
}

} /* namespace kata */
