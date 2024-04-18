#include<iostream>
#include<string>

using namespace std;

string spot[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
bool turn = true;

int getin()
{
	int input;
	cin >> input;
	///placing the mark on the chosen spot
	if(input > 0 && input >! 9)
	{
		if(spot[input] != "X" && spot[input] != "O")
		{
			if(input == stoi(spot[input]))
			{
				if(turn == true)
				{
					spot[input] = "O";
					turn = false;
				}
				else {
					turn = true;
					spot[input] = "X";
				}
			}
		}
		else {
			cout << "Invalid Input" << endl;
		}
	}
	else {
		cout << "Invalid Input" << endl;
	}
	
	
	
	cout << input << " " << spot[input] << endl;
	
	return input;
	
}
	
int PrintResults()
{
	system("cls");
	for(int i = 1; i < 9; ++i) {
		cout << spot[i] << " | " ;
		++i;
		cout << spot[i] << " | " ;
		++i;
		cout << spot[i] << endl;
	}

	return 1;
}

int main()
{
	
	PrintResults();
	while(1) {
		getin();
		PrintResults();

		///Player X winning conditions
		if(spot[1] == "X" && spot[2] == "X" && spot[3] == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
        }
		else if(spot[4] == "X" && spot[5] == "X" && spot[6] == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
        }
		else if(spot[7] == "X" && spot[8] == "X" && spot[9] == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
        }
		else if(spot[1] == "X" && spot[4] == "X" && spot[7] == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
        }  
		else if(spot[2] == "X" && spot[5] == "X" && spot[8] == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
        }   
		else if(spot[3] == "X" && spot[6] == "X" && spot[9] == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
        }    
		else if(spot[1] == "X" && spot[5] == "X" && spot[9] == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
        }  
		else if(spot[3] == "X" && spot[5] == "X" && spot[7] == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
        } 


		///Player O winning conditions
		if(spot[1] == "O" && spot[2] == "O" && spot[3] == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
        }
		else if(spot[4] == "O" && spot[5] == "O" && spot[6] == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
        }
		else if(spot[7] == "O" && spot[8] == "O" && spot[9] == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
        }
		else if(spot[1] == "O" && spot[4] == "O" && spot[7] == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
        }  
		else if(spot[2] == "O" && spot[5] == "O" && spot[8] == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
        }   
		else if(spot[3] == "O" && spot[6] == "O" && spot[9] == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
        }    
		else if(spot[1] == "O" && spot[5] == "O" && spot[9] == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
        }  
		else if(spot[3] == "X" && spot[5] == "X" && spot[7] == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
        }
	}
	
	return 0;
}
	
