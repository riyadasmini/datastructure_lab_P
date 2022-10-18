#include<iostream>
using namespace std;

int main()
{

int size;
cout<<"Enter the array size: ";
cin>>size;

int A[100],i;
cout<<"Enter Array Elements: ";
for(int i=0; i<size; i++)
{
    cin>>A[i];
}

cout<<"Entered Array: ";
for(int i=0; i<size; i++)
{
    cout<<A[i]<<" ";
}

cout<<endl;
for(int i=0; i<size;i++)
{
    for(int j=0; j<size-i-1;j++)
    {
        if(A[j]>A[j+1])
        {
        int c= A[j];
        A[j]=A[j+1];
        A[j+1]=c;
        }
    }
}
   cout<<"Sorted Array: ";
for(int i=0; i<size; i++)
{

    cout<<A[i]<<" ";
}
return 0;
}

