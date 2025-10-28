#include<iostream>
using namespace std;


int main()
{
int num;
cout<<"enter num";
cin>>num;
if(num%2==0)
	cout<<"even number";
else
cout<<"old number";

cout<<endl;
	
	
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
int num;
cout<<"enter num";
cin>>num;
(num%2 == 0)?cout<<"even number":cout<<"odd number";
cout <<endl;
	
return 0;
}