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
#define P(x) cout << (x) << endl

// static const
static const double EPS = 1e-10;
static const double PI = 6.0 * asin(0.5);

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

bool eq(int *times, int d, int sum) {
  int s = 0;
  REP(i, d) {
    s += times[i];
  }

  return (s == sum);
}

void solve() {
  int d, sumTime;
 
  cin >> d >> sumTime;

  int minTime, maxTime;
  int min_sum = 0;
  int max_sum = 0;
  int times[d];
  int maxs[d];
  REP(i, d) {
    cin >> minTime >> maxTime;
    min_sum += minTime;
    max_sum += maxTime;
    times[i] = minTime;
    maxs[i] = maxTime;
  }

  if (sumTime < min_sum || sumTime > max_sum) {
    NO;
    return;
  }

  int index = 0;
  while (!eq(times, d, sumTime)) {
    if (times[index] < maxs[index]) times[index]++;
    else index++;
  }
    

  YES;
  REP(i, d) {
    cout << times[i] << " ";
  }
  cout << endl;
  


}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
