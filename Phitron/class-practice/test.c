// #include <stdio.h>

// int main()
// {
//     // int a[6]=[1,2,3,4,5,6];
//     int a = {0, 2, 1, 4, 3};
//     for (int i = 0; i < 6; i++)
//         printf("%d\n", a[i]);
//     // a[0] += 010;
//     // a[0] = a[0] * 2;
//     // printf("%d\n", a[0]);
//     return 0;
// }

#include <stdio.h>
// #include <string.h>

// void makeStrCopy(char in[], char out[])
// {
//     int i;
//     for (i = 0; in[i] != '\0'; ++i)
//     {
//         out[i] = in[i];
//     }
//     out[i] = '\0';
//     printf("\"out\" string variable after function call: %s\n", out);
// }

// int main()
// {
//     char in[] = "Hello", out[20];
//     printf("\"out\" string variable before function call: %s\n", out);
//     makeStrCopy(in, out);
//     return 0;
// }
// int main()
// {
//     char str[] = "Hello", str1[10];
//     char ch = 'l';
//     int i, j, k = 0, pos;
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ch)
//         {
//             pos = i;
//             for (j = i; str[j] != '\0'; j++, k++)
//             {
//                 str1[k] = str[j];
//             }
//             str1[k] = '\0';
//             break;
//         }
//         else
//         {
//             pos = 0;
//         }
//     }
//     if (!pos)
//     {
//         printf("Character not found.\n");
//     }
//     else
//         printf("Character found at position: %d\nThe string is: %s\n", pos, str1);
//     {
//     }
// }

void swapPassByValue(int firstVariable, int secondVariable)
{
    int tempVariable;

    tempVariable = firstVariable;
    firstVariable = secondVariable;
    secondVariable = tempVariable;

    return;
}

void swapPassByReference(int *pFirstVariable, int *pSecondVariable)
{
    int temp;

    // using dereferenced pointers means the function is working with the values at the addresses that are passed in
    temp = *pFirstVariable;
    *pFirstVariable = *pSecondVariable;
    *pSecondVariable = temp;

    return;
}

int main()
{
    int a = 100;
    int b = 200;

    printf("Value of a and b: %d , %d\n", a, b);
    printf("After calling function which is pass by value\n");
    swapPassByValue(a, b);
    printf("The value of a and b: %d , %d\nThe value is not changed\n", a, b);

    printf("After calling function which is pass by reference\n");
    swapPassByReference(&a, &b);
    printf("The value of a and b: %d , %d\nThe value is changed\n", a, b);

    return 0;
}