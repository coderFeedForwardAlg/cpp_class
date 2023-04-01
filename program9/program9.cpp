//============================================================================
// Name        : program9.cpp
// Author      : max
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Max Scott

*/

#include <iostream>

using namespace std;

//
//  Rational.h
//  Student name:
//  Date modified:
//  Student supplied synopsis of the Rational class:
//
//  Created by L.Rhodes on 3/16/20.
//

//#ifndef Rational_h
//#define Rational_h
//class Rational {
//	public:
//		int numirator;
//		int denominator;
//		Rational(){
//			this->numirator = 1;
//			this->denominator = 1;
//		}
//		Rational(int numirator,int denominator){
//			this->numirator = numirator;
//			this->denominator = denominator;
//		}
//		void setValues(int numirator,int denominator){
//			this->numirator = numirator;
//			this->denominator = denominator;
//		};// change the rational number in the object
//		int getNumer();
//		int getDenom();
//		void print();
//		void printf();
//		void add(Rational); //x.add(y) means x = x + y
//		void sub(Rational); // x = x - y
//		void mult(Rational);// x = x * y
//		void div(Rational); // x = x / y
//		void reciprocal();  // a/b = b/a
//		void negate(); // x = -x
//		//in a later project you will overload operators--don't do it now.
//		// Rational operator+(Rational)
//		// boolean operator==(Rational)
//
//	private:
//		int num;
//		int den;
//		int gcd(int, int);
//		void reduce(); //local function to care for reducing to simplest terms
//					   //and negative sign always in the numerator
//}
//
//#endif /* Rational_h */
//;




class Rational{
	public:
		int numirator;
		int denominator;
		Rational(){
			this->numirator = 1;
			this->denominator = 1;
		}
		Rational(int numirator, int denominator){
			int gcd = this->gcd(numirator, denominator);
			this->numirator = numirator / gcd;
			this->denominator = denominator / gcd;
		}
		int gcd (int a, int b){
		    if(b ==0) return a;
		    return gcd(b, a%b);
		}

		int lcm (Rational other){
				// code from moodle
		    int max;

		    // maximum value between n1 and n2 is stored in max
		    max = (this->numirator > other.numirator) ? this->numirator : other.numirator;
		    do
		    {
		        if (max % this->numirator == 0 && max % other.numirator == 0)
		        {
		        	return other.numirator;
		        }
		        else
		            ++max;
		    } while (true);

		    return max;
		}


		void print(){
			cout << numirator << "/" << denominator;
		}
		void printf(){
			cout << float(numirator) / float(denominator);
		}
		void add(Rational other){
//			int lcmNum = lcm(other);
			int denom = this->denominator * other.denominator;
			int numir = (this->numirator * other.denominator) + (other.numirator * this->denominator);
			this->numirator = numir;
			this->denominator = denom;
				// make sure is simplified
			int gcd = this->gcd(numirator, denominator);
			this->numirator = numirator / gcd;
			this->denominator = denominator / gcd;
		}
		void sub(Rational other){
//			int lcmNum = lcm(other);
			int denom = this->denominator * other.denominator;
			int numir = (this->numirator * other.denominator) - (other.numirator * this->denominator);
			this->numirator = numir;
			this->denominator = denom;
				// make sure is simplified
			int gcd = this->gcd(numirator, denominator);
			this->numirator = numirator / gcd;
			this->denominator = denominator / gcd;
		}
		void mult(Rational other){
			this->numirator = this->numirator * other.numirator;
			this->denominator = this->denominator * other.denominator;
				// make sure is simplified
			int gcd = this->gcd(numirator, denominator);
			this->numirator = numirator / gcd;
			this->denominator = denominator / gcd;


		}
		void div(Rational other){
			this->numirator = this->numirator * other.denominator;
			this->denominator = this->denominator * other.numirator;
				// make sure is simplified
			int gcd = this->gcd(numirator, denominator);
			this->numirator = numirator / gcd;
			this->denominator = denominator / gcd;
		}
		void negate(){
			numirator = -numirator;
		}
		void resiprical(){
			int temp = numirator;
			numirator = denominator;
			denominator = temp;

		}

};

