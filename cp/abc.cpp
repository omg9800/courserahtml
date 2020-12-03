#include <bits/stdc++.h>
using namespace std;

int main() {




#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int i, n, k, t, p;
    vector<int> v;
    cin >> t;
    while (t--)
    {
        cin >> n;
        p = n;

        for (i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {

                if (n / i == i)
                    v.push_back(i);

                else
                {   v.push_back(i);
                    v.push_back(n / i);
                }
            }
        }

        sort(v.begin(), v.end(), greater<int>());
        k = 0;
        i = 1;
        while ((n / v[i]) >= 1)
        {
            n = n / i;
            k++;
            i++;
        }

        cout << k + (n - 1) << endl;





    }

    return 0;
}