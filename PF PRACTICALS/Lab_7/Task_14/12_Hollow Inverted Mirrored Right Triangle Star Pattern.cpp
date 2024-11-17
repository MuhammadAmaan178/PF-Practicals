//Hollow Inverted Mirrored Right Triangle Star Pattern

#include<iostream>
using namespace std;
int main(){
	int n =5;
	for(int i=1;i<=n;i++){
		for(int j =1;j<=i;j++){
			cout<<"  ";
		}
		for(int j =i;j<=n;j++){
			if(i==j||i==1||j==n||j==1){
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
