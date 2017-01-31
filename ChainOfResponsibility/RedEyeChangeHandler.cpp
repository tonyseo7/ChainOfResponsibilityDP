#include "stdafx.h"
#include "RedEyeChangeHandler.h"

RedEyeChangeHandler::RedEyeChangeHandler(int hid) :ChangeHandler(hid)
{

}

string RedEyeChangeHandler::ChangeRequest(Mode mode, string picture)
{
	if (IncludeMode(mode))
	{
		int index = -1;

		while ((index = picture.find("利格", index + 1)) != -1)
		{
			picture.replace(index, strlen("利格"), "沥惑传");
		}
	}

	ChangeHandler *successor = GetSuccessor();

	if (successor != 0)
	{
		picture = successor->ChangeRequest(mode, picture);
	}

	return picture;
}