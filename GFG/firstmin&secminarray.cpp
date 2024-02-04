vector<int> minAnd2ndMin(int a[], int n) {
    int min1 = a[0], min2 = INT_MAX;
    
    // Traverse the array to find the minimum and second minimum elements.
    for (int i = 1; i < n; i++) {
        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        }
        else if (a[i] < min2 && a[i] != min1)
            min2 = a[i];
    }

    if (n == 1 || min2 == INT_MAX)
        return {-1, -1};
    else
        return {min1, min2};
}