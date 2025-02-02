#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
 {
    int user = 0;
    int computer = 0;
    int userScore = 0;
    int computerScore = 0; 

    cout << "Stone Paper Scissor Game" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissor" << endl;

    while(true)
	 {
        cin >> user;

        if(user == 1) 
		{
            cout << "You choose Rock" << endl;
        } else if(user == 2) 
		{
            cout << "You choose Paper" << endl;
        } else
		 {
            cout << "You choose Scissor" << endl;
        }

        srand(time(0));
        computer = rand()%3+1;

        if(computer == 1)
		 {
            cout << "Computer chooses Rock" << endl;
        } else if(computer == 2)
		 {
            cout << "Computer chooses Paper"<< endl;
        } else 
		{
            cout << "Computer chooses Scissor" << endl;
        }
        if(user == computer) 
		{
            cout << "Match Tie" << endl;
        }
        else if(user == 1) 
		{
            if(computer == 2 )
			{
                cout << "You lose!" << endl;
                computerScore++;
            }
            if(computer == 3)
			 {
                cout << "You win!" << endl;
                userScore++;
            }
        }
        else if(user == 2)
		 {
            if(computer == 1)
			 {
                cout << "You win!" << endl;
                userScore++;
            }
            if(computer == 3) 
			{
                cout << "You lose!" << endl;
                computerScore++;
            }
        }
        else if(user == 3)
		 {
            if(computer == 1) 
			{
                cout << "You lose!" << endl;
                computerScore++;
            }
            if(computer == 2)
			 {
                cout << "You win!" << endl;
                userScore++;
            }
        }

        cout << "Score - You: " << userScore << ", Computer: " << computerScore << endl;
        cout << "Do you want to play again? (1/0): ";
        int playAgain;
        cin >> playAgain;
        if(playAgain == 0) {
            break;
        }
    }

    return 0;
}



