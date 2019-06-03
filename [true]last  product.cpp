// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CFeet
{
private:
	int foot;
	int inch;
	int check();
public:
	CFeet();
	~CFeet();
	CFeet(int a, int b);
	void setFI(int a, int b);
	void display();
	CFeet add(CFeet &od);
	CFeet operator +(CFeet &otemp);
	CFeet operator +(const int &inch1);
};
int CFeet::check()
{
	while (inch >= 12)
	{
		inch = inch - 12;
		foot++;
	}
	return 0;
}
CFeet::CFeet()
{
	foot = 1;
	inch = 1;
}
CFeet::~CFeet()
{
	cout << "析构函数  长度 = " << foot << "." << inch << endl;
}
CFeet::CFeet(int a, int b)
{
	foot = a;
	inch = b;
	check();
}
void CFeet::setFI(int a, int b)
{
	foot = a;
	inch = b;
	check();
}
void CFeet::display()
{
	cout << "长度 = " << foot << "." << inch << endl;
}
CFeet CFeet::operator +(CFeet &otemp)
{
	CFeet temp;
	temp.setFI(foot + otemp.foot, inch + otemp.inch);
	return temp;
}
CFeet CFeet::operator +(const int &inch1)
{
	CFeet temp;
	temp.setFI(foot, inch + inch1);
	return temp;
}
CFeet CFeet::add(CFeet &od)
{
	CFeet temp;
	temp.setFI(foot + od.foot, inch + od.inch);
	return temp;
}
int main()
{
	CFeet od1(1, 30), od2(1, 30), od3;
	od3 = od1 + od2;
	od1.display();
	od2.display();
	od3.display();
	return 0;
}