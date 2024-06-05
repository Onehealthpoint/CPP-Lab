#include<iostream>
#include<fstream>
#define n 5
using namespace std;

class students{
	private:	
		string name;
		int roll_no, marks;
	public:
		students(){
			cout<<"Name: ";
			cin>>name;
			cout<<"Roll no: ";
			cin>>roll_no;
			cout<<"Marks: ";
			cin>>marks;
		}
		void writefile(students s[]){
			ofstream fout;
			fout.open("students.txt");
			for(int i=0;i<n;i++){
				fout<<s[i].name<<"\n";
				fout<<s[i].roll_no<<"\n";
				fout<<s[i].marks<<"\n";
			}
			fout.close();
		}
		void readfile(students s[]){
			char line[10];
			ifstream fin;
			fin.open("students.txt");
			cout<<endl<<"Displaying data:"<<endl;
			for(int i=0;i<n;i++){
				fin.getline(line,10);
				cout<<"Name: \t"<<line<<endl;
				fin.getline(line,10);
				cout<<"Roll: \t"<<line<<endl;
				fin.getline(line,10);
				cout<<"Marks: \t"<<line<<endl;
			}
			fin.close();
		}	
};

int main(){
	cout<<"Enter Data:"<<endl;
	students s[n];
	s[0].writefile(s);
	s[0].readfile(s);
	return 0;
}
