#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main(){
	char temp[100];
	int len;
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	fin.getline(temp,100);
	len=strlen(temp);
	fout.write(temp,len);
	cout<<"The File Has Been Transfered.";
	fin.close();
	fout.close();
	return 0;
}
