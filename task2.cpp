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

   int n=0;
    for(int i = 0 ; i < arr_size_1; i++)
    {
        for (int j = 0 ; j < arr_size_2; j++)
        {
            if(array1[i] == array2[j])
            {
                array3[n] = array2[j];
                n++;
            }
        }
    }

    if(n != 0)
    {
        cout<<"The Common Numbers are: ";
        for (int i = 0; i<n; i++)
        {
                cout << array3[i] << " "<<endl;
        }
    }
    else
    {
        cout<<"There has No Common Number!!"<<endl<<endl;
    }
    return 0;
}
