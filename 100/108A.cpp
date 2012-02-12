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
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

string pal[] = {"00:00", "01:10", "02:20", "03:30", "04:40", "05:50", "10:01",
    "11:11", "12:21", "13:31", "14:41", "15:51", "20:02", "21:12", "22:22", 
    "23:32"};

void solve() {
  string str;
  cin >> str;

  int h = atoi(str.substr(0, 2).c_str());
  int m = atoi(str.substr(3, 2).c_str());
  int time = h * 60 + m;
  int ans;

  if (time >= 0 && time <= 69) ans = 1;
  else if (time >= 70 && time <= 139) ans = 2;
  else if (time >= 140 && time <= 209) ans = 3;
  else if (time >= 210 && time <= 279) ans = 4;
  else if (time >= 280 && time <= 349) ans = 5;
  else if (time >= 350 && time <= 600) ans = 6;
  else if (time >= 601 && time <= 670) ans = 7;
  else if (time >= 671 && time <= 740) ans = 8;
  else if (time >= 741 && time <= 810) ans = 9;
  else if (time >= 811 && time <= 880) ans = 10;
  else if (time >= 881 && time <= 950) ans = 11;
  else if (time >= 951 && time <= 1201) ans = 12;
  else if (time >= 1202 && time <= 1271) ans = 13;
  else if (time >= 1272 && time <= 1341) ans = 14;
  else if (time >= 1342 && time <= 1411) ans = 15;
  else if (time >= 1412 && time <= 1439) ans = 0;
  
  cout << pal[ans] << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
