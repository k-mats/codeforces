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

// using
using namespace std;

// typedef
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<string> VS;
typedef vector<long> VL;
typedef vector<VL> VLL;
typedef long long LL;

// container utils
#define PB push_back
#define PF push_front
#define GRT(x) greater<(x)>()
#define ASORT(x) sort((x).begin(), (x).end())
#define DSORT(x, y) sort((x).begin(), (x).end(), greater<(y)>())

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORL(i, a, b) for (long i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REPL(i, n) FORL(i, 0, n)

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

LL n;
LL cnt[21];

void solve() {
  cin >> n;
  int tmp;
  REP(i, 21) {
    cnt[i] = 0;
  }
  
  REPL(i, n) {
    cin >> tmp;
    cnt[tmp+10]++;
  }

  LL ans = 0;
  int op;
  int j;
  REP(i, 11) {
    j = 20 - i;
    if (i == 10) {
      ans += (cnt[i] * (cnt[i] - 1)) / 2 ;
    } else
      ans += (cnt[i] * cnt[j]);
  }


  cout << ans << endl;
  
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
