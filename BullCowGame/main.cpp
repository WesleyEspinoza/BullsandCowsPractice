#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
bool  AskToPlayAgain();
FText GetGuess();
FBullCowGame BCGame;

int main()
{
	bool bWantsToPlayAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		bWantsToPlayAgain = AskToPlayAgain();
	} while (bWantsToPlayAgain);

	return 0;
}

 

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again?";
	FText Response = "";
	std::getline(std::cin, Response);
	if (tolower(Response[0]) == 'y')
	{
		return true;
	}
	else {
		return false;
	}
	
}
void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	for (int32 i = 0; i < MaxTries; i++)
	{
		std::cout << GetGuess();
		std::cout << std::endl;
	} 

	// TODO Summarize 
}

void PrintIntro()
{
	// introduce the game		
	constexpr int32 WORD_LENGTH = 5;
	std::cout << "welcome to Bulls and Cows!" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram? \n" << std::endl;
	return;
}
FText GetGuess()
{
	int32 CurrentTry = BCGame.GetCurrentTry();
	// get a guess from the player
	std::cout << "Try: " << CurrentTry << " Enter your guess: ";
	FText Guess = "";
	std::getline(std::cin, Guess);

	//return guess
	return Guess;
}
