#include <stdio.h> 
#include <time.h> 
  
int main(int argc, char **argv) 
{
    time_t start, end;
    double time_taken;
    
    FILE *data, *counts, *time_res;
        
    char *number;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
        
    start = time(0);
        
    char s1[1] = "1";
    char s2[2] = "12";
    char s3[3] = "123";
    char s4[4] = "1234";
    char s5[5] = "12345";
    
    fp = fopen(argv[1],"r");
    if (!fp)
            printf("Error abriendo archivo \n");
    else
            printf("exito abrir archivo \n");
    
    printf("%d \n", s1[1]);
    printf("%d \n", s2[2]);
    printf("%d \n", s2[3]);
    printf("%d \n", s4[4]);
    printf("%d \n", s5[5]);
    
    end = time(0);
    time_taken = (double)(end - start);  
    printf("%f \n",time_taken); 
    return 0; 
}
