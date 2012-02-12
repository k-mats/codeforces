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

// output
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

int ip(VI x, VI y) {
  if ((x[0] == 0 && x[1] == 0) || (y[0] == 0 && y[1] == 0)) {
    return 1;
  }
  return (x[0]*y[0] + x[1]*y[1]);
}

bool isRight(int a, int b, int c, int d, int e, int f) {
  VI v1, v2, v3;
  v1.PB(c-a);
  v1.PB(d-b);
  v2.PB(e-c);
  v2.PB(f-d);
  v3.PB(a-e);
  v3.PB(b-f);

  if (ip(v1, v2) == 0 || ip(v2, v3) == 0 || ip(v3, v1) == 0) 
    return true;
  else
    return false;

}


void solve() {
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  if (isRight(x1, y1, x2, y2, x3, y3)) {
    cout << "RIGHT" << endl;
    return;
  }

 if (isRight(x1+1, y1, x2, y2, x3, y3)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1-1, y1, x2, y2, x3, y3)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1, y1+1, x2, y2, x3, y3)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1, y1-1, x2, y2, x3, y3)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1, y1, x2+1, y2, x3, y3)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1, y1, x2-1, y2, x3, y3)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1, y1, x2, y2+1, x3, y3)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1, y1, x2, y2-1, x3, y3)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1, y1, x2, y2, x3+1, y3)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1, y1, x2, y2, x3-1, y3)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1, y1, x2, y2, x3, y3+1)) {
    cout << "ALMOST" << endl;
    return;
  }

 if (isRight(x1, y1, x2, y2, x3, y3-1)) {
    cout << "ALMOST" << endl;
    return;
  }
  

 cout << "NEITHER" << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
