//Hollow Inverted Pyramid Star Pattern

#include<iostream>
using namespace std;
int main(){
	int n =5;
	for (int i =1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"  ";
		}
		for(int j=i;j<=n;j++){
			if(i==1||j==1||j==i||i==n){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		for(int j=i+1;j<=n;j++){
			if(i==1||j==1||j==n||i==n){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
