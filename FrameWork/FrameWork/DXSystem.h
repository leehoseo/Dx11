#pragma once

// 자주 사용되지 않는 API들을 담고있는 Win32 헤더를 포함하지 않는다
#define WIN32_LEAN_AND_MEAN

// 윈도우를 생성/제거하는 함수들
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