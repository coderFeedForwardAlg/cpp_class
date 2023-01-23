#include <iostream>
using namespace std;
int main() {
        // for storing the users numbers 
    int a;
    int b;
    int c;
        // get input 
    cout << "Enter an integer:";
    cin >> a;
    cout << "Enter an integer:";
    cin >> b;
    cout << "Enter an integer:";
    cin >> c;
        
        // compute simple math in-line 
    cout << "sum is " << a + b + c << std::endl; 
    cout << "avrage is " << ( (double)a + b + c)/ 3 << std::endl; 
    cout << "biggest is " << ( a * b * c) << std::endl; 

        // find smallet 
    int small;
    if(a < b && a < c){
        small = a; 
    }else if(b < a && b < c){
        small = b;
    }else{
        small = c; 
    }
    std::cout << "smallest is " << small << std::endl; 

        // find largest 
    int big; 
    if(a > b && a > c){
        big = a; 
    }else if(b > a && b > c){
        big = b;
    }else{
        big = c; 
    }
    std::cout << "smallest is " << big << std::endl; 

    return 0;
}

// ***** sample output *****// 

/*
maxscott@maxs-MacBook-Pro cpp_class % cd "/Users/maxscott/Desktop/school programing/cpp_class/" && g++
 program1.cpp -o program1 && "/Users/maxscott/Desktop/school programing/cpp_class/"program1
Enter an integer:1
Enter an integer:2
Enter an integer:3
sum is 6
avrage is 2
biggest is 6
smallest is 1
smallest is 3
maxscott@maxs-MacBook-Pro cpp_class % cd "/Users/maxscott/Desktop/school programing/cpp_class/" && g++
 program1.cpp -o program1 && "/Users/maxscott/Desktop/school programing/cpp_class/"program1
Enter an integer:22
Enter an integer:33
Enter an integer:4
sum is 59
avrage is 19.6667
biggest is 2904
smallest is 4
smallest is 33
maxscott@maxs-MacBook-Pro cpp_class % cd "/Users/maxscott/Desktop/school programing/cpp_class/" && g++
 program1.cpp -o program1 && "/Users/maxscott/Desktop/school programing/cpp_class/"program1
Enter an integer:12
Enter an integer:13
Enter an integer:55
sum is 80
avrage is 26.6667
biggest is 8580
smallest is 12
smallest is 55

*/