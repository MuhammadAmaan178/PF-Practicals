//Hollow Pyramid Star Pattern

#include<iostream>
using namespace std;
int main(){
	int n =5;
	for (int i =1;i<=n;i++){
		for(int j =i;j<=n;j++){
			cout<<"  ";
		}
		for(int j =1;j<=i;j++){
			if(i==1||j==1||j==n||i==n){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		for(int j =2;j<=i;j++){
			if(i==1||j==1||j==n||i==n||i==j){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
