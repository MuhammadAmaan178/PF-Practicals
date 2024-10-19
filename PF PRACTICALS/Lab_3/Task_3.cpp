/* Question # 3: Write a program to take input a character and display its 
ASCII code. */

#include<iostream>
using namespace std;

int main(){
	
//	declaring character and getting any character input from user
	char character;
	cout<<"Enter Your Character  : ";
	cin>>character;
	
//	if we change char to integer...it will print its ASCII code
	int asciicode = character;
	cout<<"The ASCII code for "<<character<<" is "<<asciicode<<endl;
	
	return 0;
}

