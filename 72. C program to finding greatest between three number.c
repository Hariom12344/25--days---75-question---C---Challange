#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare and find the greatest
    if (num1 >= num2 && num1 >= num3)
        printf("%d is the greatest.\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("%d is the greatest.\n", num2);
    else
        printf("%d is the greatest.\n", num3);

    return 0;
}
