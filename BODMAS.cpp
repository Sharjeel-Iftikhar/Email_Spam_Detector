#include<iostream>
#include<cmath>
using namespace std;
void FunctionMenu(int num1,int d1,int num2,int d2){
	cout<<endl;
	cout<<"Please select your operation:"<<endl;
	cout<<"1. Press 1 for addition"<<endl;
	cout<<"2. Press 2 for subtruction"<<endl;
	cout<<"3. Press 3 for divide"<<endl;
	cout<<"4. Press 4 for multiply"<<endl;
	cout<<endl;
}
void FunctionAddition(int num1,int d1,int num2,int d2){

int x,y;

if(d1==d2){
	x=num1+num2;
	y=d1;
}
else{
	x=(num1*d2)+(num2*d1);
	y=d1*d2;
}
	cout<<num1<<"/"<<d1<<"+"<<num2<<"/"<<d2<<"="<<x<<"/"<<y;
}
void FunctionSubtraction(int num1,int d1,int num2,int d2){
	int x,y;
	if(d1==d2){
	x=num1-num2;
		y=d1;
	}
	else{
		x=(num1*d2)-(num2*d1);
		y=d1*d2;
	}
	cout<<num1<<"/"<<d1<<"-"<<num2<<"/"<<d2<<"="<<x<<"/"<<y;
}
void FunctionDivide(int num1,int d1,int num2,int d2){
	int x,y;
		x=num1*d2;
		y=num2*d1;
	
	cout<<num1<<"/"<<d1<<"/"<<num2<<"/"<<d2<<"="<<x<<"/"<<y;
}
void FunctionMultiply(int num1,int d1,int num2,int d2){
	int x,y;
	if(d1==d2){
		x=num1*num2;
		y=d1*d2;
	}
	else{
	}
	cout<<num1<<"/"<<d1<<"*"<<num2<<"/"<<d2<<"="<<x<<"/"<<y;
}
int main(){
	int num1,num2,d1,d2,n;
	int menu;
	char a;
	cout<<"_______________________________________________________"<<endl;
	cout<<"        Welcome to the fraction calculation            "<<endl;
	cout<<"_______________________________________________________"<<endl;
	while(a!='y'&&a!='Y'){
		cout<<"Please enter your fraction:"<<endl;
	cout<<"Enter numerator for fraction 1:";
	cin>>num1;
	cout<<"Enter denominator for fraction 1:";
	cin>>d1;
	cout<<"Enter numerator for fraction 2:";
	cin>>num2;
	cout<<"Enter denominator for fraction 2:";
	cin>>d2;
	while(1){
	
	FunctionMenu(num1,d1,num2,d2);
	cout<<"Enter your operation=";
	cin>>n;
	if(n==1){
	FunctionAddition(num1,d1,num2,d2);
	}
	else if(n==2){
		FunctionSubtraction(num1,d1,num2,d2);
	}
	else if(n==3){
		FunctionDivide(num1,d1,num2,d2);
	}
	else if(n==4){
		FunctionMultiply(num1,d1,num2,d2);
	}
	cout<<endl;
	cout<<"Do you want to continue for same fractions?(Y/N)";
	cin>>a;
	if(a=='n'||a=='N'){
		break;
	}
	}
	
}


return 0;
}

