#include<iostream>
using namespace std;

int main()
{
int A[5]={4,3,5,2,8};
int n=5;

cout<<"Given Array: ";
    for(int i=0; i<5;i++){
        cout<<A[i]<<" ";
    }

cout<<endl;
for(int i=0; i<(n-1);i++)
{
for(int j=0; j<(n-i-1);j++)
    {
        if(A[j]>A[j+1])
        {
        int c= A[j];
        A[j]=A[j+1];
        A[j+1]=c;
        }
    }
}
   cout<<"Sorting Array: ";
for(int i=0; i<n; i++)
    {
      cout<<A[i]<<" ";
    }
return 0;
}

