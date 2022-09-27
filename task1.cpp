#include <iostream>
using namespace std;

int main()
{
    int arr_size_1, arr_size_2;
    cout<<"Enter the size of Array 1: ";
    cin>>arr_size_1;
    cout<<"Enter the size of Array 2: ";
    cin>>arr_size_2;

    int array1[arr_size_1], array2[arr_size_2], array3[arr_size_1+arr_size_2];

    cout<<" Enter the numbers for Array 1: ";
    for(int i=0; i<arr_size_1; i++)
    {
        cin >> array1[i];
    }

    cout<<" Enter the numbers for Array 2: ";
    for(int i=0; i<arr_size_2; i++)
    {
        cin >> array2[i];
    }

    int j = 0;
    for(int i = 0 ; i < arr_size_1+arr_size_2; i++)
    {
        if(i < arr_size_1)
        {
            array3[i] = array1[i];
        }
        else
        {
            array3[i] = array2[j];
            j++;
        }
    }

    cout << "The Merging Array is: ";
    for (int i = 0; i < arr_size_1+arr_size_2; i++)
    {
        cout<< array3[i] <<" ";
        cout<<endl;
    }

    cout << "The Reversed Merging Array is: ";
    for (int i = arr_size_1+arr_size_2-1; i >= 0; i--)
    {
        cout << array3[i] <<" ";
    }
    return 0;
}
