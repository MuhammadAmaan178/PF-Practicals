//Hollow Inverted Right Triangle Star Pattern

#include<iostream>
using namespace std;
int main(){
	int n =5;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(i==1||i==j||j==n||j==1){
				cout<<"* ";	
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
