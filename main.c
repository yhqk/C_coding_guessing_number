/** 
  * Version: 0.0.1
  * Author: Yuhong Qiu-Kaikkonen  
  */

/** 
  * This is a main execution point of application 
  * @param argv nunmber of command line arguments
  * @param argc pointer to array containing the cmd arguments
  * @return integer containing the exit status  
  */

#include <stdio.h>
#include <ctype.h>
#include "task_func.h"

int main(int argv, char **argc){
    printf("Give exercise number (1-9):\n"); 
    int c = getchar(); 
    if ( isdigit(c) ){
	switch( c ) {
	
	case '1':
	    printf("Task 1: Guess the number game\n"); 
            task1();        
	    break; 

	case '4' :
	    printf("Task 4:\n"); 
	    break; 

	default :
	    printf("No such task\n"); 	    
	    break; 
	}
    }
    else {
	printf("Please select from 1 to 9\n"); 	    	
    }
    return 0; 
}
