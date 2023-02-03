//https://www.youtube.com/watch?v=DsS-ZiYOWy4
//https://www.youtube.com/watch?v=2ybLD6_2gKM&t=373s

#include <iostream>
using namespace std;

int main(){
    cout <<""<< endl;
    cout <<""<< endl;
    cout <<""<< endl;
    cout <<""<< endl;


    // A) 
    unsigned int values[5] = {2,4,6,8,10};

    //B) 
    unsigned int* vPtr;

    //C)
    cout <<""<< endl;
    cout <<"originam array"<< endl;
    for(int i = 0; i < 5; i++){
        cout << values[i] << endl;
    }

    //D)
    vPtr = &values[0];
    vPtr = values;


    //E)
    cout <<""<< endl;
    cout <<"pointer offset notation"<< endl;
    for(int i = 0; i < 5; i++){
        cout << *(vPtr+i) << endl;
    }

    //F)
    cout <<""<< endl;
    cout <<"pointer offset with arr name as ptr"<< endl;
    for(int i = 0; i < 5; i++){
        cout << *(values+i) << endl;
    }

    //G)
    //IDK ???? 
    cout <<""<< endl;
    cout <<""<< endl;


    return 0; 
}