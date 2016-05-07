/*
 * AnyOf.cpp
 *
 *  Created on: 2016Äê5ÔÂ7ÈÕ
 *      Author: Administrator
 */

#include <AnyOf.h>
using namespace std;
namespace kata {

AnyOf::AnyOf() {
	// TODO Auto-generated constructor stub

}

AnyOf::~AnyOf() {
	// TODO Auto-generated destructor stub
}

void AnyOf::AddRule(Rule* rule)
{
	_rules.push_back(rule);
}
bool AnyOf::Matched(int num)
{
	if (_rules.size() == 0)
		return false;
	for(vector<Rule*>::iterator it = _rules.begin(); it != _rules.end(); ++it)
	{
		if ((*it)->Matched(num))
		{
			return true;
		}
	}
	return false;
}
} /* namespace kata */
