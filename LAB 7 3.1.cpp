#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int n;

class books{
	private:	
		string title, author, genre;
	public:
		books(){
			cout<<"Title: ";
			cin>>title;
			cout<<"Author: ";
			cin>>author;
			cout<<"Genre: ";
			cin>>genre;
		}
		void writefile(books s[]){
			ofstream fout;
			fout.open("books.txt");
			for(int i=0;i<n;i++){
				fout<<s[i].title<<"\n";
				fout<<s[i].author<<"\n";
				fout<<s[i].genre<<"\n";
			}
			fout.close();
		}
		void find_readfile(books s[]){
			char line[20], key[20];
			int flag;
			ifstream fin;
			fin.open("books.txt");
			cout<<endl<<"Enter book name to display: ";
			cin>>key;
			for(int i=0;i<n;i++){
				flag=1;
				fin.getline(line,20);
				flag=strcmp(key,line);
				if(flag==0){
					cout<<"Title : \t"<<line<<endl;
					fin.getline(line,20);
					cout<<"Author: \t"<<line<<endl;
					fin.getline(line,20);
					cout<<"Genre : \t"<<line<<endl;
				}
				else{
					fin.getline(line,20);
					fin.getline(line,20);
				}
			}
			fin.close();
		}	
};

int main(){
	cout<<"Enter number of books: ";
	cin>>n;
	cout<<"Enter Data:"<<endl;
	books b[n];
	b[0].writefile(b);
	b[0].find_readfile(b);
	return 0;
}
