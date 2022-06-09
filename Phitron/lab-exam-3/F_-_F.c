// #include <stdio.h>

// int main()
// {
//     long long N;
//     int count = 0;
//     scanf("%lld", &N);
//     while (N)
//     {
//         if (N % 10 == 4 || N % 10 == 7)
//             count++;
//         N /= 10;
//     }

//     if ((count % 4 == 0 || count % 7 == 0) && count != 0)
//         printf("YES");
//     else
//         printf("NO");
//     return 0;
// }
// // printf("%d\n", count);

#include <stdio.h>
#include <string.h>
int main()
{

    char s[20];
    char a[20];
    int cn = 0;

    gets(s);
    int ln;
    ln = strlen(s);
    int i;

    for (i = 0; i < ln; i++)
        if (s[i] == '4' || s[i] == '7')
            cn++;

    if (cn == 4 || cn == 7)
        printf("YES\n");
    else
        printf("NO\n");
}