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


int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int p[n][2];

  REP(i, n) {
    cin >> p[i][0];
    p[i][1] = i;
  }

  int tmp0, tmp1;

  for (int i = 0; i < n-1; i++) {
    for (int j = n-1; j > i; j--) {
      if (p[j][0] < p[j-1][0]) {
	tmp0 = p[j][0];
	tmp1 = p[j][1];
	p[j][0] = p[j-1][0];
	p[j][1] = p[j-1][1];
	p[j-1][0] = tmp0;
	p[j-1][1] = tmp1;
      }
    }
  }

  REP(i, n) {
    cout << (p[i][1] + 1) << " ";
  }
  cout << endl;

  
}
