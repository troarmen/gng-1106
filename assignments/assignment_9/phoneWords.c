#include <stdio.h>
#include <ctype.h>

/* Returns the dial pad digit for a letter (e.g. 'a' -> '2') */
char letterToDigit(char letter)
{
    letter = tolower(letter);

    if (letter >= 'a' && letter <= 'c') return '2';
    if (letter >= 'd' && letter <= 'f') return '3';
    if (letter >= 'g' && letter <= 'i') return '4';
    if (letter >= 'j' && letter <= 'l') return '5';
    if (letter >= 'm' && letter <= 'o') return '6';
    if (letter >= 'p' && letter <= 's') return '7';
    if (letter >= 't' && letter <= 'v') return '8';
    if (letter >= 'w' && letter <= 'z') return '9';
    return ' ';
}

int main()
{
    FILE *in = fopen("EnglishWords4Letters.txt", "r");
    char phone[8];
    char word[5];
    int i, match, found = 0;

    if (in == NULL)
    {
        printf("Could not open the word file.\n");
        return 1;
    }

    printf("Enter a 7-digit phone number: ");
    scanf("%7s", phone);

    /* Check each word in the file against the last 4 digits (index 3 to 6) */
    while (!found && fscanf(in, "%4s", word) == 1)
    {
        match = 1;
        for (i = 0; i < 4; i++)
        {
            if (letterToDigit(word[i]) != phone[i + 3])
                match = 0;
        }

        if (match)
            found = 1;
    }

    if (found)
    {
        for (i = 0; i < 3; i++)
            printf("%c", phone[i]);
        for (i = 0; i < 4; i++)
            printf("%c", toupper(word[i]));
        printf("\n");
    }
    else
    {
        printf("Translation failed\n");
    }

    fclose(in);
    return 0;
}
