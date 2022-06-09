// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[100];
//     fgets(name, sizeof(name), stdin);
//     int sLength = strlen(name) - 1;
//     if(name)
//     if (sLength % 2 == 1)
//     {
//         printf("IGNORE HIM!");
//     }

//     else
//     {
//         printf("CHAT WITH HER!");
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>


int count_unique_char(char *str)
{

    int hash[128] = {0};
    int i, c = 0;


    for (i = 0; i < strlen(str); ++i)
    {

        hash[str[i]] = 1;
    }

    for (i = 0; i < 128; ++i)
    {
        c += hash[i];
    }

    return c;
}

int main()
{

    char str[100];
    gets(str);
    int sizeS = count_unique_char(str);
    if (sizeS % 2 == 1)
    {
        printf("IGNORE HIM!");
    }

    else
    {
        printf("CHAT WITH HER!");
    }
}