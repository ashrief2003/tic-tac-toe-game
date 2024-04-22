#include <iostream>
#include <string>

using namespace std;



char spot[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int turn = 0; //0 = X, 1 = O


bool chooseSpot()
{
	int chosenSpot;
	char input[1];
	cout << "Choose spot: ";
	cin >> input;

	try
	{
		chosenSpot = stoi(string("")+input[0]);
	}
	catch (std::invalid_argument)
	{
		cout << "Invalid Input.\n";
		return 0;
	}
	

	///placing the mark on the chosen spot
	if (chosenSpot >= 1 && chosenSpot <= 9)
	{
		chosenSpot--;

		if (spot[chosenSpot] != 'X' && spot[chosenSpot] != 'O')
		{
			switch (turn)
			{
			case 0:
			{
				spot[chosenSpot] = 'X';
				turn = 1;
				break;
			}
			case 1:
			{
				spot[chosenSpot] = 'O';
				turn = 0;
				break;
			}
			}
		}

		else {
			cout << "Spot is used.\n";
		}


		cout << "Spot " << (chosenSpot + 1) << ": " << spot[chosenSpot] << "\n";
	}
	
	else
	{
		cout << "Invalid Input.\n";
		return 0;
	}


	return 1;
}


void printGrid()
{
	cout << "\n\n";

	for (int i = 0; i < 9; i++)
	{
		if ((float(i + 1) / 3.0f) != int(float(i + 1) / 3.0f)) //check if i is not 3, 6, or 9
			cout << spot[i] << "|";

		else if (i != 8)
				cout << spot[i] << "\n------\n";

		else
			cout << spot[i] << "\n\n";
	}
}


void gameOver(int type)
{
  switch (type)
  {
  case 0:
  {
    cout << "X wins!";
    break;
  }
  case 1:
  {
    cout << "O wins!";
    break;
  }
  case 2:
  {
    cout << "Draw.";
    break;
  }
  }
}



int main()
{
	int spotsUsed = 0;
	int spotInt[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	int lineValue[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	bool gameIsOver = false;
	

	printGrid();
	while (1)
	{
		gameIsOver = false;
		
		
		if(chooseSpot()) //check if input is valid
			spotsUsed++;
		printGrid();
		
		
		if (spotsUsed > 2) //check who wins 
		{
			for (int i = 0; i < 9; i++)
			{
				switch (spot[i])
				{
				case 'X':
				{
					spotInt[i] = 1;
					break;
				}
				case 'O':
				{
					spotInt[i] = -1;
					break;
				}
				default:
				{
					spotInt[i] = 0;
					break;
				}
				}
			}


			lineValue[0] = spotInt[0] + spotInt[1] + spotInt[2];
			lineValue[1] = spotInt[3] + spotInt[4] + spotInt[5];
			lineValue[2] = spotInt[6] + spotInt[7] + spotInt[8];

			lineValue[3] = spotInt[0] + spotInt[3] + spotInt[6];
			lineValue[4] = spotInt[1] + spotInt[4] + spotInt[7];
			lineValue[5] = spotInt[2] + spotInt[5] + spotInt[8];

			lineValue[6] = spotInt[0] + spotInt[4] + spotInt[8];
			lineValue[7] = spotInt[2] + spotInt[4] + spotInt[6];


			for (int i = 0; i < 8; i++)
			{
				switch (lineValue[i])
				{
				case 3:
				{
					gameOver(0); //0 = X
					gameIsOver = true;
					break;
				}
				case -3:
				{
					gameOver(1); //1 = O
					gameIsOver = true;
					break;
				}
				}
				
				if (gameIsOver) break;
			}


			if (!gameIsOver && spotsUsed >= 9)
			{
				gameOver(2); //2 = draw
				gameIsOver = true;
			}
			
			if (gameIsOver)
				return 0;
		}
	}
}
