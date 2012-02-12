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

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORL(i, a, b) for (long i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REPL(i, n) FORL(i, 0, n)

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

int n, k;

int func(int a) {
  int rtn = 1;
  
  FOR(i, 2, a+1) {
    rtn *= i;
  }
  return rtn;
}

string next_perm(string s, VI p) {
  string rtn = "";
  
  REP(i, p.size()) {
    rtn += s[p[i]];
  }
  
  return rtn;
}

void solve() {
  cin >> n >> k;

  VS nums, nums_org;
  string tmp;
  VI perm;
  REP(i, k) {
    perm.PB(i);
  }

  REP(i, n) {
    cin >> tmp;
    nums.PB(tmp);
  }

  copy(nums.begin(), nums.end(), back_inserter(nums_org));


  int nums_int[n];

  int ans = numeric_limits<int>::max();
  int *max_num, *min_num;
  int kex = func(k);
  
  REP(i, kex+1) {

    REP(j, n) {
      nums_int[j] = atoi(nums[j].c_str());
    }
    max_num = max_element(nums_int, nums_int+n);
    min_num = min_element(nums_int, nums_int+n);
    
    ans = min(ans, *max_num - *min_num);

    next_permutation(perm.begin(), perm.end());
    REP(j, n) {
      nums[j] = next_perm(nums_org[j], perm);
    }
  }

  cout << ans << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
