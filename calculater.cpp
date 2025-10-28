#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	char op;
	cout<<"enter num 1: ";
	cin>>num1;
	cout<< "enter num 2: ";
	cin>>num2;
	cout<<"enter operator (%) only: ";
	cin>>op;
	if(op=='%'){
		if(num2!=0){
			cout<<"result: "<<num1%num2<<endl;
			}
			else{ 
				cout<<"error: divisible by zero is not allowed."<<endl;
		}
	}
		else{
			cout<<"invalid operator;"<<endl;
		}
		
	
	
	return 0;
}