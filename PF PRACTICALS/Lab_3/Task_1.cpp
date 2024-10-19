/*Question # 1: Write a program to take two float numbers then find 
remainder of them by using type casting in integer form. */

#include<iostream>
using namespace std;

int main(){
	//declaring two variables of float type
	float num_1,num_2;
	//Getting values of both Variables 
	cout<<"Enter The First Number : ";
	cin>>num_1;
	cout<<"Enter The Second Number : ";
	cin>>num_2;
	
//	changing float to integer
	int int_num_1 = num_1;
	int int_num_2 = num_2;
	
//	using modulus operator to get remaainder
	int result = int_num_1 % int_num_2;
	
//	printing remainder
	cout << "The remainder of " << num_1 << " and " << num_2 << " is: " << result << endl;
	
	return 0;
}

