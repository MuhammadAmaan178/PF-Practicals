/* Question #04
Write a C++ program that ask the user a number and prints the table of that number up to 10?*/

#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter The Number Of Which You Want Table : ";
	cin>>num;
	
	for(int i = 1;i<=10;i++){
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
	}
	return 0;
}
