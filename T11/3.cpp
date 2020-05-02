#include<iostream>

#include<string.h>

using namespace std;
class message {
  char from[25], to[25], text[50];
  int time_stamp;
  public:
    message() {
      cout << "Enter the address of sender:";
      cin >> from;
      cout << "Enter the address of reciever:";
      cin >> to;
      time_stamp = 0;
      strcpy(text, " ");
    }
  void append(char a[]) {
    strcat(text, a);
  }
  void display() {
    cout << text << endl;
  }
};
int main() {
  message m;
  char a[50];
  cout << "Enter the text:";
  fflush(stdin);
  cin.getline(a, 50, '\n');
  m.append(a);
  cout << "Text:\n";
  m.display();
  system("pause");
}
