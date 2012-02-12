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

long n;
vector<double> a;

void solve() {
  cin >> n;
  
  long tmp;
  for (long i = 0; i < n; i++) {
    cin >> tmp;
    a.PB(tmp);
  }

  double avg = 0;
  for (long i = 0; i < n; i++) {
    avg += a[i];
  }
  avg /= (double)n;

  vector<long> ans;

  for (long i = 0; i < n; i++) {
    if (a[i] == avg) {
      ans.PB(i);
    }
  }

  cout << ans.size() << endl;

  for (long i = 0; i < ans.size(); i++) {
    cout << ans[i]+1 << " ";
  }
  cout << endl;
  
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
