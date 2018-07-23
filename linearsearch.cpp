#include<iostream>
using namespace std;
int main()
{
 int srch,flag=0,temp,n;
 cout<<"Enter size of array : ";
 cin>>n;
 int a[n];
 cout<<"\nEnter the elements of array \n";

 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 cout<<"\nEnter the element to be searched : ";
 cin>>srch;
 for(int i=0;i<n;i++)
 {
     if(a[i]==srch)
     {
          flag=1;
          break;
     }
 }
 if(flag==1)
    cout<<"Element found ";
 else
    cout<<"Element not found ";
}
