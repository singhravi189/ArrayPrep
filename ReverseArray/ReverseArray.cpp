#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[105];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = n - 1; i >= 0; --i)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}