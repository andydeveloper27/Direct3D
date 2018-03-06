#include "pch.h"
#include "GameEngine.h"

GameEngine::GameEngine()
{
}

GameEngine::~GameEngine()
{
	delete windowWrapper;
}

void GameEngine::InitializeGame(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
{
	windowWrapper = new WindowWrapper;

	windowWrapper->InitializeWindow(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}

void GameEngine::RunGame()
{
	windowWrapper->MessageLoop();
}