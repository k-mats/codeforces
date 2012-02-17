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
#include <iomanip>
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

class Friend {
public:
  string name;
  int t;
  int p;
  int g;
};

bool isTaxi(string s) {
  if (s[0] == s[1] && s[1] == s[3] &&
      s[3] == s[4] && s[4] == s[6] &&
      s[6] == s[7]) {
    return true;
  } else 
    return false;
      
}

bool isPizza(string s) {
  if (s[0] > s[1] && s[1] > s[3] &&
      s[3] > s[4] && s[4] > s[6] &&
      s[6] > s[7]) {
    return true;
  } else 
    return false;
}

void solve() {
  int n;
  cin >> n;

  vector<Friend> vf;
  int tmax = 0, pmax = 0, gmax = 0;

  REP(i, n) {
    int s;
    string name;
    string pn;
    int t = 0, p = 0, g = 0;
    cin >> s >> name;

    REP(j, s) {
      cin >> pn;
      if (isTaxi(pn)) {
	t++;
      } else if (isPizza(pn)) {
	p++;
      } else {
	g++;
      }
    }

    Friend f;
    f.name = name;
    f.t = t;
    f.p = p;
    f.g = g;

    tmax = max(tmax, t);
    pmax = max(pmax, p);
    gmax = max(gmax, g);
        
    vf.PB(f);
  }

  VS tans, pans, gans;
  REP(i, vf.size()) {
    if (vf[i].t == tmax)
      tans.PB(vf[i].name);

    if (vf[i].p == pmax)
      pans.PB(vf[i].name);

    if (vf[i].g == gmax)
      gans.PB(vf[i].name);
  }

  cout << "If you want to call a taxi, you should call: ";
  REP(i, tans.size()-1) {
    cout << tans[i] << ", ";
  }
  cout << tans[tans.size()-1] << "." << endl;

  cout << "If you want to order a pizza, you should call: ";
  REP(i, pans.size()-1) {
    cout << pans[i] << ", ";
  }
  cout << pans[pans.size()-1] << "." << endl;

  cout << "If you want to go to a cafe with a wonderful girl, you should call: "; 
  REP(i, gans.size()-1) {
    cout << gans[i] << ", ";
  }
  cout << gans[gans.size()-1] << "." << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
