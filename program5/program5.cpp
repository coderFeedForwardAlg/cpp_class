/* 
Max Scott 
Feb 17 2023
*/
#include <iostream>
using namespace std; 

void setUp(){
    cout << "I have a nuber between 1 and 1000." << endl;
    cout << "Can you guess my number?" << endl;
    cout << "Please Type you first guess." << endl; 
}
int main(){
        // randome need random seed that changes 
        // https://stackoverflow.com/questions/13500494/rand-generating-the-same-number
    srand(static_cast<int>(time(0)));
    int rightNumber = (rand() % 1000) + 1; 
    int guess = 0; 
    char playAgain = ' '; 
    int numGueses = 0; 
    setUp();

    while(playAgain != 'n'){
        numGueses++; 
        cin >> guess; 
        if(guess == rightNumber){
            if(numGueses < 10){
                cout << "Ether you know the number or you got lucky!" << endl;
            }else if( numGueses == 10){
                cout << "you know the secret" << endl; 
            }else{
                cout << "You should be able to do better" << endl; 
            }
            
            cout << "Would you like to play again (y or n)?" << endl;
            cin >> playAgain;
            if(playAgain == 'n'){
                break;
            }else if(playAgain == 'y'){
                srand(static_cast<int>(time(0)));
                rightNumber = (rand() % 1000) + 1; 
                guess = 0; 
                playAgain = ' '; 
                numGueses = 0; 
                setUp();
            }
            
        }else if(guess > rightNumber){
            cout << "To high" << endl;
        } else {
            cout << "Too low" << endl;
        }   
    }
    

    return 0; 
}

// ******  sample output ******* // 

/*

I have a nuber between 1 and 1000.
Can you guess my number?
Please Type you first guess.
500
Too low
750
Too low
900
Too low
1000
To high
950
To high
925
Too low
945
To high
930
Too low
935
Too low
940
To high
936
Too low
937
You should be able to do better
Would you like to play again (y or n)?
y
I have a nuber between 1 and 1000.
Can you guess my number?
Please Type you first guess.
500
To high
250
To high
125
Too low
170
To high
145
Too low
160
To high
150
To high
140
Too low
145
Too low
147
To high
146
You should be able to do better
Would you like to play again (y or n)?
y
I have a nuber between 1 and 1000.
Can you guess my number?
Please Type you first guess.
500
Too low
175
Too low
750
Too low
900
To high
800
Too low
850
Too low
875
Too low
880
Too low
890
To high
885
To high
883
To high
882
To high
881
You should be able to do better
Would you like to play again (y or n)?
y
I have a nuber between 1 and 1000.
Can you guess my number?
Please Type you first guess.
500
To high
250
To high
125
To high
57
To high
25
To high
15
Too low
20
Ether you know the number or you got lucky!
Would you like to play again (y or n)?
y
I have a nuber between 1 and 1000.
Can you guess my number?
Please Type you first guess.
500
To high
250
Too low
300
Too low
400
To high
350
Too low
375
To high
360
Too low
367
Too low
370
Ether you know the number or you got lucky!
Would you like to play again (y or n)?
n

*/