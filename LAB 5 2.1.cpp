#include<iostream>
using namespace std;

class ComplexNum{
		int a, b;
	public:
		ComplexNum(int x, int y){ a=x, b=y;}
		ComplexNum operator +(ComplexNum t){
			ComplexNum s(0,0);
			s.a = a + t.a;
			s.b = b + t.b;
			return s;
		}
		void disp(){
			if (b<0)
				cout << "(" << a << ") + (" << b << ")i" << endl;
			else 
				cout << a << " + " << b << "i" << endl;
		}
};

int main(){
	ComplexNum num1(2,-3), num2(1,-2), num3(0,0);
	cout << "Num 1: ";
	num1.disp();
	cout << "Num 2: ";
	num2.disp();
	num3 = num1 + num2;
	cout << "  Sum: ";
	num3.disp();
	return 0;
}
