/* Question#02
Write a C++ program to input an upper bound and separate even & odd from that limit? */

#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter The Number : ";
	cin>>num;
	
	cout<<"Even Numbers :- "<<endl; 
	for(int i = 0;i<=num;i=i+2){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"Odd Numbers :- "<<endl; 
	for(int i = 1;i<=num;i=i+2){
		cout<<i<<" ";
	}
	
	return 0;
}
