#include <iostream>
using namespace std;

class Node {
public:
    string Name;
    string ID;
    double CGPA;
    Node* next;
};

Node* head = new Node();


void Create_New_Record(string Name,string ID, double CGPA)
{

    Node* t = new Node();
    t->Name = Name;
    t->ID = ID;
    t->CGPA = CGPA;
    t->next = NULL;


    if (head == NULL
        || (head->ID >= t->ID)) {
        t->next = head;
        head = t;
    }

    else {
        Node* c = head;
        while (c->next != NULL
               && c->next->ID < t->ID) {
            c = c->next;
        }
        t->next = c->next;
        c->next = t;
    }

    cout << "Record Inserted"<<endl;
}


void Show_Record()
{
    Node* p = head;
    if (p == NULL) {
        cout << "No Record "
             << "Available\n";
    }
    else {
        cout << "Name\tID"
             << "\tCGPA\n";

        // Until p is not NULL
        while (p != NULL) {
            cout << p->Name << "    \t"
                 << p->ID << "\t"
                 << p->CGPA << endl;
            p = p->next;
        }
    }
}

int main()
{
    head = NULL;
    string Name, ID;
    double CGPA;

    while (true) {
        cout << "*************Student's Details************* "<<endl<<endl;
        cout << "1. Insert Details"<<endl;
        cout << "2. Show Details "<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter your Choice"<<endl;
        int Choice;

        cin >> Choice;
        if (Choice == 1) {
            cout << "Student's Name\n";
            cin >> Name;
            cout << "Student's ID\n";
            cin >> ID;
            cout << "Student's CGPA \n";
            cin >> CGPA;

            Create_New_Record(Name, ID, CGPA);
        }

        else if (Choice == 2) {
            Show_Record();
        }
        else if (Choice == 3) {
            exit(0);
        }
        else {
            cout << "Invalid Choice"<<endl;
        }
    }
    return 0;
}
