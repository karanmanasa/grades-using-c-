#include<iostream>
using namespace std;
int main() {
	char grade;
	int marks;
	cout<<"Enter your Grade=  ";
	cin>>grade;
	switch(grade) {
		case'A':
		  marks=90;
		cout<<"your mark is "<<marks;
		break;
		case'B':
		   marks=80;
		cout<<"your mark is "<<marks;
		break;
		case'C':
		     marks=70;
		cout<<"your mark is "<<marks;
		break;
		case'D':
		       marks=40;
		cout<<"your mark is "<<marks;
		break;
		default:
		    cout<<"invalid ";
		break;
	}
	return 0;
}
