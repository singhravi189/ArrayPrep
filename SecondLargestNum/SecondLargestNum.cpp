// { Driver Code Starts

#include <iostream>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution {
public:
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
		// code here
		int first = 0;
		int second = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > first)
			{
				second = first;
				first = arr[i];
			}
			else if ((arr[i] > second) && (arr[i] != first))
				second = arr[i];
		}
		if (!second)
			return -1;
		else
			return second;
	}
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[1000];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		Solution ob;
		auto ans = ob.print2largest(arr, n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends