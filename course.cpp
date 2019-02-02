#include <iostream>
using namespace std;

const int N = 1e6+3, MOD = 1e9+7;

int fact[N];

bool isGood(int y, int a, int b) {
	while (y) {
		int x = y % 10;
		if (x != a && x != b) return 0;
		y /= 10;
	}
	return 1;
}

int pw(int a) {
	int b = MOD - 2;
	int res = 1;
	while (b) {
		if (b&1)
			res = (res *1ll* a) % MOD;
		b >>= 1;
		a = (a *1ll* a) % MOD; 
	}
	return res;
}

int solve (int a, int b, int n) {
	int ans = 0;
	int nFact = fact[n];
	for (int i = 0; i <= n; i++) {
		if(isGood(i * a + (n-i) * b, a, b)) {
			int m1 = (fact[n-i]* 1ll * fact[i]) % MOD;
			m1 = (pw(m1) *1ll* nFact) % MOD;
			ans = (ans + m1) % MOD;
		}
	}
	return ans;
}

void calc(int n) {
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = (fact[i-1] *1ll* i) % MOD;
	}
}


int main() {
	int a, b, n; cin >> a >> b >> n;
	calc(n);
	cout << solve(a, b, n) << endl;
}
