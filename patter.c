#include <stdio.h>
#include<math.h>

int main() {

    int i=1;
    for (i=1;i<=5;i++)
        {
            printf("%d\t",i);
            for(int j=0;j<=3;j++)
                {
            printf("%d\t",(int)pow(i,j));// pow(x,y) send a double 
                }        
           printf("\n");
        }
}


//output must be 
//1	 1	1	1	1	
//2	 1	2	4	8	
//3  1	3	9	27	
//4	 1	4	16	64	
//5	 1	5	25	125	
