#include<iostream>
using namespace std;
void Unknown(int *p, int num);
void HardToFollow(int *p, int q, int *num);

void Unknown(int *p, int num) {
  int *q;

  q = &num;
  *p = *q + 2;
  num = 7;
}

void HardToFollow(int *p, int q, int *num) {
  *p = q + *num;
  *num = q;
  num = p;
  p = &q;
  cout << *num << endl;
  cout << *p << endl;
  Unknown(num, *p);
}

main() {
  int *q;
  int trouble[3];

  trouble[0] = 1;
  q = &trouble[1];
  *q = 2;
  trouble[2] = 3;

  HardToFollow(q, trouble[0], &trouble[2]);
  cout << trouble[0] << endl;
  Unknown(&trouble[0], *q);

  cout << *q << " " << trouble[0] << " " << trouble[1] << " " << trouble[2];
}