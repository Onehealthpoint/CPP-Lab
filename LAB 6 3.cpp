#include<iostream>
#include<math.h>
using namespace std;

class ComplexNum{
	private:
		int a, b, mod;
	public:
		ComplexNum(int x, int y){
			int temp= x * x + y * y;
			a=x, b=y, mod=sqrt(temp);
		}
		
		void GreaterMod(ComplexNum &t){
			if(mod<t.mod)
				cout << t.a << " + " << t.b << "i\t has greater Modulus of " << t.mod;
			else
				cout << a << " + " << b << "i\t has greater Modulus of " << mod; 
		}
};

int main(){
	ComplexNum num1(1,2), num2(2,3);
	num1.GreaterMod(num2);
	return 0;
}
