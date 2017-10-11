int main(int argc, const char * argv[]) {
    int formacion[10] = {3,2,4,5,1,6,8,7,9,0};
    int i, j, aux;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(formacion[j] > formacion [j+1]){
                aux = formacion[j];
                formacion[j] = formacion[j+1];
                formacion[j+1] = aux;
            }
        }
    }
    //Asendente
    for(i=0; i<10; i++){
        printf("%i \n", formacion[i]);
    }

    return 0;
}
