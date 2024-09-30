#include<bits/stdc++.h>
using namespace std;
int solve (vector < int >v)
{
  int n = v.size ();
  if (n == 0)
    return 0;
  int mx = v[0];
  for (int i = 1; i < n; i++)
    mx = max (mx, v[i]);
  if (mx <= 0)
    return 0;
  int mxSum = 0;
  int cSum = 0;
  for (int i = 0; i < n; i++)
    {
      cSum += v[i];
      if (cSum < 0)
	    cSum = 0;
      mxSum = max (mxSum, cSum);
    }
  return mxSum;
}
int main ()
{
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; i++)
        cin >> price[i];
    vector < int >diff;
    for (int i = n - 2; i >= 0; i--)
        diff.push_back (price[i + 1] - price[i]);
    int ans = solve (diff);
    if (ans < 0)
        cout << 0 << endl;
    else
        cout << ans << endl;
}
