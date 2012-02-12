#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cstdlib>
#include <cmath>

// using
using namespace std;

// typedef
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<string> VS;
typedef vector<long> VL;
typedef long long LL;
typedef vector<LL> VLL;

// container utils
#define PB push_back
#define PF push_front
#define GRT(x) greater<(x)>()
#define ASORT(x) sort((x).begin(), (x).end())
#define DSORT(x, y) sort((x).begin(), (x).end(), greater<(y)>())
#define FILL(x, y) fill((x).begin(), (x).end(), (y))

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORL(i, a, b) for (long i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REPL(i, n) FORL(i, 0, n)

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

bool isPunc(char c) {
  return (c == ',') || (c == '.') || (c == '!') || (c == '?');
}

void solve() {
  char c;
  char str[10000];
  int i = 0;

  // remove consective white-spaces and input
  while ((c = getchar()) != '\n') {
    if (c == ' ') {
      if (i > 0 && str[i-1] != ' ')
	str[i++] = ' ';
    } else 
      str[i++] = c;
  }
  
  // check the last index (tail) with non white-space
  int tail;
  for (int j = i-1; j >= 0; j--) {
    if (str[j] != ' ') {
      tail = j;
      break;
    }
  }
  
  // adjust white-space for punctuations and output
  int j = 0;
  while (j <= tail) {
    if (j <= tail-1 && str[j] == ' ' && isPunc(str[j+1])) {
      j++;
    } else if (j <= tail-1 && isPunc(str[j]) && str[j+1] != ' ') {
      cout << str[j++] << " ";
    }else {
      cout << str[j++];
    }
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
