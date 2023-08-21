#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int hash(int key)
{
    return key % SIZE;
}

void insert(int *hash_table, int key)
{
    int index = hash(key);
    int i = 0;
    while (hash_table[(index + i) % SIZE] != -1)
    {
        i++;
    }
    hash_table[(index + i) % SIZE] = key;
}

void display(int *hash_table)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", hash_table[i]);
    }
    printf("\n");
}

void main()
{
    int hash_table[SIZE], choice, ele, count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        hash_table[i] = -1;
    }
    printf("Menu\n");
    while (1)
    {
        printf("1.Inserting an element\t2.Display of table\t3.Exit\n");
        printf("Eneter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (count != 10)
            {
                printf("Enter the element to be inserted");
                scanf("%d", &ele);
                insert(hash_table, ele);
                count++;
            }
            else{
                printf("The memory is full");
            }
                break;
        case 2:
            display(hash_table);
            break;
        case 3:
            exit(0);
        default:
            printf("Inavlid input");
        }
    }
}
