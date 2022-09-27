#include <iostream>
using namespace std;

int main()
{

    int arr_size, count = 0, num;
       cout<<"Enter the size of Array: ";
    cin>>arr_size;

    int array[arr_size];
    cout<<"Enter the numbers of Array: ";
    for(int i=0; i<arr_size; i++)
    {
        cin >> array[i];
    }
    cout<<"Input a number to search: ";
    cin>>num;


    for (int i = 0; i < arr_size; i++)
    {
        if (array[i] == num)
        {
            count++;
        }
    }

    cout << "The number occurs "<< count <<" times in the array.";
    return 0;
}
