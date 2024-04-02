#include<iostream>
#include<string>


using namespace std;

string spt1, spt2, spt3, spt4, spt5, spt6, spt7, spt8, spt9;
int chdspt = 0;


bool turn;

int conditions(){
if(chdspt > 0 && chdspt << 10 )
{
	system("cls");
    if(turn == true)
        {
            switch(chdspt){
                case 1:
					if(spt1.empty()){
						spt1 = "O";
						turn = false;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
					
                break;
                
                case 2:
                if(spt2.empty()){
						spt2 = "O";
						turn = false;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 3:
                if(spt3.empty()){
						spt3 = "O";
						turn = false;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 4:
                if(spt4.empty()){
						spt4 = "O";
						turn = false;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 5:
                if(spt5.empty()){
						spt5 = "O";
						turn = false;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 6:
                if(spt6.empty()){
						spt6 = "O";
						turn = false;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 7:
                if(spt7.empty()){
						spt7 = "O";
						turn = false;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 8:
                if(spt8.empty()){
						spt8 = "O";
						turn = false;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 9:
                if(spt9.empty()){
						spt9 = "O";
						turn = false;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					};
                break;
                
                default:
                
                break;
                }
                
        
        }
        
        else if(turn == false)
        {
            switch(chdspt){
                case 1:
                if(spt1.empty()){
						spt1 = "X";
						turn = true;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 2:
                if(spt2.empty()){
						spt2 = "X";
						turn = true;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 3:
                if(spt3.empty()){
						spt3 = "X";
						turn = true;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 4:
                if(spt4.empty()){
						spt4 = "X";
						turn = true;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 5:
                if(spt5.empty()){
						spt5 = "X";
						turn = true;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 6:
                if(spt6.empty()){
						spt6 = "X";
						turn = true;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 7:
                if(spt7.empty()){
						spt7 = "X";
						turn = true;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 8:
                if(spt8.empty()){
						spt8 = "X";
						turn = true;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                case 9:
                if(spt9.empty()){
						spt9 = "X";
						turn = true;
					}
					else{
						chdspt = 0;
						cout << "invalid input Please Try Again" << endl;
					}
                break;
                
                default:
                
                break;
                }
            
        }
        
}
else{
cout << "invalid input Please Try Again" << endl;
chdspt = 0;
}        
        
        return 0;

}
int main()
{
	system("cls");
	cout << "TIC TAC TOE GAME PRESENTATION BY ABDO ASHRIEF" << endl;
	cout << spt1 << "  I  " << spt2 << "  I  " << spt3 << endl;
    cout << spt4 << "  I  " << spt5 << "  I  " << spt6 << endl;
    cout << spt7 << "  I  " << spt8 << "  I  " << spt9 << endl;
	
    while(1){
		//system("cls");
        cin >> chdspt ;
        conditions();
        cout << spt1 << "  I  " << spt2 << "  I  " << spt3 << endl;
        cout << spt4 << "  I  " << spt5 << "  I  " << spt6 << endl;
        cout << spt7 << "  I  " << spt8 << "  I  " << spt9 << endl;
		cout << "--DEBUG--" << endl;
		cout << "The chosen spot : " << chdspt << endl;
		cout << "Player Turn : " << turn << endl;
        chdspt = 0;
        
        if(spt1 == "X" && spt2 == "X" && spt3 == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
            
        }
		else if(spt4 == "X" && spt5 == "X" && spt6 == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
            
        }
		else if(spt7 == "X" && spt8 == "X" && spt9 == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
            
        }
		else if(spt1 == "X" && spt4 == "X" && spt7 == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
            
        }  
		else if(spt2 == "X" && spt5 == "X" && spt8 == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
            
        }   
		else if(spt3 == "X" && spt6 == "X" && spt9 == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
            
        }    
		else if(spt1 == "X" && spt5 == "X" && spt9 == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
            
        }  
		else if(spt3 == "X" && spt5 == "X" && spt7 == "X")
        {
            cout << "X WINS THE GAME" << endl;
			break;
            
        }    
		if(spt1 == "O" && spt2 == "O" && spt3 == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
            
        }
		else if(spt4 == "O" && spt5 == "O" && spt6 == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
            
        }
		else if(spt7 == "O" && spt8 == "O" && spt9 == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
            
        }
		else if(spt1 == "O" && spt4 == "O" && spt7 == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
            
        }  
		else if(spt2 == "O" && spt5 == "O" && spt8 == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
            
        }   
		else if(spt3 == "O" && spt6 == "O" && spt9 == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
            
        }    
		else if(spt1 == "O" && spt5 == "O" && spt9 == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
            
        }  
		else if(spt3 == "O" && spt5 == "O" && spt7 == "O")
        {
            cout << "O WINS THE GAME" << endl;
			break;
            
        }    
		
    
    }
    return 0;
}