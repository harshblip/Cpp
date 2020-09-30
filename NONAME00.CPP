#include<iostream.h>
#include<conio.h>
#include<math.h>
long int ss(int x, int n)
{ double sum=0,term=0,fact=1 ;
  int i,j,sign=-1,po ;
  for(i=0;i<=n-1;i++)
   {
     for(j=1;j<=2*i+3;j++)
      {
       fact=fact*j ;
      }
      po=(2*i)+2 ;
     term=fact*sign*pow(x,po) ;
     sum=sum+term ;
     sign=sign*-1;
     fact=1 ;
   }
   return sum ;
}
void main ()
{ int a,b ;
  cout<<"enter the value of x and n \n" ;
  cin>>a >>b ;
  cout<<"the sum of the series is " <<ss(a,b) ;
  getch () ;
}