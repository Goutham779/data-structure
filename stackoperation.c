
#include <stdio.h>
#define SIZE 5

int main()
{
    int stack[SIZE], top = -1;
    int choice, value, i;

    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (top == SIZE - 1)
                {
                    printf("Stack overflow");
                }
                else
                {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    stack[++top] = value;
                    printf("Element pushed");
                }
                break;

            case 2:
                if (top == -1)
                {
                    printf("Stack underflow");
                }
                else
                {
                    printf("Popped element: %d", stack[top--]);
                }
                break;

            case 3:
                if (top == -1)
                {
                    printf("Stack is empty");
                }
                else
                {
                    printf("Stack elements: ");
                    for (i = top; i >= 0; i--)
                    {
                        printf("%d ", stack[i]);
                    }
                }
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }

    } while (choice != 4);

    return 0;
}