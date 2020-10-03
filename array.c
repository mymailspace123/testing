// we are just testing
#include <stdio.h>

int array[100], position, c, n, m, ele, selection;

void create()
{
    printf("Size of array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }
}

void display()
{
    for (c = 0; c < n; c++)
    {
        printf("Element %d is at position %d\n", array[c], c);
    }
}

void insert_pos()
{
    printf("Enter the valid position\n");
    scanf("%d", &position);
    if (position >= n + 1)
    {
        printf("Insertion is not possible\n");
    }
    else
    {
        printf("Enter the element\n");
        scanf("%d", &ele);
        for (c = n - 1; c >= position; c--)
        {
            array[c + 1] = array[c];
        }
        array[position] = ele;
    }
}

void delete_pos()
{
    printf("Enter the valid position\n");
    scanf("%d", &position);
    if (position >= n + 1)
    {
        printf("Deletion is not possible");
    }
    else
    {
        printf("Enter the element");
        scanf("%d", &ele);
        for (c = position; c <= n - 1; c++)
        {
            array[c] = array[c + 1];
        }
    }
}

int main(void)
{
    printf("=================================\n");
    printf("Select the operation\n");
    printf("\t(1) - Create\n");
    printf("\t(1) - Display\n");
    printf("\t(2) - Insert\n");
    printf("\t(5) - Delete\n");
    printf("=================================\n");
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
    {
        create();
        break;
    }
    case 2:
    {
        display();
        break;
    }
    case 3:
    {
        insert_pos();
        break;
    }
    case 4:
    {
        delete_pos();
        break;
    }
    default:
    {
        printf("Not a valid selection");
    }
    }
    return 0;
}