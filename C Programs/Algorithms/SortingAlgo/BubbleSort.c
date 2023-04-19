#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    printf("Enter number of elements : ");
    scanf("%d", &size);
    
    int *arr = (int*)malloc(size * sizeof(int));
    
    printf("\nEnter Array : ");
    for (int i=0; i<size; ++i)
    {
        int num;
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < size; ++i)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Array : ");
    for (int i=0; i<size; ++i)
    {
        if (i == (size - 1))
            printf("%d", arr[i]);
        else    
            printf("%d, ", arr[i]);
    }
    free(arr);

    return 0;
}