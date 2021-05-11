#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void sub(float x1,int e1,float x2,int e2,float *x , int *e)
{
	float k= abs(e1-e2);
	if(e1>e2)
	{
		x2=x2/pow(10,k);
		*e=e1;
	}
	else{
		x1=x1/pow(10,k);
		*e=e2;
	}
	*x=x1-x2;
	while(abs (*x)<0.1 && abs(*x)>0.0){
		*x*=10;
		*e-=1;
	}
	if(*e<-99)
	{
		cout<<"underflow";
		exit(0);
	}
}
int main()
{
	int e,e1,e2;
	float x ,x1,x2;
	cout<<"enter the value of mantisa and exponent of part 1 number";
	cin>>x1>>e1;
	cout<<"enter the value of mantisa and exponent of part of 2 number";
	cin>>x2>>e2;
	sub( x1, e1, x2,e2, &x ,&e);
    cout<<"Resultant difference is:"<<setprecision(4)<<x<<"E"<<e;
}
