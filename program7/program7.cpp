/*
Max Scott

*/

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
    cout <<""<< endl;
    cout <<"using vPtr and its index"<< endl;

    for(int i = 0; i < 5; i++){
        cout << vPtr[i] << endl;
    }

    //H)
    cout <<""<< endl;
    cout <<"10 accesed difrent ways "<< endl;
        //subscript notation 
    cout << values[4] << endl;
        //ptr offset with arr name 
    cout << *(values + 4) << endl;
        // ptr subscript nontation 
    cout << vPtr[4] << endl; 
        // ptr offset 
    cout << *(vPtr + 4) << endl;

    //I)
    cout <<""<< endl;
    cout << "the addres of vPtr + 3 is " << vPtr << endl;
    cout << "the value at vPtr + 3 is " << *vPtr << endl;
    cout << "the value at vPtr + 3 is " << *vPtr << endl;

    //J)
    cout <<""<< endl;
    cout <<""<< endl;
    vPtr = &values[4];
    vPtr -= 4;
    cout << *vPtr << endl;

    return 0; 
}