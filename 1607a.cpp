//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    long long int s, t, m, n, a, b;

    cin >> s >> t;

    cin >> a >> b;

    cin >> m >> n;

    long long int i, j, x, y, count = 0, sum = 0;
    for (i = 0; i < m; i++)
    {

        cin >> x;

        if (x + a >= s && x + a <= t)
        {

            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x + b >= s && x + b <= t)
            sum++;
    }

    cout << count << endl;
    cout << sum << endl;
    return 0;
}
