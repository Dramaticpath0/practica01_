#include <iostream>
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int var [10] = {10,5,4,3,2,1,6,7,8,9};
    int i, j, aux;
    
        for(i=0; i<10; i++){
            for(j=0; j<10; j++){
                if (var[j] > var[j+1]){
                    aux=var[j];
                    var[j]=var[j+1];
                    var[j+1]=aux;
            }
        }
    }
     for(i=0; i<10; i++){
    printf("el numero mayor es: %i \n",var[i]);


     }
    return 0;
}
