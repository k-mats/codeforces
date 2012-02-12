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

string adjustFrac(string str, int num_frac, int p_dot) {
  if (num_frac <= 2) return str;
  return str.substr(0, p_dot+3);
}

string addComma(string str, int p_dot, int int_length) {
  string rtn = "";
  int num;
  num = int_length % 3;
  rtn += str.substr(0, num);
  int str_i = num;
  bool hoge = false;
  if (str_i == 0) {
    hoge = true;
  }
  int i = int_length / 3;
  //  if (int_length%3 == 0) i--;
  if (hoge) {
//     if (int_length == 6)
//       rtn = str.substr(str_i, 3) + ",";
//     else
      rtn = str.substr(str_i, 3);
    str_i += 3;

  } else {
    rtn = rtn + "," + str.substr(str_i, 3);
    str_i += 3;
  }
  FOR(j, 1, i) {
    rtn = rtn + "," + str.substr(str_i, 3);
    str_i += 3;
  }
  rtn += str.substr(str_i, str.size()-str_i);


  return rtn;
  
}

void solve() {
  string str;
  bool minus = false;
  int num_frac = 0;
  int p_dot = 0;
  cin >> str;
  if (str[0] == '-') minus = true;
  REP(i, str.size()) {
    if (str[i] == '.') {
      p_dot = i; 
      FOR(j, i+1, str.size()) {
	num_frac++;
      }
      break;
    }
  }
  
  string str_frac;
  if (num_frac == 0) {
    str_frac = ".00";
  } else if (num_frac == 1) {
    str_frac = "0";
  } else if (num_frac >= 2) {
    str_frac = "";
  }
  
  string ans;
  int int_length;
  if (p_dot == 0)
    int_length = str.size();
  else 
    int_length = p_dot;
  if (minus)
    int_length--;
    
  if (minus == true) {
    ans = str.substr(1, str.size()-1);
    ans = adjustFrac(ans, num_frac, p_dot-1);
    if (int_length > 3) ans = addComma(ans, p_dot-1, int_length);
    ans = "($" + ans + str_frac + ")";
  } else {
    ans = adjustFrac(str, num_frac, p_dot);
    if (int_length > 3) ans = addComma(ans, p_dot, int_length);
    ans = "$" + ans + str_frac;
  }

  P(ans);
  
  
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
