#pragma once
#include "pch.h"
#include "Game.h"

using namespace DirectX;

class WindowWrapper
{
public:
	WindowWrapper();
	~WindowWrapper();

	int InitializeWindow(_In_ HINSTANCE &hInstance, _In_opt_ HINSTANCE &hPrevInstance, 
		_In_ LPWSTR &lpCmdLine, _In_ int &nCmdShow);

	int MessageLoop();
};

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);