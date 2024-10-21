/* Question #01
Write a C++ program that tells the user that the number
entered is less than or greater than 10? */

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter The Number : ";
	cin>>num;
	
	if (num==10){
		cout<<"Given Number Is Equal To 10";
	}
	else if (num>10){
		cout<<"Given Number Is Greater Than 10";
	}
	else{
		cout<<"Given Number Is Less Than 10";
	}
	return 0;
}
