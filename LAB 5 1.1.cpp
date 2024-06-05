#include<iostream>
using namespace std;

class ComplexNum{
		int a, b;
	public:
		ComplexNum(int x, int y){ a=x, b=y;}
		
		ComplexNum operator ++(){
			int x=-a,y=-b;
			a=x,b=y;
		}
		void disp(){
			if (b<0)
				cout << "(" << a << ") + (" << b << ")i" << endl;
			else 
				cout << a << " + " << b << "i" << endl;
		}
};

int main(){
	ComplexNum num1(2,-3); 
	int a=10;
	num1.disp();
	++num1;
	++a;
	cout << a;
	num1.disp();
	return 0;
}
