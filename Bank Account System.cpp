#include<bits/stdc++.h>
using namespace std;

class BankAccount 
{
private :
    int balance, acc_num;
public :
    string name;

    BankAccount(string n, int bal, int account) 
    {
        name = n;
        balance = bal;
        acc_num = account;
    }

    void Deposit(int amt) 
    {
        balance += amt;
        cout << "Amount - " << amt << endl;
    }

    void Withdraw(int amt) 
    {
        if (amt <= balance) 
        {
            balance -= amt;
            cout << "Amount - " << amt << endl;
        } 
        else
            cout << "Insufficient balance" << endl;
    }
    
    void CheckBal() 
    {
        cout << "Account Balance : " << balance << endl;
    }
};

int main() 
{
    BankAccount acc1={"Vijay",1000,123456};
    acc1.Deposit(100);
    acc1.CheckBal();
    acc1.Withdraw(100);
    acc1.CheckBal();
}