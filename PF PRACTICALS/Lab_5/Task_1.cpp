/* Question#01:-
Write a C++ program to check whether a character
is alphabet or not. */

#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter The Character : ";
	cin>>ch;
	
	if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
		cout<<"Character Is Alphabet";
	}
	else{
		cout<<"Character Is Not Alphabet";
	}
	return 0;
}
