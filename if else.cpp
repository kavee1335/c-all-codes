#include<iostream>
using namespace std;

int main()
{
int score;
char grade;
int marks;
cout<<"enter score";
cin>>score;

if(score>=90&&score<=100){
	cout<< "grade = A:exellence";
}
else if(score>=80){
	cout<<"grade =B:good";}
else if (score>=70){
	cout<<"grade=C :fair";}
else if(score>=60){
	cout<<"grade=D:pass";}
else{
cout<<"grade=F:fail";}

cout<<endl;

	
	return 0;
}
	
