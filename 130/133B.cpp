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

string input;

LL bf(char c, int i) {
  LL a = 1;
  LL b;
  REP(j, i) {
    a *= 16;
    a %= 1000003;
  }
  switch (c) {
  case '>':
    b = 8;
    break;
  case '<':
    b = 9;
    break;
  case '+':
    b = 10;
    break;
  case '-':
    b = 11;
    break;
  case '.':
    b = 12;
    break;
  case ',':
    b = 13;
    break;
  case '[':
    b = 14;
    break;
  case ']':
    b = 15;
    break;
  default:
    return 0;
  }

  return (a*b)%1000003;
  
}

void solve() {
  cin >> input;

  LL output = 0;

  REP(i, input.size()) {
    output += bf(input[i], input.size()-1-i);
    output %= 1000003;
  }

  cout << output << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
