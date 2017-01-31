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

		while ((index = picture.find("����", index + 1)) != -1)
		{
			picture.replace(index, strlen("����"), "����");
		}
	}

	ChangeHandler *successor = GetSuccessor();

	if (successor != 0)
	{
		picture = successor->ChangeRequest(mode, picture);
	}

	return picture;
}