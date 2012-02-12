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
#include <limits>
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

long n;
long k = numeric_limits<long>::max();
bool flag = false;
typedef pair<long, long> P;
typedef pair<long, P> PL;

int gcd(long a, long b) {
  if (a == 0 || b == 0) return 0;

  if (a < b) swap(a, b);
  
  long r;

  do {
    r = a % b;
    a = b;
    b = r;
  } while (r != 0);

  return a;
    
}

void dfs(long a, long b, long cnt) {
  if (a == 1 && b == 1) {
    k = min(k, cnt);
    flag = true;
    return;
  }

  if (a > b) 
    dfs(a-b, b, cnt+1);
  else
    dfs(a, b-a, cnt+1);
}

void solve() {
  cin >> n;

  FORL(i, 1, n) {
    if (gcd(i, n) == 1) {
      dfs(i, n, 0);
    }
  }

  long ans = (flag == true) ? k : 0;

  cout << ans << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
