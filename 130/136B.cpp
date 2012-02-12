#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <cstdlib>

// using
using namespace std;

// typedef
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<string> VS;
typedef long long LL;

// container utils
#define PB push_back
#define PF push_front
#define GRT(x) greater<(x)>()
#define ASORT(x) sort((x).begin(), (x).end())
#define DSORT(x, y) sort((x).begin(), (x).end(), greater<(y)>())

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl


int multi3(int n) {
  long rtn = 1;

  REP(i, n) {
    rtn *= 3;
  }

  return rtn;
}

void solve() {
  long a, b, c;
  cin >> a >> c;

//   DUMP2(a, c);

  VI a3, b3, c3;
  
  long num;
  int cnt;
  for (int i = 19; i >= 0; i--) {
    num = multi3(i);
    cnt = 0;
    while (a >= num) {
      a -= num;
      cnt++;
    }
    a3.PB(cnt);

    cnt = 0;
    while (c >= num) {
      c -= num;
      cnt++;
    }
    c3.PB(cnt);
  }

//   REP(i, a3.size()) {
//     cout << a3[i];
//   }
//   cout << endl;
//   REP(i, c3.size()) {
//     cout << c3[i];
//   }
//   cout << endl;

  VI _a3;
  REP(i, a3.size()) {
    if (a3[i] == 1) {
      _a3.PB(2);
    } else if (a3[i] == 2) {
      _a3.PB(1);
    } else {
      _a3.PB(0);
    }
  }

//   REP(i, _a3.size()) {
//     cout << _a3[i];
//   }
//   cout << endl;
  
  REP(i, _a3.size()) {
    b3.PB((_a3[i] + c3[i]) % 3);
  }

//   REP(i, b3.size()) {
//     cout << b3[i];
//   }
//   cout << endl;
  
  b  = 0;
  REP(i, b3.size()) {
    num = multi3(19-i);
    b += num * b3[i];
  }

  cout << b << endl;

}

int main(int argc, char *argv[]) {
  solve();
  
  return 0;
}
