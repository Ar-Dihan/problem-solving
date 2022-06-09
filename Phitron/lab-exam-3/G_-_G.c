#include <stdio.h>

int main()
{
    char str[1000];
    char ns[1000];
    int T;
    scanf("%d", &T);
    while (T--)
    {
        getchar();
        scanf("%s", str);
        int i, j;
        for (i = 0, j = 0; str[i] != '\0'; i += 2, j++)
        {
            ns[j] = str[i];
        }
        ns[j] = str[i - 1];
        ns[j + 1] = '\0';
        printf("%s\n", ns);
    }
    return 0;
}