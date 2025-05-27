// This program takes 10 array elemetns as input from user
// Prints the complete array after that

#include <stdio.h>

int main()
{
    // initializing an array to store numbers
    int array[10];

    // taking input from user
    for (int i = 0; i < 10; i++)
    {
        printf("Element %d : ", i);
        scanf("%d", &array[i]);
    }

    // printing the elements of the array
    printf("Elements of the array are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    // For stylistic purposes
    printf("\n");
}