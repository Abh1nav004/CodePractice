// lseek(fn, 0L, SEEK_CUR) determines the current file position without changing it.

// strstr is used to search a given substring in the main string and returns the pointer to the first occurrence of the given substring in the main string.

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
 





// #include <stdio.h>
// #include <stdlib.h>
// #include <pthread.h>
// #include <semaphore.h>
// #include <unistd.h>

// #define NUM_THREADS 5
// #define INITIAL_SEM_VALUE 2
// #define ACCESS_TIME 2


// sem_t semaphore;

// void* resource_access(void* thread_id) {
//     int tid = ((int)thread_id);

    
//     sem_wait(&semaphore);
//     printf("Thread %d is accessing the resource.\n", tid);

    
//     sleep(ACCESS_TIME);

   
//     sem_post(&semaphore);
//     printf("Thread %d has finished accessing the resource.\n", tid);

//     pthread_exit(NULL);
// }

// int main() {
//     int i;
//     int thread_ids[NUM_THREADS];
//     pthread_t threads[NUM_THREADS];

    
//     if (sem_init(&semaphore, 0, INITIAL_SEM_VALUE) != 0) {
//         perror("Semaphore initialization failed");
//         exit(1);
//     }

    
//     for (i = 0; i < NUM_THREADS; i++) {
//         thread_ids[i] = i;
//         if (pthread_create(&threads[i], NULL, resource_access, &thread_ids[i]) != 0) {
//             perror("Thread creation failed");
//             exit(1);
//         }
//     }

    
//     for (i = 0; i < NUM_THREADS; i++) {
//         pthread_join(threads[i], NULL);
//     }

//      sem_destroy(&semaphore);

//     return 0;
// }