#include <stdio.h>

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;

    printf("\n Enter size of arr : ");
    scanf("%d", &size);

    int arr[size];

    printf("\n Enter %d elements : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int total = sum(arr, size);

    printf("\n Sum of arr elements = %d", total);

    return 0;
}
