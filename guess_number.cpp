#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    int j=1,i=0;
    int limit=10;
    while(j==1){
        srand(time(0));
        int randomNum = rand()%100+1; //Create Random Number
        int num;
        char restart;
        char start;

        if(i>=limit){  //If you can't solve within Limit
            cout<<endl<<"You Lose"<<endl;
            cout<<"Want to play again? Press 'o'. "<<endl;
            cin>>start;
            if(start=='o'){ //After losing start again
                i=0;
                cout<<"Guess The Number:(1 - 100)"<<endl;
            }
            else //You don't want to Play. Loser...
                break;
        }
        else{
            cout<<"Guess The Number:(1 - 100)"<<endl;//Starting the game or you restarted(You coward)
        }
        while(i<limit){

            cin>>num;
            if(cin.fail()) {//If you press not integer key(Watch what you type!)
                cin.clear();  // reset the input state
                cin.ignore(100, '\n');  // Ignore the invalid input from buffer(upto 100(Hope you are not an idiot to press 100 characters))
                cout << "Invalid input! Please enter a number between 1 and 100." << endl;
                continue;  // Restart the loop to get valid input
            }

            if(num==0){
                j=0;
                break;
            }

            else if(num<0 || num>100){
                cout<<"Not in Range ";
            }
            else if(num-20>randomNum){
                cout<<"Super High Number ";
            }
            else if(num+20<randomNum){
                cout<<"Super Low Number ";
            }
            else if(num-10>randomNum){
                cout<<"Very High Number ";
            }
            else if(num+10<randomNum){
                cout<<"Very Low Number ";
            }
            else if(num>randomNum){
                cout<<"High Number ";
            }
            else if(num<randomNum){
                cout<<"Low Number ";
            }
            else if(num==randomNum)
            {
                cout<<"Congratulations! You Guessed it correctly at "<<i+1<<" th try"<<endl;
                cout<<"Your Total score is "<<10-i<<" out of 10"<<endl;

                if(i>5 && i<8){
                    cout<<"You have to do well "<<endl;
                }
                else if(i>=8){
                    cout<<"You are a loser "<<endl;
                }
                else if(i<3)
                    cout<<"You are Awesome!!"<<endl;
                else
                    cout<<"You played well"<<endl;
                break;
            }
            i++;
            if(i>=limit){
                break;
            }
        }
        if(i<limit){
            cout<<"Want to Restart the Game? Press 'y' to Restart or other keys to Quit "<<endl;
            cin>>restart;
            i=0;
            if(restart=='y' || restart=='Y'){
                j=1;
                system("cls");
                cout<<"Game Restarted!!!"<<endl;
            }
            else{
                break;
            }
        }

    }

    cout << "Thanks for playing! Goodbye!" << endl;
    return 0;
}
