#pragma once
#include "WindowWrapper.h"

class GameEngine
{
public:
	GameEngine();
	~GameEngine();

	void InitializeGame(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance,
		_In_ LPWSTR lpCmdLine, _In_ int nCmdShow);

	void RunGame();

private:
	WindowWrapper* windowWrapper;
};