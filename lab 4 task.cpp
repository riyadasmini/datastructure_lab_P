#include<iostream>
using namespace std;

class Student{
public:
    string s_name;
      int id;
      double cgpa;
      void showInfo()
      {
      cout<<"Student Name: "<<s_name<<endl;
      cout<<"Student ID: "<<id<<endl;
      cout<<"Student CGPA: "<<cgpa<<endl;
      }
      void setValue(string n,int i, double c)
      {
          s_name=n;
          id=i;
          cgpa=c;
      }

};
int main()
{
 int min_index=0;
 Student temp;

Student s1,s2,s3,s4,s5,s6; //variable/object/instance
s1.setValue("M",1,3.5);
s2.setValue("N",2,3.4);
s3.setValue("O",3,3.7);
s4.setValue("P",4,3.9);
s5.setValue("Q",5,3.0);
s6.setValue("S",5,3.2);

s1.showInfo();
s2.showInfo();
s3.showInfo();
s4.showInfo();
s5.showInfo();

Student A[5]={s1,s2,s3,s4,s5};



    for(int i=0; i<6; i++){
        min_index = i;

        for(int j=i+1; j<6; j++){
            if(A[min_index].cgpa > A[j].cgpa){
                min_index = j;
            }
        }
        temp = A[min_index];
        A[min_index] = A[i];
        A[i] = temp;
    }

for(int i=0; i<6; i++)
{
cout<<A[i].s_name<<" ";
cout<<A[i].id<<" ";
cout<<A[i].cgpa<<" ";
cout<<endl;

}
}
