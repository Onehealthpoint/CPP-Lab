#include<iostream>
using namespace std;

class student{
	private:
		string name;
		string address;
		int roll_no;
	public:
		get_data(){
			cout << "Name: ";
			cin >> this.name;
			cout << "Address: ";
			cin >> this->address;
			cout << "Roll no: ";
			cin >> this->roll_no;
			cout << "***************" << endl;
		}
		
		show_data(){
			cout << "Name: ";
			cout << name << endl;
			cout << "Address: ";
			cout << address << endl;
			cout << "Roll no: ";
			cout << roll_no << endl;
			cout << "***************" << endl;
		}	
};

class engineering: public student{ };

class science: public student{ };
 
class medical: public student{ };

int main(){
	engineering *e1;
	science *s1;
	medical *m1;
	e1->get_data();
	s1->get_data();
	m1->get_data();
	e1->show_data();
	s1->show_data();
	m1->show_data();
	return 0;
}
