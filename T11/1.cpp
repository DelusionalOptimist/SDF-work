#include<iostream>

using namespace std;
class bank {
  int acc_no, balance;
  char name[25], type[25];
  public:
    void add_value() {
      cout << "Enter account number:";
      cin >> acc_no;
      cout << "Enter your name:";
      fflush(stdin);
      cin.getline(name, 25, '\n');
      cout << "Enter type of account:";
      fflush(stdin);
      cin >> type;
      cout << "Enter balance:";
      cin >> balance;
    }
  void deposit(int x) {
    balance += x;
  }
  void withdraw(int x) {
    if (x > balance)
      cout << "The given amount cannot be withdrawn\n";
    else {
      cout << "The given amount has been withdrawn\n";
      balance -= x;
    }
  }
  void display() {
    cout << "Name:" << name << endl;
    cout << "Balance:" << balance << endl;
  }
};

int main() {
  int x;
  bank b;
  b.add_value();
  cout << "Enter the amount to be deposit:";
  cin >> x;
  b.deposit(x);
  cout << "The amount " << x << " has been deposited\n";
  cout << "Enter the amount to be withdrawn:";
  cin >> x;
  b.withdraw(x);
  b.display();
  system("pause");
}
