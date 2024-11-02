/* Question #02
Write a C++ program to input angles of a triangle and check
whether triangle is valid or not.*/

#include<iostream>
using namespace std;

int main(){
	float x,y,z;
	cout<<"Enter First Angle : ";
	cin>>x;
	cout<<"Enter Second Angle : ";
	cin>>y;
	cout<<"Enter Third Angle : ";
	cin>>z;
	
	if(x+y+z == 180){
		cout<<"Its a Valid Triangle";
	}
	else{
		cout<<"Its Not a Valid Triangle Because Its Sum Is Not Equal To 180";
	}
	return 0;
}
