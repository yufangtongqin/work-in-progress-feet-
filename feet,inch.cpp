// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inch;
public:
	CFeet();
	CFeet(int f, int i);
	void setFeet(int f, int i);
	void display();
	void addOneFeet();
	int getFeet();
	int getinch();
};
CFeet::CFeet()
{
	cout << "英尺=" << feet << "  " << "英寸" << inch << endl;
}
CFeet::CFeet(int f, int i)
{
	feet = f;
	inch = i;
	cout << "英尺=" << feet << "  " << "英寸" << inch << endl;
	inch < 12 && inch >= 0;
	if (inch >= 12)
	{
		inch = 1;
		feet++;
	}
}
void CFeet::setFeet(int f, int i)
{
	feet = f;
	inch = i;
}
void CFeet::display()
{
	cout << "长度=" << feet << "," << inch << endl;
}
int CFeet::getFeet()
{
	return feet;
}
int CFeet::getinch()
{
	return inch;
}

int main()
{
	CFeet od(10, 25);
	od.display();
    return 0;
}

