#include <bits/stdc++.h>
using namespace std;
class bank
{
    char name[100], address[100];
    char y;
    int balance;

public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};
void bank ::open_account()
{
    cout << "Enter Your Full Name ::" << endl;
    cin.getline(name, 100);
    cin.ignore();
    cout << "Enter Your Address ::" << endl;
    cin.getline(address, 100);
    cin.ignore();
    cout << "What type of Account you Want to open :: \n S)Saving \n C)Current " << endl;
    cin>>y;
    cin.ignore();
    cout << "Enter amount for deposit :: " << endl;
    cin >> balance;
    cin.ignore();
    cout << "Your acount is created....";
}
void bank::deposite_money()
{
    int a;
    cout << "Enter your amount :: " << endl;
    cin >> a;
    balance += a;
    cout << "Total deposit Balance :: \t" << balance;
}
void bank::display_account()
{
    cout << "Your full name  \t" << name;
    cout << "Your Address ::" << address;
    cout << "Type of Account :: \t" << y;
    cout << "Balance :: \t" << balance;
}
void bank::withdraw_money()
{
    int amount;
    cout << "\n Withdraw :: " << endl;
    cout << "Enter the amount to withdraw :: " << endl;
    cin >> amount;
    balance = balance - amount;
    cout << "Balance :: \t" << balance;
}
int main()
{
    bank obj;
    int option;    
    char x;
    do
    {
        cout << "1)  Open account " << endl;
        cout << "2)  Deposit Money " << endl;
        cout << "3)  Withdraw Money " << endl;
        cout << "4)  Display account " << endl;
        cout << "5)  Exit";
        cout << "\n\n";
        cout << "Enter the number to choose options :: " << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "1) Open account " << endl;
            obj.open_account();
            break;

        case 2:
            cout << "2) Depoosit Money " << endl;
            obj.deposite_money();
            break;

        case 3:
            cout << "3) Withdraw Money " << endl;
            obj.withdraw_money();
            break;

        case 4:
            cout << "4) Display Account " << endl;
            obj.display_account();
            break;

        case 5:
            exit(1);
            break;

        default:
            cout << " This is not exit try again " << endl;
        }

        cout << "\n Do you want to select next option the press :: y/n";
        cout << "\n if you want to exit then press :: N";
        cin >> x;

        if (x == 'n' || x == 'N')
        {
            exit(0);
        }

    } while (x == 'y' || x == 'Y');
    return 0;
}
