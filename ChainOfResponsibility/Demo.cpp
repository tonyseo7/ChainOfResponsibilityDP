#include "stdafx.h"
#include "UIPart.h"

void main()
{
	string picture = "";
	Mode mode;
	ChangeHandler *handler[3];
	handler[0] = new GrayChangeHandler(0);
	handler[1] = new SoftChangeHandler(1);
	handler[2] = new RedEyeChangeHandler(2);
	
	UIPart *uipart = new UIPart();

	uipart->AddChangeHandler(handler[0]);
	uipart->AddChangeHandler(handler[1]);
	uipart->AddChangeHandler(handler[2]);

	picture = uipart->ChangeRequest(mode, "漠扼 利格 箕橇 岗咙");
	cout << picture << endl;
	mode.push_back(0);
	picture = uipart->ChangeRequest(mode, "漠扼 利格 箕橇 岗咙");
	cout << picture << endl;
	mode.push_back(2);
	picture = uipart->ChangeRequest(mode, "漠扼 利格 箕橇 岗咙");
	cout << picture << endl;
	mode.push_back(1);
	picture = uipart->ChangeRequest(mode, "漠扼 利格 箕橇 岗咙");
	cout << picture << endl;


}