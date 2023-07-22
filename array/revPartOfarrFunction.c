#include <stdio.h>
void reverse(int arr[], int si, int ei)
{
    for (int i = si, j = ei; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 2, 4);
    for (int i = 0; i <= 5; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}