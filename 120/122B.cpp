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

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << end

typedef map<string, int> M;

string str;

bool isLucky(string s) {
  REP(i, s.size()) {
    if (s[i] != '4' && s[i] != '7') 
      return false;
  }

  return true;
}

void solve() {
  cin >> str;
  M mp;
  string sub;

  FOR(i, 1, str.size()+1) {
    for (int j = 0; i+j < str.size()+1; j++) {
      sub = str.substr(j, i);
     
      if (isLucky(sub)) {
	mp[sub]++;
      } 
    }
  }

  int max_num = -1;
  string ans;
  M::iterator it = mp.begin();

  REP(i, mp.size()) {
    if ((*it).second > max_num) {
      max_num = (*it).second;
      ans = (*it).first;
    } else if ((*it).second == max_num) {
      if ((*it).first < ans) {
	max_num = (*it).second;
	ans = (*it).first;
      }
    }
    it++;
  }
  
  if (max_num != -1)
    cout << ans << endl;
  else
    cout << max_num << endl;
	
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
