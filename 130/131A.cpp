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

string str;

bool isUpperCase (char c) {
  if (c >= 'A' && c <= 'Z') 
    return true;
  else 
    return false;
}
void solve() {
  cin >> str;
  bool change = true;


  if (isUpperCase(str[0])) {
    FOR(i, 1, str.size()) {
      if (!isUpperCase(str[i])) {
	change = false;
	break;
      }
    }
  } else {
    if (str.size() > 1) {
      FOR(i, 1, str.size()) {
	if (!isUpperCase(str[i])) {
	  change = false;
	  break;
	}
      }
    }
  }

  if (change) {
    REP(i, str.size()) {
      if (isUpperCase(str[i])) {
	cout << (char)(str[i] + ('a' - 'A')); 
      } else {
	cout << (char)(str[i] - ('a' - 'A'));
      }
    }
    cout << endl;
  } else {
    cout << str << endl;
  }
      
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
