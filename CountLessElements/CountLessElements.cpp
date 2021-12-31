// { Driver Code Starts
#include <iostream>
using namespace std;

int countOfElements(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int arr[100001];
        for (int i = 0; i < n; i++) cin >> arr[i];

        cin >> x;

        cout << countOfElements(arr, n, x) << endl;
    }
    return 0;
}// } Driver Code Ends


int countOfElements(int arr[], int n, int x)
{
    int Cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
            Cnt++;
        else if (arr[i] > x)
            break;
    }
    return Cnt;
}