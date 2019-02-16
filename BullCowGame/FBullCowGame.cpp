#include "FBullCowGame.h"


bool FBullCowGame::IsGameWon() const {return false;}
int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }

int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGuessValis(FText)
{
	return false;
}

FBullCowGame::FBullCowGame()
{
	MyCurrentTry = 1;
	MyMaxTries = 5;
}

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyCurrentTry = 1;
	MyMaxTries = MAX_TRIES;
	return;
}