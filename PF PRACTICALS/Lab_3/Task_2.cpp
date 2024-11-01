/* Question # 2: Write a program to take input name, address and age from 
user, then display data on screen. */

#include<iostream>
#include<string>
using namespace std;

int main(){
	string name,address;
	int age;
	
	cout<<"Enter Your Name : ";
	cin>>name;
	cout<<"Enter Your Address : ";
	cin>>address;
	cout<<"Enter Your Age In Numbers : ";
	cin>>age;
	
	cout<<"****************************"<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"****************************"<<endl;
	cout<<"Address : "<<address<<endl;
	cout<<"****************************"<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"****************************"<<endl;
	
	return 0;
}

