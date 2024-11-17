/* Question #05
Write a C++ program that displays the product of all odd numbers from 1 to 10 using for loop?*/

#include<iostream>
using namespace std;

int main(){
	int sum = 1;
	
	for(int i = 1;i<=10;i=i+2){
		sum = sum * i;
	}
	cout<<"The Product of Odd Numbers 1 to 10 is :- "<<sum<<endl;
	return 0;
}
