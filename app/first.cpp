#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j < n && a[j] == 1) j++;
        ans = max(ans, j - i);
        i = j;
    }
    cout << ans << endl;
    return 0;
}