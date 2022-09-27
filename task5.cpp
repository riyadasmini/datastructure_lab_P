#include <iostream>
using namespace std;

int main()
{
    int size, count, i, j;
    cout<<"Enter the size of Array: ";
    cin>>size;

    int Array[size], Repetition[size];

    cout<<"Enter the Numbers of Array: ";
    for(i=0; i<size; i++)
    {
        cin >> Array[i];
        Repetition[i] = 0;
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(Array[i] == Array[j])
            {
                count++;
                Repetition[j] = -1;
            }
        }

        if(Repetition[i] == 0)
        {
            Repetition[i] = count;
        }
    }

    cout<<"Repetition of All Numbers of an Array: ";
    cout<<endl;
    for(i=0; i<size; i++)
    {
        if(Repetition[i] != -1)
        {
            cout<< Array[i] <<" occurs = " << Repetition[i] << " times."<<endl;
        }
    }
    return 0;
}
