#include<iostream>
 using namespace std;

 int main()
 {
     int n,i;
     cin>>n;

     int a[n];

     for ( i=0; i<n; i++) cin>>a[i];

     int mine,maxi,imin=0,imax=0;

     mine=a[0];
     maxi=a[0];

     for ( i=0; i<n; i++)
     {
         if ( mine>=a[i])
         {
             mine=a[i];
             imin=i;
         }
         if ( maxi<a[i])
         {
             maxi=a[i];
             imax=i;
         }

     }

     if ( imin<imax)
     {

          imin=(n-1)-imin;
          cout<<(imin+imax-1)<<endl;
     }
     else
     {

      imin=(n-1)-imin;
     cout<<(imin+imax);
     }
 }