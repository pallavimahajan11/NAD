#include<iostream>
#include<cmath>
using namespace std;
float F(float x){
	return (x*x*x-9*x-1);
}
int main()
{
   
		int i=1;
		float a,b,m,f;
		cout<<"enter the values of a and b:";
		cin>>a>>b;
		do{
			m=(a+b)/2;
			f=F(m);
			cout<<"i="<<i<<"a="<<a<<"b="<<b<<"m="<<m<<"F(m)"<<F(m)<<endl;
			if(F(a)*F(b)<0)
			{
				b=m;
			}
			else{
				a=m;
			}
			i++;
		}while(fabs(F(m))>0.001);
		cout<<"aprroximate root="<<m;
	}
