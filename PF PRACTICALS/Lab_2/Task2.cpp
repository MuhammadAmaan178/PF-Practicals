/*Question #02
Print your Result Card using required escape sequences?
Print all other information as it is but get input from user
in obtained marks and calculate the percentage of entered marks? */

#include <iostream>
using namespace std;

int main(){
	string name,session; //Declaring string variable
	int semester,d_l_d_marks,elec_marks,eng_marks,reg_number; //Declaring integer variable
	
	//Getting all required input from user
	cout <<"Write Your Name:";
	cin >> name ;
	cout <<"Write Your Reg Number:";
	cin >> reg_number ;
	cout <<"Write Your Session:";
	cin >> session ;
	cout <<"Write Your Semester In Number:";
	cin >> semester ;
	cout <<"Write Your Digital Logic Design Marks out of 100:";
	cin >> d_l_d_marks ;
	cout <<"Write Your Electronics Marks out of 100:";
	cin >> elec_marks ;
	cout <<"Write Your English Marks out of 100:";
	cin >> eng_marks ;
	
	//calculating obtained marks and percentage for final result    
	int obt_marks = d_l_d_marks + elec_marks + eng_marks;
	int percent = (obt_marks*100)/300;
	
	//now finally printing everything and using escape sequence charaters "\n" & "\t" and "endl"
	cout << "*********************************************************\n";
	cout << "\t\tResult Card " <<endl;
	cout << "*********************************************************\n";
	cout << "Name: "<< name << "\t\tReg Number: "<< reg_number <<endl;
	cout << "Session: "<< session << "\t\tSemester: "<< semester <<endl;
	cout << "*********************************************************\n";
	cout << "Subjects\t\tTotal Marks\tObtained Marks"<<endl;
	cout << "*********************************************************\n";
	cout << "Digital Logic Design\t100\t\t"<< d_l_d_marks <<endl;
	cout << "Electronics-I\t\t100\t\t"<< elec_marks <<endl;
	cout << "English\t\t\t100\t\t"<< eng_marks <<endl;
	cout << "*********************************************************\n";
	cout << "Your Percentage Is: "<< percent <<"%"<<endl;
	cout << "*********************************************************\n";
	
	return 0;
}

