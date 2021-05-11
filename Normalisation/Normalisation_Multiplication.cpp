#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
 void multiplication_float(float x1 , int e1 , float x2 , int e2 , float &x , int &e )
{
	x=x1*x2;
	e=e1+e2;
	if(abs(x)>=0.1)
	{
		x/=10;
		e+=1;
	}
	else if(abs(x)<0.1)
	{
		x*=10;
		e-=1;
	}
	 if(e>99)
	{
		cout<<"overflow"<<endl;
	}
	else if(e<-99){
		cout<<"underflow"<<endl;
	}
}
int main()
{
	float x1,x2 ,x;
	int e,e1,e2;
	cout<<"Enter the value of 1 number and  its exponent:"<<endl;
	cin>>x1>>e1;
	cout<<"Enter the value of 1 number and  its exponent:"<<endl;
	cin>>x2>>e2;
    multiplication_float(x1,e1,x2,e2,x,e);
	cout<<"mantisa is ="<<setprecision(4)<<x<<"exponent is"<<"E"<<e<<endl;

}
