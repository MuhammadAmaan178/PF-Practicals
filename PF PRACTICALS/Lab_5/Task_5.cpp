/*Question #05:-
Write a program to input three numbers and find maximum between all. */

#include<iostream>
using namespace std;

int main(){
	float x,y,z;
	cout<<"Enter First Number : ";
	cin>>x;
	cout<<"Enter Second Number : ";
	cin>>y;
	cout<<"Enter Third Number : ";
	cin>>z;
	
	float a = x; //let suppose x is maximum
	
	if (y>a){
		a = y;
		if(z>a){
			a = z;
	    }
	}
	cout<<"Number "<<a<<" Is Maximum"<<endl;
	
	return 0;
}
