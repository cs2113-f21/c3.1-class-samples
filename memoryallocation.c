#include <stdio.h>
#include <stdlib.h>

int * sum(int a, int b){
    // malloc is like new in java
    int *c = malloc(sizeof(int)); //sizeof an integer
    *c = a + b;
    return c; //< return the address of the results
}

int * repeater(int a){
    //pointer to an array of integers such that
    //{a,a,a, ..., a} numbers of a's
    // repeater(1) -> {1};
    // repeater(2) - > {2,2}; 

    int * array = malloc(a*sizeof(int));
    for(int i=0;i<a;i++){array[i] = a;};
    return array;
}

char * duplicator(char * src){

    //return a newlly allocated copy of src 
    // such that it will return 0 in a strcmp()
}


int main(){
    int * p = sum(1,2);
    printf("*p=%d\n",*p); 
    free(p); //deallocation

    int * p2 = repeater(10);
    for(int i=0;i<10;i++){
        printf("p2[i]=%d",p2[i]);
    }
    free(p2); 

    char s1[] = "Hello World!";
    char * s2 = duplicator(s1);
    if(strcmp(s1,s2) == 0){
        printf("The strings are the same\n");
    }
}