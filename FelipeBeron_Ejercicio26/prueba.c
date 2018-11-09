/* Program to demonstrate time taken by function fun() */
#include <stdio.h> 
#include <time.h> 
  
// A function that terminates when enter key is pressed 
void fun() 
{ 
    printf("fun() starts \n"); 
    printf("Press enter to stop fun \n"); 
    while(1) 
    { 
        if (getchar()) 
            break; 
    } 
    printf("fun() ends \n"); 
} 
  
// The main program calls fun() and measures time taken by fun() 
int main(int argc, char *argv[]) 
{
    FILE *fp, *fopen();
  
    if (argc == 1)
        filescopy(stdin);
    else
        while(--argc > 0)
            if (( fp == fopen(*++argv, "r")) == NULL{
                fprintf(stderr, "cat: can't open %s\n", *argv);
                exit(1);
            } else {
                filecopy(fp);
                fclose(fp);
            }
      exit(0);
    // Calculate the time taken by fun() 
    clock_t t; 
    t = clock();
    
    fun(); 
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("fun() took %f seconds to execute \n", time_taken); 
    return 0; 
}
