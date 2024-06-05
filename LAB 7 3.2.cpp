#include<iostream>
#include<fstream>
using namespace std;

class X{
	public:
		string name;
		int grade, reg_no;
		X(){}
		X(string str,int a,int b){
			name=str;
			grade=a;
			reg_no=b;
		}
		void display(X a[]){
			for(int i=0;i<10;i++){
				cout<<a[i].name<<"\t";
				cout<<a[i].grade<<"\t";
				cout<<a[i].reg_no<<"\t ";
			}
			cout<<endl<<endl;
		}
		void writefile(X s[]){
			ofstream fout;
			fout.open("record.txt");
			for(int i=0;i<10;i++){
				fout << s[i].name << "\n";
				fout << s[i].grade << "\n";
				fout << s[i].reg_no << "\n";
			}
			fout.close();
		}
		void readfile(X z[]){
			char a[10];
			ifstream fin;
			fin.open("record.txt");
			for(int i=0;i<10;i++){
				fin >> z[i].name;
				fin >> z[i].grade;
				fin >> z[i].reg_no;
			}
			fin.close();
		}
		void editfile(X t[]){
			t[0].readfile(t);
			string key;
			cout<<endl<<"Enter student name to update: ";
			cin>>key;
			for(int i=0;i<10;i++){
				if(key==t[i].name){
					cout << "Name: ";
					cin >> t[i].name;
					cout << "Grade: ";
					cin >> t[i].grade;
					cout << "Reg no: ";
					cin >> t[i].reg_no;
				}
			}
			t[0].writefile(t);
			t[0].display(t);
		}
};

int main(){
	X s[10]={X("a",1,1000),X("b",2,1001),X("c",3,1002),X("d",4,1003),X("e",5,1004),X("f",6,1005),X("g",7,1006),X("h",8,1007),X("i",9,1008),X("j",10,1009)};
	X t[10];
	s[0].display(s);
	s[0].writefile(s);
	t[0].editfile(t);
	return 0;
}
