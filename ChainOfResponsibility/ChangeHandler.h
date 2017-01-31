#pragma once
#include "common.h"
typedef vector<int> Mode;
typedef vector<int>::const_iterator MIter;

class ChangeHandler
{
	ChangeHandler *successor;
	const int hid;

public:
	ChangeHandler(int hid);
	virtual string ChangeRequest(Mode mode, string picure) = 0;
	void SetSuccessor(ChangeHandler *successor);
	ChangeHandler *GetSuccessor()const;

protected:
	bool IncludeMode(Mode mode);
};
