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
#include <algorithm>
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

void solve() {
  long n;
  cin >> n;

  vector<long> a;
  long tmp;
  REP(i, n) {
    cin >> tmp;
    a.PB(tmp);
  }

  long m = -1;
  long index = 0;
  REP(i, n) {
    if (a[i] > m) {
      m = a[i];
      index = i;
    }
  }

  a[index] = (m == 1) ? 2 : 1;

  sort(a.begin(), a.end());

  REP(i, n) {
    cout << a[i] << " ";
  }
  cout << endl;
  
  
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
