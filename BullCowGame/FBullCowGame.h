#pragma once
#include <string>
using FText = std::string;
using int32 = int;

class FBullCowGame
{
public:
	FBullCowGame(); //constructor
	void Reset();
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGuessValis(FText);
	bool IsGameWon() const;



private:
	int32 MyCurrentTry;
	int32 MyMaxTries;
};
