#include<bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int salary, emp_id;
public:
    string name, dept;

    Employee(int emp, string n, string dep, int value) 
    {
        emp_id = emp;
        name = n;
        dept = dep;
        salary = value;
    }

    // void SetSal(int value)
    // {
    //     salary = value;
    // }

    void GetSal() 
    {
        cout << "Salary is : " << salary << endl;
    }
};

int main() {
    Employee e1={062,"Vijay","AIML",10000000};
    // e1.SetSal(500000);
    e1.GetSal();
}