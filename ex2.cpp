#include<iostream>
#include<cmath>
using namespace std;

class Point {

private:
	int x, y;

public:

	Point()
	{
		x = 0;
		y = 0;
	}

	void set_point()
	{
		cout << "Enter the x co-ordinate : ";
		cin >> x;

		cout << "Enter the y co-oridnate : ";
		cin >> y;

	}

	int get_x()
	{
		return x;
	}


	int get_y()
	{
		return y;
	}

	~Point() {};


};


int main()
{
	Point p1, p2;

	p1.set_point();
	p2.set_point();

	int distance;

	distance = pow((p1.get_x() - p2.get_x()),2) + pow((p1.get_y() - p2.get_y()),2);
	distance = sqrt(distance);


	cout << "The distance is : " << distance << endl;

	cout << "Debug : " << " (" << p1.get_x() << "," << p1.get_y() << ")" << endl;
	cout << "Debug : " << " (" << p2.get_x() << "," << p2.get_y() << ")" << endl;
}