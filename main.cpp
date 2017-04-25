#include<iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
	Rectangle rect{3,5};
	cout << "사각형의 면적은" << rect.getArea() << endl;
	return 0;
}