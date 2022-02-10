#include <iostream>
using namespace std;
#include <bits/stdc++.h> using namespace std;

// Function to count triplets int CountTriplets (int a[], int n) {

// To store count of total trip

int ans = 0;

for (int i = 0; i < n; i++)
{

    // Initialize count to zero

    int ent

        = 0;

for (int j = 1 + 1; j<n;

// If a[j] > alil then,

// increment ent

if (a[j] > a[i]) cnt++;

// If aljl < a[i]; then // it mean we have foun // such that a[k] < a[i else

ans += cnt ;
}

// Return the final count

return

    ans;
}
int main()
{
    int n;
    cin >> n;
    int c, k;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        cin >> k;
        int an = 0;
        countrip(c, k, 1, 0, an);
        cout << (an % 998244353) << endl;
    }
    return 0;
}
