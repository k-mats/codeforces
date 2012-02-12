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
typedef long long LL;
typedef vector<LL> VLL;

// container utils
#define PB push_back
#define PF push_front
#define GRT(x) greater<(x)>()
#define ASORT(x) sort((x).begin(), (x).end())
#define DSORT(x, y) sort((x).begin(), (x).end(), greater<(y)>())
#define FILL(x, y) fill((x).begin(), (x).end(), (y))

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORL(i, a, b) for (long i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REPL(i, n) FORL(i, 0, n)

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

int n;
int a[100];

void solve() {
  cin >> n;

  REP(i, 100) {
    a[i] = 0;
  }
  
  int tmp;
  REP(i, n) {
    cin >> tmp;
    a[tmp-1]++;
  }
  
  LL cnt = 0;
  bool flag = false;
  REP(i, 100) {
    while (a[i] > 1) {
      flag = false;
      FOR(j, i, 100) {
	if (j == i) {
	  if (a[j] >= 4) {
	    a[j] -= 4;
	    cnt++;
	    flag = true;
	  }
	} else {
	  if (a[i] > 1 && a[j] > 1) {
	    a[i] -= 2;
	    a[j] -= 2;
	    cnt++;
	    flag = true;
	  }
	}
      }
      if (!flag) break;
    }    
  }

  cout << cnt << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
