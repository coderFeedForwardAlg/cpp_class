//============================================================================
// Name        : program11.cpp
// Author      : max
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// TODO
//Quadrilateral []
//Trapezoid [X]
//Parallelogram [X]
//Rectangle [X]
//Square[X]



// point class
class Point{
	public:
		int x;
		int y;
		void print(){
			cout << "(" << this->x << " , " << this->y  <<  ")" << endl;
		}
		// need defalut constructer (https://stackoverflow.com/questions/40138402/constructors-with-objects-as-parameters)
		Point(){
			this->x = 0;
			this->y = 0;

		}
		Point(int x, int y){
			this->x = x;
			this->y = y;
		}
		int getX(){
			return this->x;
		}
		int getY(){
			return this->y;
		}

};

class Square: public Point{
	public:
		int L;
		Point p1;
		Point p2;
		Point p3;
		Point p4;
		Square(int L, Point p1): Point(x, y){
			this->L = L;
			this->p1 = p1;
			this->p2 = Point(p1.getX() + L, p1.getY());
			this->p3 = Point(p1.getX(), p1.getY() + L);
			this->p4 = Point(p1.getX() + L, p1.getY() + L);
			print();

		}
		void print(){
			cout << "printing square" << endl;
			p1.print();
			p2.print();
			p3.print();
			p4.print();
		}
};

class Rectangle: public Square{
	public:
		Point p1;
		Point p2;
		Point p3;
		Point p4;
		int L;
		int h;
		Rectangle(Point p1, int L, int h) : Square(L, p1){
			this->p1 = p1;
			this->L = L;
			this->h = 2;
			this->p2 = Point(p1.getX() + L, p1.getY());
			this->p3 = Point(p1.getX(), p1.getY() + h);
			this->p4 = Point(p1.getX() + L, p1.getY() + h);
			print();

		}
		void print(){
			cout << "printing rectangle" << endl;
			p1.print();
			p2.print();
			p3.print();
			p4.print();
		}
};

class Parallelogram: public	Rectangle{
	public:
		Point p1;
		Point p2;
		Point p3;
		Point p4;
		int L;
		Parallelogram(Point p1, Point p2, int L) : Rectangle(p1, L, 2){ // hard coded in 2
			this->p1 = p1;
			this->p2 = p2;
			this->p3 = Point(p1.getX() + L, p1.getY());
			this->p4 = Point(p2.getX() + L, p2.getY());
			print();

		}
		void print(){
			cout << "printing parallelogram" << endl;
			p1.print();
			p2.print();
			p3.print();
			p4.print();
		}
};


class Trapezoid: public	Parallelogram{
	public:
		Point p1;
		Point p2;
		Point p3;
		Point p4;
		int L;
		int L2;
		Trapezoid(Point p1, Point p2, int L1, int L2) : Parallelogram(p1, p2, L1){
			this->p1 = p1;
			this->p2 = p2;
			this->p3 = Point(p1.getX() + L1, p1.getY());
			this->p4 = Point(p2.getX() + L2, p2.getY());
			print();

		}
		void print(){
			cout << "printing Trapezoid" << endl;
			p1.print();
			p2.print();
			p3.print();
			p4.print();
		}
};


class Quadrilateral: public	Trapezoid{
	public:
		Point p1;
		Point p2;
		Point p3;
		Point p4;
		int L;
		int L2;
		Quadrilateral(Point p1, Point p2, Point p3, Point p4) : Trapezoid(p1, p2, 3, 3){ // hard coded
			this->p1 = p1;
			this->p2 = p2;
			this->p3 = p3;
			this->p4 = p4;
			print();

		}
		void print(){
			cout << "printing Quadrilateral" << endl;
			p1.print();
			p2.print();
			p3.print();
			p4.print();
		}
};


// driver
int main() {
	Point p1=  Point(1,0);
	Point p2=  Point(1,1);
	Point p3=  Point(0,0);
	Point p4=  Point(0,1);

	Quadrilateral s = Quadrilateral(p1, p2, p3, p4);


	return 0;
}


/*
 *
printing square
(1 , 0)
(4 , 0)
(1 , 3)
(4 , 3)
printing rectangle
(1 , 0)
(4 , 0)
(1 , 2)
(4 , 2)
printing parallelogram
(1 , 0)
(1 , 1)
(4 , 0)
(4 , 1)
printing Trapezoid
(1 , 0)
(1 , 1)
(4 , 0)
(4 , 1)
printing Quadrilateral
(1 , 0)
(1 , 1)
(0 , 0)
(0 , 1)
 *
 */




