#include <stdio.h>

int main()
{
    int N, count = 0;
    scanf("%d", &N);
    char str[50];
    getchar();
    gets(str);

    for (int i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] == str[i])
            count++;
    }
    printf("%d", count);
    return 0;
}

// scanf("%[^\n]s", str);

//   for(int i=0; i<N; i++) scanf("%c",&str[i]);