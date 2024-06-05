#include<iostream>
using namespace std;

const int n=3;

class Matrix{
		int x[n][n], i, j;
	public:		
		Matrix(){
			cout << "==================" << endl;
			cout << "  Enter a matrix: " << endl;
			for (i=0;i<n;i++){
				for (j=0;j<n;j++){
					cout << i+1 << "|" << j+1 <<":";
					cin >> x[i][j];
				}
			}				
		}
		
		Matrix(int a){				
		}
		
		Matrix operator *(Matrix t){
			Matrix s(0);
			for (i=0;i<n;i++){
				for (j=0;j<n;j++){
					s.x[i][j] = x[i][0] * t.x[0][j] + x[i][1] * t.x[1][j] + x[i][2] * t.x[2][j];
				}
			}
			return s;
		}
		
		void disp(){
			cout << endl;
			for (i=0;i<n;i++){
				for (j=0;j<n;j++)
					cout << x[i][j] <<"\t";
				cout << endl;
			}
		}
};

int main(){
	Matrix mat1, mat2, mat3(0);
	cout << "Mat 1: ";
	mat1.disp();
	cout << "Mat 2: ";
	mat2.disp();
	mat3 = mat1 * mat2;
	cout << "Product: ";
	mat3.disp();
	return 0;
}
