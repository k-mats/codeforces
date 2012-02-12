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


void solve() {
  int cnt = 0;
  int ans = 0;
  char c;
  string str;
  
  cin >> str;

  REP(i, str.size()) {

    if (cnt == 0) {
      c = str[i];
      cnt++;
    } else {
      if (c != str[i]) {
	cnt = 0;
	ans++;
      }
      c = str[i];
      cnt++;
    }
    
    if (cnt == 5) {
      c = 'x';
      cnt = 0;
      ans++;
    }
  }

  if (cnt != 0) 
    ans++;

  cout << ans << endl;
      
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
