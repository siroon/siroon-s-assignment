#include<iostream>
#include"Circle.h"
using namespace std;

int main()
{
    int n,radius;
	cout << "원의개수";
	cin >> n;
	if (n<=0)
	return 0;
	Circle *pArray = new Circle[n];

	for (int i = 0; i < n; i++)
	{
		cout << "원" <<i+1 <<" : ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
	Circle *p = pArray;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cout << p->getArea() << ' ';
		if(p->getArea() >=100 && p->getArea() <=200)
			count++;
		p++;
	}
	cout << count << endl;
	delete [] pArray;
}