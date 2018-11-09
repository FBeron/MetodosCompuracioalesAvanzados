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
int main(int argc, char **argv) 
{
    int i;
  
    for(i = 1 ; i < argc; i++)
        printf("%s \n",argv[i]);
    time_t start, end;
    double time_taken;
    start = time(NULL);
    
    fun(); 
    end = time(NULL); 
    time_taken = ((double)(difftime(end,start))/1000);
  
    printf("fun() took %f seconds to execute \n", time_taken); 
    return 0; 
}
