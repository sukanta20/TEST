
#include <cassert>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <algorithm>
#include <deque>
#include <functional>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>

#include <fstream>
#include <iostream>
#include <sstream>

#include <ext/numeric>

using namespace std;
using namespace __gnu_cxx;
// }}}

typedef long long int64;
const int INF = 0x3f3f3f3f;
template <class T> inline int len (const T &a) { return a.size (); }

#define MAXN 50
char line [MAXN];
map <int, int64> memo;

int64
solve (int n) {
    if (n == 0 || n == 1) return n;
    if (memo.count (n)) return memo [n];
    int64 ret = n;
    ret = max (ret, solve (n / 2) + solve (n / 3) + solve (n / 4));
    return memo [n] = ret;
}

int
main () {
#ifdef LOCALHOST
    freopen ("test.in", "r", stdin);
    // freopen ("test.out", "w", stdout);
#endif

    int N;
    while (fgets (line, MAXN, stdin)) {
        sscanf (line, "%d", &N);
        int64 ret = solve (N);
        printf ("%lld\n", ret);
    }

    return 0;
}
