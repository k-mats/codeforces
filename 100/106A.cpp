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
#include <limits>
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
#define COPY(x, y) (y).clear(); \
  copy((x).begin(), (x).end(), back_inserter(y))

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORL(i, a, b) for (long i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REPL(i, n) FORL(i, 0, n)

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

int convert(char a) {
  switch (a) {
  case '6':
    a = 6;
    break;
  case '7':
    a = 7;
    break;
  case '8':
    a = 8;
    break;
  case '9':
    a = 9;
    break;
  case 'T':
    a = 10;
    break;
  case 'J':
    a = 11;
    break;
  case 'Q':
    a = 12;
    break;
  case 'K':
    a = 13;
    break;
  case 'A':
    a = 14;
    break;
  }

  return a;
}

bool bigger(char a, char b) {
  int ai;
  int bi;

  ai = convert(a);
  bi = convert(b);
  
  return (ai > bi);
}

void solve() {
  char trump;
  string c1, c2;

  cin >> trump;
  cin >> c1 >> c2;

  if (c1[1] == trump && c2[1] != trump) {
    cout << "YES" << endl;
    return;
  } else if (c1[1] != trump && c2[1] == trump) {
    cout << "NO" << endl;
    return;
  } else {
    if (c1[1] != c2[1]) {
      cout << "NO" << endl;
      return;
    } else {
      if (bigger(c1[0], c2[0])) {
	cout << "YES" << endl;
	return;
      } else {
	cout << "NO" << endl;
      }
    }
  }
    
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
