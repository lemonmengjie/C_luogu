#include <stdio.h>
int quicksort(int a[], int low, int high)
{
    int left = low;
    int right = high;
    int key = a[left];
    while (left < right)
    {
        while (left < right && a[right] >= key)
        {
            right--;
        }
        a[left] = a[right];
        while (left < right && a[left] <= key)
        {
            left++;
        }
        a[right] = a[left];
    }
    a[left] = key;
    if (left - 1 > low)
        quicksort(a, low, left - 1);
    if (right + 1 < high)
        quicksort(a, left + 1, high);
    return 0;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    int a[100001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}