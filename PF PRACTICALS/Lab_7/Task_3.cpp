/* Question #03
Write a C++ program that prints complete alphabets using for loop? (a-z) */

#include<iostream>
using namespace std;

int main(){
	char ch = 'a';
	cout<<"Small Alphabets:-"<<endl;
	for(int i = 0;i<=25;i++){
		char x = ch + i;
		cout<<x<<" ";
	}		
	return 0;
}
