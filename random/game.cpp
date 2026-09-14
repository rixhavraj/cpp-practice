//ROCK-PAPPER-SCISSOR GAME.... 

#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player= getUserChoice();
    cout<< "Your Choice: " ;
    showChoice(player);

    computer=getComputerChoice();
    cout<<"computer's Choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;

}

char getUserChoice(){

    char player;
    cout<<"Rock - Papper - Scissor Game...!\n";

    do{
        cout<<"'R' for Rock\n";
        cout<<"'P' for Paper\n";
        cout<<"'S' for Scissor\n";
        cout<<"Enter your choice: \n";
        cin>> player;
    }while(player!='R' && player!= 'P' && player!='S');
    return player;
}

char getComputerChoice(){
    srand(time(0));
    int num = rand()%3+1;

    switch(num){
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
    
    }

}

void showChoice(char choice){
    switch(choice){

    case 'R': cout<<"Rock\n";
    break;

    case 'P': cout<<"Paper\n";
    break;

    case 'S' : cout<<"Scissors\n";
    break;

    } 

}

void chooseWinner(char player, char computer){

    switch(player){
        case 'R': if(computer=='R'){
            cout<<"It's a tie\n";
        }else if (computer == 'P'){
            cout<<"You lose!\n";
        }
        else{
            cout<<"You win!!! Congratulations...\n";
        }
        break;

        case 'P': if(computer =='P'){
            cout<<"It's a tie\n";
        }else if(computer=='R'){
            cout<<"You win!!! Congratulations...\n";
            }
            else{
                cout<<"You lose";
            }
            break;

            case  'S': if(computer=='S'){
                cout<<"It's a tie\n";
            }else if(computer =='P'){
                cout<<"You win!!! Congratulations...\n";
            }
            else{
                cout<<"You lose";
            }
        }
    }


