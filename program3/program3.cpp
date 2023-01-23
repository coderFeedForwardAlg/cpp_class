#include <iostream>
#include <iomanip>
using namespace std;
int main(){
        // get initial vars ready 
    double sales = 0;
    double pay = 0; 
        // set sails 
    cout<< "Enter sales in dollars (-1 to end): ";
    cin >> sales; 
        // while sails is not -1 keap asking for the next number 
    while(sales != -1){
        pay = 200 + sales * 0.09; 
        cout << "Salary is: $" << setprecision(2) << fixed << pay << endl; 
        cout<< "Enter sales in dollars (-1 to end): ";
        cin >> sales; 
    }
    
    return 0; 
}

// ******** test runs ********* // 

/* 
maxscott@maxs-MacBook-Pro program3 % 
maxscott@maxs-MacBook-Pro program3 % cd "/Users/maxscott/Desktop/school progr
aming/cpp_class/program3/" && g++ program3.cpp -o program3 && "/Users/maxscot
t/Desktop/school programing/cpp_class/program3/"program3
Enter sales in dollars (-1 to end): -1
maxscott@maxs-MacBook-Pro program3 % cd "/Users/maxscott/Desktop/school programing/cpp_class/program3/" && g++ program3.cpp -o program3 && "/Users/maxscott/Desktop/school programing/cpp_class/program3/"program3
Enter sales in dollars (-1 to end): 0
Salary is: $200.00
Enter sales in dollars (-1 to end): 5000
Salary is: $650.00
Enter sales in dollars (-1 to end): 4000
Salary is: $560.00
Enter sales in dollars (-1 to end): 1
Salary is: $200.09
Enter sales in dollars (-1 to end): 999999
Salary is: $90199.91
Enter sales in dollars (-1 to end): 2.3
Salary is: $200.21
Enter sales in dollars (-1 to end): -1 
maxscott@maxs-MacBook-Pro program3 % 

*/