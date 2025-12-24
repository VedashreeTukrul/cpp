#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a = 10;
	float b = 20.56123478;
	double e = 20.56123478;
	char c = 'A';
	bool d = true ;
	
	
	cout << "printing integer datatype: "<<a << endl;
	cout << "printing float datatype: "<<fixed<< setprecision(8) <<b<< endl;
    cout << "printing double datatype: "<<fixed<< setprecision(8) <<e<< endl;
    cout << "printing char datatype: "<<c<<endl;
    cout << "printing boolean datatype: "<<d<<endl;
    
    return 0;


}
