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
    FILE *fp;
    char *number;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    time_t start, end;
    double time_taken;
    
    start = time(0);
    
    char sam[5] = "12345";
    
    fp = fopen(argv[1],"r");
    if (!fp)
            printf("Error abriendo archivo \n");
    else
            printf("exito abrir archivo \n");
            fscanf(fp,"%s", number);
            printf("%s\n", number);
    
    
    fun(); 
    end = time(0);
    time_taken = (double)(end - start);  
    printf("%f \n",time_taken); 
    return 0; 
}
