#include <stdlib.h>
#include <stdio.h>
#include <time.h>
 
int task1(void)
{
    int right_num;
    int guess_num;
    char c;
 
    srand(time(NULL));
    right_num = rand() % 100;
 
    puts("Please guess a number between 0 and 100.");
 
    while (1) {
        if (scanf("%d", &guess_num) != 1) {
		/* ignore one char, in case user gave a non-number */
		scanf("%c", &c);
		continue;
	}
 
        if (guess_num == right_num) {
	    printf("=== Correct!!!! === \n");
	    return 0;
	}

        if (guess_num < right_num) {
            printf("Your guess is too low. Try again.\n");
        }

        if (guess_num > right_num) { 
            printf("Your guess is too high. Try again.\n ");
        }
    }
}
