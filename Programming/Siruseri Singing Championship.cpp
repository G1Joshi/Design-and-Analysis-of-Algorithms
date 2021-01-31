#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> L, U;
    for (int i = 0; i < N; ++i)
    {
        int x, y;
        cin >> x >> y;
        L.push_back({x, i});
        U.push_back({y, i});
    }
    int arr[N];
    sort(L.begin(), L.end());
    sort(U.rbegin(), U.rend());
    for (int i = 0; i < N; ++i)
        arr[L[i].second] = (N - i - 1);
    for (int i = 0; i < N; ++i)
        arr[U[i].second] += (N - i - 1);
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    return 0;
}
