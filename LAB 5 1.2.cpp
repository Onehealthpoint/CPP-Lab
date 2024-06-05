#include<iostream>
using namespace std;

class Num{
		int a, b;
	public:
		Num(int x, int y){ a=x, b=y;}
		Num operator ++(){
			int x=-b,y=-a;
			a=x,b=y;
		}
		void disp(){
				cout << "A: " << a << "\t B: " << b << endl;
		}
};

int main(){
	Num num1(2,-3);
	num1.disp();
	++num1;
	num1.disp();
	return 0;
}
