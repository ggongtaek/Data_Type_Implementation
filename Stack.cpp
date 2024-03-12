#include <iostream>

using namespace std;

//stack size
int s;
//stack
int arr[10001];

void push (int num) {
  arr[s++] = num;
}

int pop () {
  if (s == 0) return -1;
  int ans = arr[s - 1];
  s--;
  return ans;
}

int size () {
  return s;
}

int empty () {
  if (s == 0) return 1;
  return 0;
}

int top () {
  if (s == 0) return -1;
  return arr[s - 1];
}

int main () {
  //속도 향상
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  while (N--) {
    char com[6];
    cin >> com;
    if (com[0] == 'p' && com[1] == 'u') {
      int num;
      cin >> num;
      push (num);
    }
    else if (com[0] == 'p')
      cout << pop () << '\n';
    else if (com[0] == 's')
      cout << size () << '\n';
    else if (com[0] =='e')
      cout << empty () << '\n';
    else if (com[0] == 't')
      cout << top () << '\n';
  }
	return 0;
}
