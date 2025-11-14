#include <stdio.h>

int main()
{
    int size;

    printf("Enter size of arr : ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr; 

    printf("\n Enter %d elements : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("\n Cube of element : ");
    for (int i = 0; i < size; i++)
    {
        int cube = ((ptr + i)) * ((ptr + i)) * *((ptr + i));
        printf("%d ", cube);
    }

    printf("\n");
    
    return 0;
}
