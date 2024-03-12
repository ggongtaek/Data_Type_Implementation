#include <iostream>

using namespace std;

//queue size
int q;
//queue
int arr[10001];

void push (int num) {
  arr[q++] = num;
}

int pop () {
  if (q == 0) return -1;
  int ans = arr[0];
  for (int i = 0; i < q - 1; i++)
    arr[i] = arr[i + 1];
  q--;
  return ans;
}

int size () {
  return q;
}

int empty () {
  if (q == 0) return 1;
  return 0;
}

int front () {
  if (q == 0) return -1;
  return arr[0];
}

int back () {
  if (q == 0) return -1;
  return arr[q - 1];
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
    else if (com[0] == 'f')
      cout << front () << '\n';
    else if (com[0] == 'b')
      cout << back () << '\n';
  }
	return 0;
}
