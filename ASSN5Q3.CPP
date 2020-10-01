#include<iostream.h>
#include<conio.h>
#include<math.h>
double sumseq(int n,double x)
{double a,f,fac,sum=0.0;
int sign=-1;
  for(int i=2;i<=2*n;i=i+2)
    {a=pow(x,i);
    f=1;
    for(int j=2;j<=(i+1);j++)
    f=f*j;
    fac=a*f;
    sum=sum+sign*fac;
    sign=sign*-1;
    }
return sum;
}
void main()
{clrscr();
int n;
double x;
 
getch();
}

