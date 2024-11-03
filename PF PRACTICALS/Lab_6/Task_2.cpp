/* Write a program to ask the user to enter a number . The 
program should print cube of all integers starting from 1 to
the number */

#include<iostream> 
using namespace std;

int main(){
	int num;
	cout<<"Enter The Number : ";
	cin>>num;
	
	for (int i=1;i<=num;i++){
		cout<<i<<" Cube Is "<<i*i*i<<endl;
	}
	
	return 0;
}
