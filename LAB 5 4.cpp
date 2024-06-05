#include<iostream>
#include<string.h>
using namespace std;

class strings{
	public:
		char str[20];
		
		strings(char temp[20]){
			strcpy(str, temp);
		}
		
		strings operator +=(strings t){
			strcat(str, t.str);
		}
};

int main(){
	char temp1[20] = "deez nuts! ";
	char temp2[20] = "gottem!";	
	strings text1(temp1) ,text2(temp2);
	cout << "Text 1: " << text1.str << endl;
	cout << "Text 2: " << text2.str << endl;
	text1+=text2;
	cout << "Concat Text 1: " << text1.str;
	return 0;
}
