  #include <stdio.h>
#include <string.h>
#include <time.h>


void wait(int seconds) {
    clock_t endwait;
    endwait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < endwait) {}
}

int main() {
    char name[30];  
    int correctAns = 0;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nHello %s, your C programming quiz is now starting at GLA.\n\n", name);

    // Question 1
    printf("Ques1: What is the purpose of the 'printf' function in C?\n");
    printf("a) Read input from the user\nb) Print text on the screen\nc) Perform mathematical calculations\nd) Define a variable\n");
    char ans1;
    time_t start1 = time(NULL); 
    scanf(" %c", &ans1);
    if (ans1 == 'b' && difftime(time(NULL), start1) <= 60) {
        correctAns++;
    }

    // Question 2
    printf("Que2: What is the syntax for declaring a pointer in C?\n");
    printf("a) int *ptr;\nb) pointer int *ptr;\nc) ptr int *;\nd) point to int *ptr;\n");
    char ans2;
    time_t start2 = time(NULL); 
    scanf(" %c", &ans2);
    if (ans2 == 'a' && difftime(time(NULL), start2) <= 60) {
        correctAns++;
    }

    // Question 3
    printf("Ques3: What is the purpose of the 'strcmp' function in C?\n");
    printf("a) Compare two strings\nb) Concatenate two strings\nc) Copy a string\nd) Find the length of a string\n");
    char ans3;
    time_t start3 = time(NULL); 
    scanf(" %c", &ans3);
    if (ans3 == 'a' && difftime(time(NULL), start3) <= 60) {
        correctAns++;
    }

    // Question 4
    printf("Que4: What is the difference between 'for' and 'while' loops in C?\n");
    printf("a) They are identical\nb) 'for' is used for iteration, 'while' is used for decision making\nc) 'while' is used for iteration, 'for' is used for decision making\nd) 'for' and 'while' are used interchangeably\n");
    char ans4;
    time_t start4 = time(NULL); 
    scanf(" %c", &ans4);
    if (ans4 == 'b' && difftime(time(NULL), start4) <= 60) {
        correctAns++;
    }

    // Question 5
    printf("Que5: What is the role of the 'break' statement in a 'switch' statement?\n");
    printf("a) Exit the program immediately\nb) Exit the loop and transfer control to the next iteration\nc) Exit the switch statement and transfer control to the statement following it\nd) Exit the function\n");
    char ans5;
    time_t start5 = time(NULL); 
    scanf(" %c", &ans5);
    if (ans5 == 'c' && difftime(time(NULL), start5) <= 60) {
        correctAns++;
    }

    printf("\n%s, you got %d out of 5 questions correct!\n", name, correctAns);

    return 0;
}
