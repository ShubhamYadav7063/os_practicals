#include<iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

using namespace std;

int main()
{
    /*   Part A)  before terminating parent waits for child to finish its task  */

    // To run next part please comment out first part

    int pid;
    pid = fork();
    if (pid < 0)
    {
        printf("\n error ");
        exit(1);
    }

    else if (pid == 0)
    {
        printf("Hello I am Child Process.");
        printf("\n My pid is: %d \n", getpid());
        exit(0);
    }

    else if (pid > 0)
    {
        printf("\n Hello I am parent process.");
        printf("\n My pid is: %d \n", getpid());
        wait(NULL);
        exit(1);
    // }

     /*   Part B)   Same program, Different code   */

    // int pid;
    // pid = fork();
    // if (pid < 0)
    // {
    //     printf("\n error ");
    //     exit(1);
    // }

    // else if (pid == 0)
    // {
    //     printf("Hello I am Child Process.");
    //     printf("\n My pid is: %d \n", getpid());
    //     exit(0);
    // }

    // else
    // {
    //     printf("\n Hello I am parent process.");
    //     printf("\n My pid is: %d \n", getpid());
    //     exit(1);
    // }

}