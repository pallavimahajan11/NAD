#include <isostream.h>
#include <iomanip.h>
#include <math.h>
float f(float x)
{
return cos(x)-x*exp(x);
}
void regula (float *x, float x0, float x1,
float fx0, float fx1, int *itr)
{
*x = x0-((x1-x0)/(fx1-fx0))*fx0;
++(*itr);
cout << "Iteration no." << setw(3) << *itr
<< "X = " << setw(7) << setprecision(5)
<< *X << endl;
}
int main()
{

int itr=0, maxitr;
float x0,x1,x2,x3,aerr;
cout << "Enter the values for x0,x1,"
<< "allowed error,maximum iterations" << endl;
cin >> x0 >> x1 >> aerr >> maxitr;
regula(&x2,x0,x1,f(x0),f(x1),&itr);
cout << fixed;
do
{
if (f(x0)*f(x2) < 0)
x1 = x2;
else
x0 = x2;
regula(&x3,x0,x1,f(x0),f(x1),&itr);
if (fabs(x3-x2) < aerr)
{
cout << "After" << itr << "iterations,"
<< "root = " << setw(6) << setprecision(4)
<< x3 << endl;
return 0;
}
x2=x3;
} while(itr < maxitr);
cout << "Solution does not converge,"
<< "iterations not sufficient" << endl;
return 1;
}