#include<conio.h>
#include<iostream.h>
int i,j;
void add(int a[5][5],int b[5][5])
{int c[5][5];
for(i=0;i<5;i++)
  for(j=0;j<5;j++)
   c[i][j]=a[i][j]+b[i][j];
     for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	cout<<c[i][j]<<" ";
	cout<<"\n";}
}
int up(int a[5][5])
{int s=0;
for(i=0;i<5;i++)
  for(j=0;j<5;j++)
  if (i<=j)
  s=s+a[i][j];
return s;
}
void trans(int a[5][5])
{int b[5][5];
for(i=0;i<5;i++)
 for(j=0;j<5;j++)
 b[i][j]=a[j][i];
   for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    cout<<b[i][j]<< " ";
    cout<<"\n";
}
void main()
{clrscr();
int a[5][5],b[5][5],ch;
cout<<"enter an array";
for(i=0;i<5;i++)
  for(j=0;j<5;j++)
  cin>>a[i][j];
cout<<"1.add two matrices\n";
cout<<"2.print sum of upper matrix\n";
cout<<"3.print transpose\n";
cin>>ch;
switch(ch)
{ case 1:
    {cout<<"enter second array:\n";
    for(i=0;i<5;i++)
      for(j=0;j<5;j++)
       cin>>b[i][j];
    add(a,b);
	break;
    }
  case 2:
    {cout<<up(a);
     break;
     }
  case 3:
    {trans(a);
    break;
    }
  default:
  cout<<"wrong choice";
  }
  getch();
}
