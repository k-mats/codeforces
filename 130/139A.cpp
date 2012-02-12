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


int n;
int p[7];

void solve() {
  string buf;
  
  cin >> n;
  
  REP(i, 7) {
    cin >> p[i];
  }
  

  int i = 0;
  for ( ; ; i++) {
    n -= p[i%7];
    DUMP(n);
    if (n <= 0) break;
  }

  i++;
  i = i % 7;
  if (i == 0) i = 7;

  cout << i << endl;
}

int main(int argc, char *argv[]) {
  //  solve();
  string buf;
  
  cin >> n;
  
  REP(i, 7) {
    cin >> p[i];
  }
  

  int i = 0;
  for ( ; ; i++) {
    n -= p[i%7];
    DUMP(n);
    if (n <= 0) break;
  }

  i++;
  i = i % 7;
  if (i == 0) i = 7;

  cout << i << endl;
}
