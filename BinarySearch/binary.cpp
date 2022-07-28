#include <bits/stdc++.h>
using namespace std;

int binarySearch(int n, int arr[], int x)
{
    int beg = 0, end = n - 1;
    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
            beg = mid + 1;
    }
    return -1;
}

int binarySearchFirstOccurence(int n, int arr[], int x) // returns the first occurence of a repeated element
{
    int beg = 0, end = n - 1;
    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;
        if (arr[mid] == x && (mid == 0 || arr[mid - 1] < x))
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            beg = mid + 1;
        }
        else
            end = mid - 1;
    }
    return -1;
}
int binarySearchLastOccurence(int n, int arr[], int x) // returns the last occurence of a repeated element
{
    int beg = 0, end = n - 1;
    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;
        if (arr[mid] == x && (mid == n - 1 || arr[mid + 1] > x))
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
            beg = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 6, 6, 9};
    cout << binarySearch(9, arr, 3) << endl;
    cout << binarySearchFirstOccurence(9, arr, 4) << endl;
    cout << binarySearchLastOccurence(9, arr, 6) << endl;
    return 1;
}