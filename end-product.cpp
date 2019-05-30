// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CFeet
{
private:
	int foot;
	int inch;
public:
	CFeet();
	~CFeet();
	CFeet(int a, int b);
	void setFI(int a, int b);
	void display();
	CFeet add(CFeet &od);
	CFeet  operator + (CFeet &otemp);
	CFeet operator + (const int &inch1);
};
CFeet CFeet:: operator + (CFeet &otemp)
{
	CFeet temp;
	temp.setFI(foot + otemp.foot, inch + otemp.inch);
	return temp;
}
CFeet CFeet::operator + (const int &inch1)
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

CFeet::CFeet()
{

}
CFeet::~CFeet()
{
	cout << "析构函数长度 = " << foot << "." << inch << endl;
}
CFeet::CFeet(int a, int b)
{
	while (b >= 12)
	{
		b = b - 12;
		a++;
	}
	foot = a;
	inch = b;
}
void CFeet::setFI(int a, int b)
{
	while (b >= 12)
	{
		b = b - 12;
		a++;
	}
	foot = a;
	inch = b;
}
void CFeet::display()
{
	cout << "长度 = " << foot << "." << inch << endl;
}
int main()
{
	CFeet od1(10, 36), od2(2, 10), od3;
	od3 = od1 + 30;
	od1.display();
	od2.display();
	od3.display();
	return 0;
}
