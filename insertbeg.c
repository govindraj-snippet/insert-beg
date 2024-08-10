#include <stdio.h>

int main() {
    int arr[100], n, ele;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements : ");


    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert at the beginning: ");
    scanf("%d", &ele);
    for(int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = ele;
    n++;
    printf(" final array  ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}