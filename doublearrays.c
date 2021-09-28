#include <stdio.h>

int main(int argc, char * argv[]){

    int a[][4] = {{0,1,2,3},
                {4,5,6,7},
                {8,9,10,11}};

    printf("a[2][3] = %d\n", a[2][3]);

    printf("a=%p\n",a); //int **
    printf("a[0]=%p\n",a[0]); //int * 
    printf("a[0][0]=%d\n",a[0][0]); //int 


    // char * strings[] = {"Hello",
    //                   " world",
    //                   " !!!"};
    // strings[1][2]='W'; //<-- this will cause an error
    // printf("%s\n",strings[1]);
}