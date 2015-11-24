
// Title: Computer Guessing Game 
// Description: Keep letting the computer guess your number and add the attempts at the end of the game.
// Author: Blake Neu
// Date: 7/10/2015
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    // seed random number.
    srand(int(time(0)));

    int CountAttempts = 0;
    int Computer;
    int UserNumber;
    int Low = 1;
    int Quarter = 25;
    int Middle = 50;
    int QuarterUp = 75;
    int High = 101;
    int Attempts = 0;
    int ans = 1;

    while(ans == 1){
        // starts counting when the user wants to play the computer again.
        Attempts++;

        // stream << cout vs printf().
        cout << "Welcome to Guess My Number" << endl;
        cout << "Enter a number: ";
        // streams << cin vs scanf().
        cin >> UserNumber;

        if(UserNumber < 1 || UserNumber > 100){
            cout << "The number is outside the limits." << endl;

        }else{

            do{

                if(UserNumber < 25 && UserNumber > 0){ //...Main if statement.
                    Computer = rand() % (Quarter - Low + 1) + Low;
                    cout << "\nComputer's guess: ";
                    cout << Computer;
                    // counts the number of tries ex: it took the computer (x) times to arrive at your number.
                    ++CountAttempts;

                    if (UserNumber > Computer){//... Nested if.
                        cout << "\nYou're too low..!";
                        Low = Computer+1;


                    }else if (UserNumber < Computer){
                        std::cout << "\nToo high..!";
                        Quarter = Computer-1;

                    }

                }else if(UserNumber > 24 && UserNumber < 50){ //...Main else if statement.
                    Computer = rand() % (Middle - Quarter + 1) + Quarter;
                    cout << "\nComputer's guess: ";
                    cout << Computer;
                    ++CountAttempts;

                    if (UserNumber > Computer){//... Nested if.
                        cout << "\nYou're too low..!";
                        Quarter = Computer+1;

                    }else if (UserNumber < Computer){
                        cout << "\nToo high..!";
                        Middle = Computer-1;
                    }

                }else if(UserNumber > 49 && UserNumber < 75){ //...
                    Computer = rand() % (QuarterUp - Middle + 1) + Middle;
                    cout << "\nComputer's guess: ";
                    cout << Computer;
                    ++CountAttempts;

                    if (UserNumber > Computer){//... Nested if.
                        cout << "\nYou're too low..!";
                        Middle = Computer+1;

                    }else if (UserNumber < Computer){
                        cout << "\nToo high..!";
                        QuarterUp = Computer-1;
                    }

                }else if(UserNumber > 74){ //...
                    Computer = rand() % (High - QuarterUp + 1) + QuarterUp;
                    cout << "\nComputer's guess: ";
                    cout << Computer ;
                    ++CountAttempts;

                    if (UserNumber > Computer){//... Nested if.
                        cout << "\nYou're too low..!";
                        QuarterUp = Computer+1;

                    }else if (UserNumber < Computer){
                        cout << "\nToo high..!";
                        High = Computer-1;
                    }

                }//...End of main if statement.

            }while(UserNumber != Computer);

            cout << "\n\nYou got it! in " << CountAttempts << " attempts." << std::endl;
            cout << "Play again?" << endl;
            cout << "\nPress (1): to keep playing \nPress (another key to stop playing.)" << endl;
            cin >> ans;

            if(ans != 1){
                cout << "Thanks for playing!" << endl;
                cout << "Attempts: " << Attempts << endl;
            }else{}

            }

    }

return 0;
}

