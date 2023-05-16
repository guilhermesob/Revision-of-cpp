
// Lecture : Initializers            OCSALY                          IDE : CLion

//4 Ways to initialize built-in tpye : ASSIGNMNET, FUNCTION, SYNTAX or CALLING A CONSTRUCTOR

#include <stdio.h>
#include <vector>

int main() {

    printf("INITIALIZING TYPES");
    int a = 1;
    int b = int(2);
    int c(3);
    int d{4}; //NEW to C++

    int e = {5}; //SAME WITH D
    printf("A = %d \n B = %d \n C = %d \n D = %d \n E= %d\n", a, b, c, d, e);

    printf("INITIALIZING ARRAYS");

    int birth_years[] = {1920,2001,2011,2019};

    int john[] = {1988}; //C++11



}