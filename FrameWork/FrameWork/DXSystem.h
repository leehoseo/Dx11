#pragma once

// ���� ������ �ʴ� API���� ����ִ� Win32 ����� �������� �ʴ´�
#define WIN32_LEAN_AND_MEAN

// �����츦 ����/�����ϴ� �Լ���
#include <windows.h>
#include "Graphics.h"
#include "Input.h"

class DXSystem
{
public:
	DXSystem();
	DXSystem(const DXSystem& );
	~DXSystem();

	bool Initialize();
	void Shutdown();
	void Run();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);

private:
	bool Frame();
	void InitializeWindows(int&, int&);
	void ShutdownWindows();

private:
	LPCWSTR m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;

	Input* m_pInput;
	Graphics* m_pGraphics;
};

static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


/////////////
// GLOBALS //
/////////////
static DXSystem* ApplicationHandle = 0;