#include <iostream>
using namespace std;

struct Student
{
    int studentID;
    int completeCredits;
    double CGPA;
};

int main()
{
   struct Student S[10];
   int i, n = 0;
bool check[10]={0};

   for(i=0; i<10; i++)
   {
       cout << "  " << (i + 1) << "th Student's Info"<< endl;
       cout<<"Unique ID: ";
       cin>>n;
       if((n >= 0) && (n <= 9))
       {
           if (check[n] == false)
            {
                S[i].studentID = n;
              check[n] = true;
                cout<<"Number Of Credit Completed: ";
                cin>>S[i].completeCredits;
               cout<<"CGPA: ";
               cin>>S[i].CGPA;
            }

            else
            {
                cout << "Student ID is repeated." << endl;
                i--;
            }
       }

       cout<<endl;
   }
   cout<<endl;
   cout<<"Student’s ID whose CGPA is more than 3.75 : ";
   for(i=0;i<10;i++)
   {
       if(S[i].CGPA > 3.75)
       {
            cout<<S[i].studentID<<endl;
       }
   }
   cout<<endl;
   cout<<"Student’s ID who has completed more than 50 credits : ";
   for(i=0;i<10;i++)
   {
       if(S[i].completeCredits > 50)
       {
            cout<<S[i].studentID<<endl;
       }
   }
   cout<<endl<<endl;
   return 0;
}

