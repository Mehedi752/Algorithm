// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int arr[N],n;

int partition(int l, int h)
{
    int pivot = arr[l];
    int i = l, j = h;
    while (i < j)
    {
        while (arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';
    return j;
}

void quickSort(int l, int h)
{
    if (l >= h)
        return;

    int p;
    p = partition(l, h);
    quickSort(l, p - 1);
    quickSort(p + 1, h);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Unsorted Array : " << '\n';
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';

    // Using Quicksort Algorithm to sort the array A.
    quickSort(0, n - 1);

    cout << "Sorted Array : " << '\n';
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';
}