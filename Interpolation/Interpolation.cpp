#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
 float x0,y0,x1,y1,xp,yp;

 /* Inputs */
 cout<<"Enter first point (x0,y0):"<< endl;
 cin>>x0>>y0;
 cout<<"Enter second point (x1,y1):"<< endl;
 cin>>x1>>y1;
 cout<<"Enter interpolation point: ";
 cin>>xp;

 /* Linear Interpolation */
 yp = y0 + ((y1-y0)/(x1-x0)) * (xp - x0);

 /* Displaying Output */
 cout<<"Interpolated value at "<< xp<<" is "<< yp;

 return 0;
}
