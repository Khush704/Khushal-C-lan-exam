#include <stdio.h>

void reverse(int arr[], int size)
{
    printf("Array in reverse order : \n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

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

    printf("Enter number of elements : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements : \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, size);

    int total = sum(arr, size);
    printf("\n Sum of all elements = %d", total);

    return 0;
}
