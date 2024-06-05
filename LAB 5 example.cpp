#include<iostream>
#include<string.h>
using namespace std;

const int sz=50;
class string
{
	char str[sz];
	public:
		string()
		{
			strcpy(str," ");
		}
		string(char s[sz])
		{
			strcpy(str,s);
		}
		void display()
		{
			cout<<str;
		}
		string operator+(string ss)
		{
			if((strlen(str)+strlen(ss.str))<sz)
			{
			string tmp;
			strcpy(tmp.str,str);
			strcat(tmp.str,ss.str);
			return(tmp);
		}
		else
		{
			cout<<"\n string overflow: ";
		}		
}
};
int main(){
	cout<<"before concatentation.";
	string s1(a),s2(b),s3(c);
	s1.display();
	cout<<"\n";
	s2.display();
	s3 = s1+s2;
	cout<<"\n after concatenation.";
	s3.display();
    return 0;
}
