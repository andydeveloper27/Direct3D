//
// Main.cpp
//

#include "pch.h"
#include "GameEngine.h"

// Entry point
int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
{
	// GameEngine pointer
	GameEngine* gameEngine = new GameEngine; 

	// Initialize game
	gameEngine->InitializeGame(hInstance, hPrevInstance, lpCmdLine, nCmdShow);

	// Run game
	gameEngine->RunGame();

	// Delete pointer after we've finished with it
	delete gameEngine;
    
	return 0;
}