int main(){
	int in1;
	int in2;
	int in3;
	int in4;
	char continu = 'y';
	while( continu == 'y'){
		cout << "Enter a rational number separating the numerator and denominator with a space: "<< endl;
		cin >> in1;
		cin >> in2;
		cout << "Enter another rational number: " << endl;
		cin >> in3;
		cin >> in4;



		Rational r1 = Rational(in1 ,in2);

		Rational r2 = Rational(in3, in4);


		// show adding
		Rational temp = r1;
		r1.print();
		cout << "+";
		r2.print();
		cout << "=";
		temp.add(r2);
		temp.print();
		cout << endl;
		cout << endl;


		// show adding with float
		temp = r1;
		r1.printf();
		cout << " + ";
		r2.printf();
		cout << " = ";
		temp.add(r2);
		temp.printf();
		cout << endl;
		cout << endl;

		// show subtraction
		temp = r1;
		r1.print();
		cout << " - ";
		r2.print();
		cout << " = ";
		temp.sub(r2);
		temp.print();
		cout << endl;
		cout << endl;

		// show subtraction with float
		temp = r1;
		r1.printf();
		cout << " - ";
		r2.printf();
		cout << " = ";
		temp.sub(r2);
		temp.printf();
		cout << endl;
		cout << endl;

		// show moltiplication
		temp = r1;
		r1.print();
		cout << " * ";
		r2.print();
		cout << " = ";
		temp.mult(r2);
		temp.print();
		cout << endl;
		cout << endl;

		// show moltiplication with float
		temp = r1;
		r1.printf();
		cout << " * ";
		r2.printf();
		cout << " = ";
		temp.mult(r2);
		temp.printf();
		cout << endl;
		cout << endl;

		// show div
		temp = r1;
		r1.print();
		cout << " / ";
		r2.print();
		cout << " = ";
		temp.div(r2);
		temp.print();
		cout << endl;
		cout << endl;

		// show div with float
		temp = r1;
		r1.printf();
		cout << " / ";
		r2.printf();
		cout << " = ";
		temp.div(r2);
		temp.printf();
		cout << endl;
		cout << endl;

		//negation
		temp = r1;
		cout << " - ";
		temp.print();
		cout << " = ";
		temp.negate();
		temp.print();
		cout << endl;
		cout << endl;

		// resiprical
		temp = r1;
		cout << " 1 / ";
		temp.print();
		cout << " = ";
		temp.resiprical();
		temp.print();
		cout << endl;
		cout << endl;

		cout << "Would you like to enter new rational numbers? (y/n) " << endl;
		cin >> continu;
	}

    return 0;
}

/*
Enter a rational number separating the numerator and denominator with a space:
2 4
Enter another rational number:
4 10
1/2+2/5=9/10

0.5 + 0.4 = 0.9

1/2 - 2/5 = 1/10

0.5 - 0.4 = 0.1

1/2 * 2/5 = 1/5

0.5 * 0.4 = 0.2

1/2 / 2/5 = 5/4

0.5 / 0.4 = 1.25

 - 1/2 = -1/2

 1 / 1/2 = 2/1

Would you like to enter new rational numbers? (y/n)
y
Enter a rational number separating the numerator and denominator with a space:
0 -4
Enter another rational number:
5 5
0/1+1/1=1/1

0 + 1 = 1

0/1 - 1/1 = -1/1

0 - 1 = -1

0/1 * 1/1 = 0/1

0 * 1 = 0

0/1 / 1/1 = 0/1

0 / 1 = 0

 - 0/1 = 0/1

 1 / 0/1 = 1/0

Would you like to enter new rational numbers? (y/n)
y
Enter a rational number separating the numerator and denominator with a space:
3 -3
Enter another rational number:
5 -5
-1/1+-1/1=-2/1

-1 + -1 = -2

-1/1 - -1/1 = 0/1

-1 - -1 = 0

-1/1 * -1/1 = 1/1

-1 * -1 = 1

-1/1 / -1/1 = 1/1

-1 / -1 = 1

 - -1/1 = 1/1

 1 / -1/1 = 1/-1

Would you like to enter new rational numbers? (y/n)
n
 * */



