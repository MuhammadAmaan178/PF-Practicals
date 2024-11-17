//Heart Star Pattern

#include<iostream>
using namespace std;
int main(){
	int n =5;
	for (int i =1;i<=n;i++){
		for (int j = i+1; j <= n; j++) {
           cout<<"  ";
		}
		for (int j = 2; j <= i; j++) {
           cout<<"* ";
		}
		for (int j = 2; j <= i; j++) {
           cout<<"* ";
		}
		for (int j = i+1; j <= n; j++) {
           cout<<"  ";
    	}
        for (int j = i+1; j <= n; j++) {
           cout<<"  ";
    	}
    	for (int j = 2; j <= i; j++) {
           cout<<"* ";
		}
		for (int j = 2; j <= i; j++) {
           cout<<"* ";
		}
		cout<<endl;
	}
	int x =16;
	for(int i =1;i<=x;i++){
		for (int j = 2; j <= i; j++) {
           cout<<" ";
    	}
    	for(int j=i;j<=x;j++){
    		cout<<"* ";
		}
    	cout<<endl;
	}
	return 0;
}
