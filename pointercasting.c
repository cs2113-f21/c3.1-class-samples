#include <stdio.h>

int main(){

    //int a = 10;
    int a = 0xdeadbeef;

                  // l  l e H
    int hello[] = {0x6c6c6548,
                  //  0 W _ o
                   0x6f57206f,
                  // \0 d l  r  
                   0x00646c72};

    printf("%s\n",hello);

    //what am I doing here? 
    char * p = (char *) &a;

    printf("p[0]=0x%02hhx\n", p[0]);
    printf("p[1]=0x%02hhx\n", p[1]);
    printf("p[2]=0x%02hhx\n", p[2]);
    printf("p[3]=0x%02hhx\n", p[3]);


}