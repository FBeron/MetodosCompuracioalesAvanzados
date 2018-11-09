#include <stdio.h> 
#include <time.h> 
  
int main(int argc, char **argv) 
{
    time_t start, end;
    double time_taken;
    
    FILE *data, *counts, *time_res;
        
    char number;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    
    start = time(0);
        
    char c1 = '1';
    char c2 = '12';
    char c3[] = '123';
    char c4[] = '1234';
    char c5[] = '12345';
    
    data = fopen(argv[1], "r");
    
    while(fscanf(data, "%c", &number) == 1)
            if (c1 == number)
            {
                count1 ++;
            }
            
    
    //fscanf(data, "%c", &number);
    //printf("%c\n",number);
    
    printf("%i \n", count1);
    
    end = time(0);
    time_taken = (double)(end - start);  
    printf("%f \n",time_taken); 
    return 0; 
}
