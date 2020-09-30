#include<iostream.h>
#include<conio.h>
int prime(int a,int b)
{int ctr=0,f=0;
if(a>b)
 {
    x=a;
    y=b;
 }
else
 {
    x=b;
    y=a;
 }
int k;

  cout<<ctr;
return ctr;
}
int even(int a,int b)
{int z=(a>b)?a:b;
int x=(a<b)?a:b;
int ctr=0;
for(int i=x;i<=z;i++)
  if(i%2==0)
  ctr++;
return ctr;
}
void main()
{clrscr();
int a,b,ch;
cout<<"enter two numbers";
cin>>a>>b;
cout<<"1.to calculate no of prime numbers in between them\n2.to calculate even no between them\n";
cin>>ch;
switch(ch)
  {case 1:
    {cout<<prime(a,b);
    break;
    }
  case 2:
    {cout<<even(a,b);
    break;
    }
  default :
    {cout<<"wrong choice";
    }
  }
getch();
}

