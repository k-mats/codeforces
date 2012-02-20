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
#define FORLL(i, a, b) for (LL i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REPL(i, n) FORL(i, 0, n)
#define REPLL(i, n) FORLL(i, 0, n)


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

bool isPrime(LL a) {
  if (a < 2) return false;
  if (a == 2) return true;
  if (a % 2 == 0) return false;

  for (LL i = 3; i*i <= a; i += 2) {
    if (a % i == 0) return false;
  }

  return true;
}

VLL PrimeFactorization(LL q) {
  VLL rtn;

  while (!isPrime(q)) {
    for(LL i = 2; i*i <= q; i++) {
      if (q % i == 0) {
	q /= i;
	rtn.PB(i);
	if (rtn.size() >= 3) {
	  return rtn;
	}
	break;
      }
    }
  }
  
  rtn.PB(q);
  return rtn;
}

void solve() {
  LL q;
  VLL primes, pf;
  
  cin >> q;

  if (q == 1 || isPrime(q)) {
    P(1);
    P(0);
    return;
  }

  pf = PrimeFactorization(q);

  if (pf.size() == 2) {
    P(2);
    return;
  }

  if (pf.size() > 2) {
    P(1);
    LL ans = pf[0] * pf[1];
    P(ans);
  }

}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
