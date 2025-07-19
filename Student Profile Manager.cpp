#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
    int rno, marks;
public:
    string name, branch;

    Student(string n, string br, int roll,int score)
    {
        name = n;
        branch = br;
        rno = roll;
        marks = score;
    }

    // void SetMarks(int score)
    // {
    //     marks = score;
    // }

    void GetMarks()
    {
        cout << "Marks are: " << marks;
    }

    
};

int main()
{
    Student s1={"Vijay","AIML",062,500};
    // s1.SetMarks(500);
    s1.GetMarks();
}