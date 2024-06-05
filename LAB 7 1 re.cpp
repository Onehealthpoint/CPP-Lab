#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main(){
	string temp;
	int len = 100;
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	while(fin && fout) {
        while(!fin.eof()) {
        	getline(fin, temp);
            fout << temp << "\n";
        }
    }
	cout<<"The File Has Been Transfered.";
	fin.close();
	fout.close();
	return 0;
}
