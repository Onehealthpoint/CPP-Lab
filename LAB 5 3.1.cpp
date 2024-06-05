#include<iostream>
using namespace std;

class Num{
		int a, b;
	public:
		Num(int x, int y){ a=x, b=y;}
		friend Num operator ++(Num&);  //implementing friend function.
		void disp(){
				cout << "A: " << a << "\t B: " << b << endl;
		}
};

Num operator ++(Num& t){
			int x=-t.b,y=-t.a;
			t.a=x,t.b=y;
		}

int main(){
	Num num1(4,-6);
	num1.disp();
	++num1;
	num1.disp();
	return 0;
}
