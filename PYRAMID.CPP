#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int i,j,n;
cout<<"Enter the number"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
 for(j=0;j<=(n-i);j++)
{
 cout<<" ";
}
   for(int k=0;k<(2*i-1);k++)
   {
   cout<<"*";
   }
   cout<<endl;
}

getch();
return 0;
}