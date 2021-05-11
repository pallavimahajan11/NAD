#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void Addition_float(float x1 , float e1 , float x2 , float e2 , float *x , float *e )
{  
     float k=abs(e2-e1);
	if( e1>e2){
		x2=x2/pow(10,k);
		*e=e1;
	}
	else{
		x1=x1/pow(10,k);
		*e=e2;
	}
	*x=x1+x2;
	if(*x>=1.0)
	{
		*x=*x/10;
		*e=*e+1;
	}
	if(*e>99)
	{
		cout<<"overflow condition";
		exit(0);
	}
}
int main()
{
	float x1,x2,e1,e2,x,e;
	cout<<"Enter the value of 1 number and  its exponent:"<<endl;
	cin>>x1>>e1;
	cout<<"Enter the value of 1 number and  its exponent:"<<endl;
	cin>>x2>>e2;
    Addition_float(x1,e1,x2,e2,&x,&e);
	cout<<"mantisa is ="<<setprecision(4)<<x<<"exponent is"<<"E"<<e<<endl;

}
