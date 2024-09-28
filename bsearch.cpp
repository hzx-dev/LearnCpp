int binary_search(const int arr[], int start, int end, int khey)
{
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;
    if (arr[mid] > khey)
        return binary_search(arr, start, mid - 1, khey);
    else if (arr[mid] < khey)
        return binary_search(arr, mid + 1, end, khey);
    else
        return mid;
}