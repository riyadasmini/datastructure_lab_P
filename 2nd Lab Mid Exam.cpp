#include <iostream>
using namespace std;

class Product
{
   public:

    string ProductName;
    int ProductID;
    double Unite_Price;
    string ProductCategory;

};
int main()
{
    Product P[5];
    int i, n = 0;
    Product temp;
    string name;
 cout<<"*********Product's Information*********"<<endl;
     for(i=0; i<5; i++)
   {
       cout << "  " << (i + 1) << "th Product's Info"<< endl;
                cout<<"Product ID: ";
                cin>>P[i].ProductID;
                cout<<"Product's Name: ";
                cin>>P[i].ProductName;
                cout<<"Product's Category: ";
                cin>>P[i].ProductCategory;
               cout<<"Product's Price: ";
               cin>>P[i].Unite_Price;
    }


    cout<<"*********Sorted By Price Wise Using Selection Sort*********"<<endl;
    for(int i=0; i<5; i++)
        {
        int min_index = i;
        for(int j=i+1; j<5; j++)
            {
            if(P[min_index].Unite_Price > P[j].Unite_Price)
            {
                min_index = j;
            }
            }
        temp = P[min_index];
        P[min_index] = P[i];
        P[i] = temp;
         }

    cout<<endl;

for(int i=0; i<5; i++)
{
cout<<"Product's ID:"<<P[i].ProductID<<"   ";
cout<<"Product's Name:"<<P[i].ProductName<<"   ";
cout<<"Product's Price:"<<P[i].Unite_Price<<"   ";
cout<<"Product's Category:"<<P[i].ProductCategory<<"   ";
cout<<endl;
cout<<endl;

}
cout<<"*********Sorted By Price Wise Using Bubble Sort*********"<<endl;
for(int i=0; i<(5-1);i++)
{
for(int j=0; j<(5-i-1);j++)
    {
        if(P[j].Unite_Price>P[j+1].Unite_Price)
        {

        temp= P[j];
        P[j]=P[j+1];
        P[j+1]=temp;
        }

    }
}
cout<<endl;

for(int i=0; i<5; i++)
    {
cout<<"Product's ID:"<<P[i].ProductID<<"   ";
cout<<"Product's Name:"<<P[i].ProductName<<"   ";
cout<<"Product's Price:"<<P[i].Unite_Price<<"   ";
cout<<"Product's Category:"<<P[i].ProductCategory<<"   ";
cout<<endl;
cout<<endl;
}

cout<<endl;
cout<<endl;


cout<<"Enter the Product's Name to search: ";
cin>>name;

   for(i=0;i<5;i++)
   {
       if(P[i].ProductName == name)
       {
cout<<"Product's ID:"<<P[i].ProductID<<"   ";
cout<<"Product's Name:"<<P[i].ProductName<<"   ";
cout<<"Product's Price:"<<P[i].Unite_Price<<"   ";
cout<<"Product's Category:"<<P[i].ProductCategory<<"   ";
cout<<endl;
       }

   }
   cout<<endl;

}

