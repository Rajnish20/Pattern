#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int i,j,n;
cout<<"Enter the number"<<endl;
cin>>n;
for(i=0;i<n-1;i++)
{ for(j=0;j<=i;j++)
   {cout<<"*";
   }
   cout<<endl;
   }
getch();
return 0;
}