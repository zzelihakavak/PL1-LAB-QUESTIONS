#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// lab 12 1 .soru
int main()
{
    char str1[100], str2[100];

    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("concatenate string: %s\n", str1);

    return 0;
}

// lab 12 2.soru

bool character(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
int main()
{
    char sentence[1000];
    printf("enter string: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("output string: ");

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (character(sentence[i]))
        {
            printf("%c", sentence[i]);
        }
    }

    printf("\n");

    return 0;
}

// lab 12 3.soru
int main()
{
    char sentence[1000];
    printf("enter string:");
    fgets(sentence, sizeof(sentence), stdin);
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, other = 0;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        char c = sentence[i];

        if (isalpha(c))
        {
            c = tolower(c);

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (isdigit(c))
        {
            digits++;
        }
        else if (isspace(c))
        {
            spaces++;
        }
    }

    printf("vowels: %d\n", vowels);
    printf("consonants: %d\n", consonants);
    printf("digits: %d\n", digits);
    printf("spaces: %d\n", spaces);

    return 0;
}

// lab 12 4.soru

int compareStrings(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main()
{
    int wordCount;
    char **words;

    printf("Kaç kelime gireceksiniz: ");
    scanf("%d", &wordCount);

    words = (char **)malloc(wordCount * sizeof(char *));
    if (words == NULL)
    {
        printf("Bellek ayırma hatası!");
        return 1;
    }

    for (int i = 0; i < wordCount; i++)
    {
        char buffer[100];
        printf("Kelime %d: ", i + 1);
        scanf("%s", buffer);
        words[i] = strdup(buffer);
    }

    qsort(words, wordCount, sizeof(char *), compareStrings);

    printf("Sıralanmış kelimeler:\n");
    for (int i = 0; i < wordCount; i++)
    {
        printf("%s\n", words[i]);
        free(words[i]);
    }

    free(words);

    return 0;
}
