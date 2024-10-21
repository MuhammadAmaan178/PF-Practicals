/* Question #04
Write a program to compare following strings with each other
and display which string is smaller.
string str1 = "Hello";
string str2 = "Hi";
string str3 = "Air";
string str4 = "Bill";
string str5 = "Big"; */

#include<iostream>
#include<string>
using namespace std;

int main(){
//	declaring all variables
	string str1 = "Hello";
	string str2 = "Hi";
	string str3 = "Air";
	string str4 = "Bill";
	string str5 = "Big";
	
//	it checks size of each string
	int size1 = str1.size();
	int size2 = str2.size();
	int size3 = str3.size();
	int size4 = str4.size();
	int size5 = str5.size();
	
//	it makes logic
	int smallest = size1;
	if (size2 < smallest) {
        smallest = size2;
    }
    else if (size3 < smallest) {
        smallest = size3;
    }
    else if (size4 < smallest) {
        smallest = size4;
    }
    else if (size5 < smallest) {
        smallest = size5;
    }
    else{
    	cout<<"Error Occured!!! Try Again";
	}
    
//    it prints output
    if (smallest == size1) {
        cout<<"The Smallest String Is : "<< str1 <<endl;
    }
    else if (smallest == size2) {
        cout<<"The Smallest String Is : "<< str2 <<endl;
    }
    else if (smallest == size3) {
        cout<<"The Smallest String Is : "<< str3 <<endl;
    }
    else if (smallest == size4) {
        cout<<"The Smallest String Is : "<< str4 <<endl;
    }
    else if (smallest == size5) {
        cout<<"The Smallest String Is : "<< str5 <<endl;
    }
    else{
    	cout<<"Error Occured!!! Try Again";
	}
    
	return 0;
}
