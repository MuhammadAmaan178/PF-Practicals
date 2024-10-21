/* Question #02
Write a C++ program that tells the user that the number entered is even or odd? */


#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter The Number : ";
	cin>>num;
	
	if (num % 2 == 0){
		cout<<"Number Is Even"<<endl;
	}
	else{
		cout<<"Number Is Odd"<<endl;
	}
	
	return 0;
}
