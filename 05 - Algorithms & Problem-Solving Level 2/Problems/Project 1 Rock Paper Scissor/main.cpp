#include <iostream>

using namespace std;

enum enChoice
{
  rock = 1,
  paper = 2,
  scissor = 3
};

int RandomNumber()
{
  int rand_num = rand() % (3 - 1 + 1) + 1;

  return rand_num;
}

int ReadRound()
{
  cout << "How many round(s) you want to play?\n";

  int round = 0;

  cin >> round;

  return round;
}

string GetChoiceName(enChoice Choice)
{
  switch (Choice)
  {
  case rock:
    return "rock";
  case paper:
    return "paper";
  case scissor:
    return "scissor";
  default:
    return "unknown";
  }
}

enChoice GetPlyerChoice()
{
  int input;
  while (true)
  {
    cout << "Enter your choice (1 for rock, 2 for paper, 3 for scissor): ";
    cin >> input;

    if (input >= rock && input <= scissor)
    {
      return static_cast<enChoice>(input);
    }
    else
    {
      cout << "Invalid choice. Please try again." << endl;
    }
  }
}

enChoice GetComputerChoice()
{
  int computerChoice = RandomNumber();

  return static_cast<enChoice>(computerChoice);
}

string GetPlayerResult(string PlayerChoice, string ComputerChoice)
{
  cout << "Your Choice is: " << PlayerChoice;
  cout << "\nComputer Choice is: " << ComputerChoice << endl;

  if (PlayerChoice == ComputerChoice)
  {
    return "darw";
  }
  else if (PlayerChoice == "rock" && ComputerChoice == "paper")
  {
    return "lose";
  }
  else if (PlayerChoice == "rock" && ComputerChoice == "scissor")
  {
    return "win";
  }
  else if (PlayerChoice == "paper" && ComputerChoice == "scissor")
  {
    return "lose";
  }
  else if (PlayerChoice == "paper" && ComputerChoice == "rock")
  {
    return "win";
  }
  else if (PlayerChoice == "scissor" && ComputerChoice == "rock")
  {
    return "lose";
  }
  else if (PlayerChoice == "scissor" && ComputerChoice == "paper")
  {
    return "win";
  }
  else
  {
    return "";
  }
}

void PrintFinalResults(int PlayerScore, int ComputerScore)
{
  cout << "\n============================================\n";
  cout << "Your Score is: " << PlayerScore;
  cout << "\nComputer Score is: " << ComputerScore << endl;
  if (PlayerScore > ComputerScore)
  {
    cout << "You Win";
  }
  else if (ComputerScore > PlayerScore)
  {
    cout << "You Lose";
  }
  else
  {
    cout << "DRAW!";
  }
  cout << "\n============================================\n";
}

bool PlayAgain()
{
  int playAgain = 0;
  cout << "Do You Want to Play Again? " << "\tYes: 1\t No: 0" << endl;
  cin >> playAgain;

  if (playAgain == 0)
    return false;
  else if (playAgain == 1)
    return true;
  else
    return false;
}

bool StartPlaying(int Rounds)
{
  int PlayerScore = 0;
  int ComputerScore = 0;

  for (int i = 0; i < Rounds; i++)
  {

    string PlayerChoice = GetChoiceName(GetPlyerChoice());
    string ComputerChoice = GetChoiceName(GetComputerChoice());

    string PlayerResult = GetPlayerResult(PlayerChoice, ComputerChoice);

    if (PlayerResult == "win")
    {
      PlayerScore++;
    }
    else if (PlayerResult == "lose")
    {
      ComputerScore++;
    }
  }

  PrintFinalResults(PlayerScore, ComputerScore);

  return PlayAgain();
}

int main()
{
  bool play = StartPlaying(ReadRound());

  while (play)
  {
    StartPlaying(ReadRound());
  }

  return 0;
}