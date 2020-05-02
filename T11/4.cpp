#include<iostream>

#include<string.h>

using namespace std;

class student {
  int sem, roll;
  char name[25];
  public:
    student() {
      sem = 0;
      roll = 0;
      strcpy(name, " ");
    }
  student(int r, char n[], int s = 1) {
    roll = r;
    strcpy(name, n);
    sem = s;
  }
  student(student & s) {
    sem = s.sem;
    roll = s.roll;
    strcpy(name, s.name);
  }
  void input() {
    cout << "Enter the name:";
    fflush(stdin);
    cin.getline(name, 25, '\n');
    cout << "Enter roll no:";
    cin >> roll;
    cout << "Semester:";
    cin >> sem;
  }
  void display() {
    cout << "Name:" << name << endl;
    cout << "Roll No:" << roll << endl;
    cout << "Semester:" << sem << endl;
  }
  void change_sem(int s) {
    sem = s;
  }
  int get_sem() {
    return sem;
  }
  int get_roll() {
    return roll;
  }
  char * get_name() {
    return name;
  }

};
int check(student s1, student s2) {
  if (s1.get_roll() == s2.get_roll())
    if (s1.get_sem() == s2.get_sem())
      if (strcmp(s1.get_name(), s2.get_name()) == 0) return 1;
  return 0;
}
int main() {
  int x;
  student s1(221, "Abc", 3), s2;
  s1.display();
  cout << "Enter the semester:";
  cin >> x;
  s1.change_sem(x);
  s1.display();
  s2.input();
  student s3 = s1;
  cout << "Enter number of student:";
  cin >> x;
  student s[x];
  for (int i = 0; i < x; i++)
    s[i].input();
  if (check(s1, s3) == 1)
    cout << "Data member of s1 and s3 are same\n";
  else
    cout << "Data member of s1 and s3 are not same\n";

}
