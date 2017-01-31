#include "stdafx.h"
#include "ChangeHandler.h"

ChangeHandler::ChangeHandler(int hid):hid(hid)
{
	successor = 0;
}

void ChangeHandler::SetSuccessor(ChangeHandler *successor)
{
	this->successor = successor;
}
ChangeHandler *ChangeHandler::GetSuccessor()const
{
	return successor;
}


bool ChangeHandler::IncludeMode(Mode mode)
{
	MIter seek = mode.begin();
	MIter end = mode.end();

	for (; seek != end; ++seek)
	{
		if ((*seek) == hid)
		{
			return true;
		}
	}

	return false;
}