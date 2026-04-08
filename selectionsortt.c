#include<stdio.h>
void selectionSort(int a[], int n, int order) {
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++) {
        min = i;

        for(j = i + 1; j < n; j++) {
            if((order == 1 && a[j] < a[min]) ||
               (order == 2 && a[j] > a[min])) {
                min = j;
            }
        }

        // Swap
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void display(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[50], n, i, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nChoose sorting order:\n");
    printf("1. Ascending\n2. Descending\n");
    scanf("%d", &choice);

    selectionSort(a, n, choice);

    printf("\nSorted array:\n");
    display(a, n);

    return 0;
}
