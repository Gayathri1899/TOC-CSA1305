#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n;

    printf("Enter the input string: ");
    scanf("%s", str);

    n = strlen(str);

    // Check if the string starts with 'a'
    if (str[0] != 'a')
    {
        printf("Rejected\n");
        return 0;
    }

    // Check if all characters are either 'a' or 'b'
    for (i = 0; i < n; i++)
    {
        if (str[i] != 'a' && str[i] != 'b')
        {
            printf("Invalid Input! Only 'a' and 'b' are allowed.\n");
            return 0;
        }
    }

    // Check if the string ends with 'a'
    if (str[n - 1] == 'a')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
