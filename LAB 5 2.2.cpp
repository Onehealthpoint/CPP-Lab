#include<iostream>
using namespace std;

static int n;

class Matrix{
		int x[10][10], i, j;
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
			for (i=0;i<n;i++){
				for (j=0;j<n;j++){
					x[i][j]=0;
				}
			}				
		}
		
		Matrix operator +(Matrix t){
			Matrix s(0);
			for (i=0;i<n;i++){
				for (j=0;j<n;j++){
					s.x[i][j] = x[i][j] + t.x[i][j];
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
	cout << "n: ";
	cin >> n;
	Matrix mat1, mat2, mat3(0);
	cout << "Mat 1: ";
	mat1.disp();
	cout << "Mat 2: ";
	mat2.disp();
	mat3 = mat1 + mat2;
	cout << "Sum: ";
	mat3.disp();
	return 0;
}
