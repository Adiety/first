#include<iostream>
using namespace std;
int main()
{
 int n,l=0,srch,flag=0,temp;
 cout<<"Enter size of array : ";
 cin>>n;
 int a[n],u=n,mid=(l+n)/2;
 cout<<"\nEnter the elements of array \n";
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 cout<<"\nEnter the element to be searched :
     ";
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++)
     {
         if(a[j]>a[j+1])
         {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
     }
 }
 cin>>srch;
 while(l<=u)
 {
     if(a[mid]==srch)
     {
         flag =1;
         break;
     }
     else if(srch>a[mid])
     {
         l=mid+1;
     }
     else if(srch<a[mid])
     {
         u=mid-1;
     }
     mid=(l+u)/2;
 }
 if(flag==1)
 {
    cout<<"Found element ";
 }
 else
    cout<<"Element not found";
}
