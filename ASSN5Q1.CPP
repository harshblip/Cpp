#include<iostream.h>
#include<conio.h>
void fibo(int n,int a,int b)
{cout<<a<<" "<<b<<" ";
int c;
for(int i =3;i<=n;i++)
 {c=a+b;
 a=b;
 b=c;
 cout<<c<<" ";
 }
}
void fibo2(int n,int a,int b,int c)
{cout<<a<<" "<<b<<" "<<c<<" ";
int d;
for(int i=4;i<=n;i++)
  {d=a+b+c;
  a=b;
  b=c;
  c=d;
  cout<<d<<" ";
  }
}
void main()
{clrscr();
int n;
cout<<"enter the number of terms:\n";
cin>>n;
int a=0,b=1,c=1,ch;
cout<<"\n1.fibonacci series\n2.tribonacci series\n";
cin>>ch;
switch(ch)
  { case 1:
     {fibo(n,a,b);
     break;
     }
    case 2:
     {fibo2(n,a,b,c);
     break;
     }
    default :
     {cout<<"wrong choice\n";
     }
  }
getch();
}