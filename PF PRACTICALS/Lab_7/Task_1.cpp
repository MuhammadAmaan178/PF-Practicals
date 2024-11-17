/* Question#01
Write a C++ program to input an upper bound by user and print all numbers up to that limit? */

#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter The Number : ";
	cin>>num;
	
	for(int i = 1;i<=num;i++){
		cout<<i<<endl;
	}
	return 0;
}
