//Right Arrow Star Pattern

#include<iostream>
using namespace std;
int main(){
	int n =5;
	for (int i =1;i<=n;i++){
		for(int j =1;j<=i;j++){
			cout<<"  ";
		}
		for(int j =i;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for (int i =2;i<=n;i++){
		for(int j =i;j<=n;j++){
			cout<<"  ";
		}
		for(int j =1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}