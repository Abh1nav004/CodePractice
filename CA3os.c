#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_BUFFER_SIZE 4096

int main() {
    char name[256];
    char searchWord[256];
    char replaceWord[256];
    char buffer[MAX_BUFFER_SIZE]; 
    int replaceAll = 0;

    
    printf("Enter the name of the text file: ");
    scanf("%s", name);
    printf("Enter the word to be replaced: ");
    scanf("%s", searchWord);
    printf("Enter the new word: ");
    scanf("%s", replaceWord);

   
    printf("Replace all occurrences? (1 for yes, 0 for no): ");
    scanf("%d", &replaceAll);

    int file = open(name, O_RDWR);
    if (file == -1) {
        perror("File open error");
        exit(1);
    }

    int Read = read(file, buffer, MAX_BUFFER_SIZE);
    if (Read == -1) {
        perror("File read error");
        close(file);
        exit(1);
    }

    char *occurrence;
    while ((occurrence = strstr(buffer, searchWord)) != NULL) {
        lseek(file, occurrence - buffer, SEEK_SET); 
        if (replaceAll) {
            strncpy(occurrence, replaceWord, strlen(replaceWord));
        } else {
            if (occurrence == buffer || *(occurrence - 1) == ' ' || *(occurrence - 1) == '\n') {
                strncpy(occurrence, replaceWord, strlen(replaceWord));
                break;
            } else {
                occurrence = occurrence + 1;
            }
        }
    }

   
    lseek(file, 0, SEEK_SET);

    
    int Written = write(file,buffer,Read);
    if (Written == -1) {
        perror("File write error");
    }

    close(file);

    printf("File modified successfully.\n");
    return 0;
}
