#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    player  = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);
    cout << "\n";

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);
    cout << "\n";

    chooseWinner(player, computer);



    return 0;
}

char getUserChoice(){
    char player;

    do{
        cout << "Rock-Paper-Scissors" << endl;
        cout << "********************" << endl;
        cout << "r for rock" << endl;
        cout << "p for paper" << endl;
        cout << "s for scissors" << endl;
        cin >> player;

    } while (player == 'r' && player == 'p' && player == 's');
}

char getComputerChoice(){

    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}

void showChoice(char choice){
    switch(choice){
        case 'r': cout << "rock";
            break;
        case 'p': cout << "paper";
            break;
        case 's': cout << "scissors";
            break;
    }
} 

void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){
                    cout << "Tie!";
                  }
                  else if(computer == 'p'){
                    cout << "You lose!";
                  }
                  else{
                    cout << "You win!";
                  }
            break;
        case 'p': if (computer == 'r'){
                    cout << "You win!";
                  }
                    else if (computer == 'p'){
                    cout << "Tie!";
                  }
                    else{
                    cout << "You lose!";
                  }
            break;
        case 's':if (computer == 'r'){
                    cout << "You lose!";
                  }
                    else if (computer == 'p'){
                    cout << "You win!";
                  }
                    else{
                    cout << "Tie!";
                  }
            break;
    }
}