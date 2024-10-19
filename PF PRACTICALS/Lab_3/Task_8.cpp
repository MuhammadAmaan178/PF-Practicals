/*Question # 8: Write a program to take three digit numbers from user 
then display its reverse order.*/

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Enter First Number : ";
	cin>>a;
	cout<<"Enter Second Number : ";
	cin>>b;
	cout<<"Enter Third Number : ";
	cin>>c;
	
	cout<<"Given Number Order : "<<a<<b<<c<<endl;
	cout<<"Reverse Order : "<<c<<b<<a<<endl;
	
	return 0;
}
