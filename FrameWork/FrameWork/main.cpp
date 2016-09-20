////////////////////////////////////////////////////////////////////////////////
// Filename: main.cpp
////////////////////////////////////////////////////////////////////////////////
//#include "systemclass.h"

#include "DXSystem.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int iCmdshow)
{
	DXSystem* System;
	bool result;

	// system ��ü�� �����Ѵ�.
	System = new DXSystem;
	if (!System)
	{
		return 0;
	}

	// system ��ü�� �ʱ�ȭ�ϰ� run�� ȣ���Ѵ�.
	result = System->Initialize();
	if (result)
	{
		System->Run();
	}

	// system��ü�� �����ϰ� �޸𸮸� ��ȯ�Ѵ�.
	System->Shutdown();
	delete System;
	System = 0;

	return 0;
}