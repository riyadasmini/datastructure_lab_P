#include <iostream>
using namespace std;

int main()
{
    int arr_size, flag=0;
    int array[arr_size];
    cout<<"Enter the size of Array: ";
    cin>>arr_size;


    cout<<"Enter the numbers of Array: ";
    for(int i=0; i<arr_size; i++)
    {
        cin >> array[i];
    }

    cout<<"The Array with duplicate: ";
    for(int i=0; i<arr_size; i++)
    {
        cout << array[i] << " "<<endl;
    }


        cout<<"The New Array without duplicate: ";
    for (int i = 0; i < arr_size; i++)
    {
        int j;
        for(j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                flag = 1;
                break;
            }
        }

        if (i == j)
        {
            cout << array[i] << " ";
        }
    }

    if(flag == 0)
    {
        cout<<"Array already unique!";
    }
    cout << endl << endl;
    return 0;
}
