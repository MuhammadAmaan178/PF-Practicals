//Hollow Right Triangle Star Pattern

#include<iostream>
using namespace std;
int main(){
	int n =5;
	for(int i =1;i<=5;i++){
		for(int j = 1;j<=i;j++){
			if(i==1||j==1||j==n||i==n||j==i){
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
