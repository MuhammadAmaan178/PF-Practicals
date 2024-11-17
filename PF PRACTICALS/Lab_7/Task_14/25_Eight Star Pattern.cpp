//Eight Star Pattern

#include<iostream>
using namespace std;
int main(){
	int n =9;
	for(int i =1;i<=n;i++){
		for(int j =1;j<=n;j++){
			if(((i==1||i==5||i==9)&&(j==3||j==4||j==5))||((i==2||i==3||i==4||i==6||i==7||i==8)&&(j==2||j==7))){
				cout<<"* ";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
