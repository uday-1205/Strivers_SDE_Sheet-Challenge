#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	std::sort(arr, arr + n);
    int c = 1;
    int maxi = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            c++;
        } else {
            maxi = std::max(maxi, c);
            c = 1;
        }
    }
    maxi = std::max(maxi, c);
    if (maxi > n / 2) {
        return arr[n / 2];
    }
    return -1;

	
}