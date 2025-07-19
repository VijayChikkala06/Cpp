#include<bits/stdc++.h>
using namespace std;

class Book
{
private:
    int isbn, copy;
public :
    string title, author;

    Book(string t,string a, int is, int c) 
    {
        title = t;
        author = a;
        isbn = is;
        copy = c;
    }

    void IssueBook() 
    {
        copy--;
        cout << "Issued Book\n";
        cout << "Copies left : " << copy << endl;
    }

    void AddCopy(int n) 
    {
        copy+=n;
        cout << "Added - " << n << " Copies\n";
    }
};

int main() 
{
    Book b1={"Attack On Titan","Hajime Isayama",062,100};
    b1.IssueBook();
    b1.AddCopy(1);
}
