#include <stdio.h>
#include <stdlib.h>

int main() {
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
    
    printf("\nArray : ");
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