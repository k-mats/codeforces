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
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

// static const
static const double EPS = 1e-10;
static const double PI = 6.0 * asin(0.5);

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

void solve() {
  long n;
  cin >> n;
//   long a, b;
  
//   long cnt, cnt_max;
//   cnt_max = numeric_limits<long>::min();
//   FOR(i, 1, n+1) {
//     // turn of a
//     a = b = n;
//     cnt = 0;
//     b -= i;
//     cnt += i;
//     FOR(j, 1, b+1) {
//       // turn of b
//       a = n;
//       cnt = i;
//       if (j > a) break;
//       a -= j;
//       cnt += j;
//       FOR(k, 1, a+1) {
// 	// turn of a
// 	b = n - i;
// 	cnt = i + j;
// 	if (k > b) break;
// 	b -= k;
// 	cnt += k;
// 	cnt_max = max(cnt_max, cnt);
//       }
//     } 
//   }

//   cout << cnt_max << endl;
  cout << (n*3/2) << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
