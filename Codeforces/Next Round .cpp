#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int n,k,x,i,sum=0;
cin>>n>>k;
int arr[n];
for(i=0;i<n;i++)
    cin>>arr[i];
    k=k-1;
for(i=0;i<n;i++){

    if(arr[i]>=arr[k] && arr[i]>0){

        sum++;
    }

    //
}
cout<<sum;

getch;




}
