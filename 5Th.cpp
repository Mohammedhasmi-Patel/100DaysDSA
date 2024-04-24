public:
int countZeroes(int arr[], int n)
{
  // code here
  int start = 0, end = n - 1, mid, firstOcc = 0, lastOcc = 0;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == 0)
    {
      firstOcc = mid;
      end = mid - 1;
    }
    // arr[mid]==1
    else
    {
      start = mid + 1;
    }
  }

  start = 0, end = n - 1;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == 0)
    {
      lastOcc = mid;
      start = mid + 1;
    }
    // arr[mid]==1
    else
    {
      start = mid + 1;
    }
  }
  return lastOcc - firstOcc + 1;
}
}
;