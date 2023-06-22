#include <stdlib.h>
#include <string.h>

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int wordCount = 0;
    int i, j, k;
    int len = strlen(str);
    char **words = NULL;

    // Count the number of words in the string
    for (i = 0; i < len; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            wordCount++;
        }
    }

    // Allocate memory for the array of words
    words = (char **)malloc((wordCount + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    // Extract words from the string and store them in the array
    i = 0;
    j = 0;
    while (i < len && j < wordCount) {
        while (str[i] == ' ') {
            i++;
        }

        k = i;
        while (str[k] != ' ' && k < len) {
            k++;
        }

        words[j] = (char *)malloc((k - i + 1) * sizeof(char));
        if (words[j] == NULL) {
            // Free previously allocated memory if an allocation fails
            for (int l = 0; l < j; l++) {
                free(words[l]);
            }
            free(words);
            return NULL;
        }

        strncpy(words[j], &str[i], k - i);
        words[j][k - i] = '\0';
        j++;
        i = k;
    }

    words[wordCount] = NULL;
    return words;
}
