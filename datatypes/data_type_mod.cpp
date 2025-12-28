#include<iostream>
using namespace std;

int main(){
	
	long int number = 12127895; // more than 10^9
	int number_int = number;
	
	cout<<number<<endl;
	cout<<number_int<<endl;
	
	cout<< sizeof(number)<<endl;
	cout<< sizeof(number_int)<<endl;
	cout<< sizeof(short int)<<endl;
	
	return 0;
}
