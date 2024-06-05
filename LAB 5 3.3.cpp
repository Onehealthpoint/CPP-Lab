#include<iostream>
using namespace std;

class TIME
{
private:
	int hr;
	int min;
	int sec;
public:
	TIME(int a=0,int b=0,int c=0)
	{
		hr=a;
		min=b;
		sec=c;
	}
	friend TIME operator +(TIME&, TIME&);
};

TIME  operator +(TIME& a, TIME& b)
{
	cout<<"hh:mm:ss  ===>  ";
	cout<<a.hr+b.hr<<":";
	cout<<a.min+b.min<<":";
	cout<<a.sec+b.sec;
}

int main()
{
	TIME obj1(1,20,30),obj2(2,30,20);
	obj1+obj2;
	return 0;	
}
