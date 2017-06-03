int w[100];
int * doubleCapacity(int *list, int size){
    int size2=size*2,i;
    for(i=0;i<size;i++){
        w[i]=list[i];
    }
    for(i=size;i<size2;i++){
        w[i]=0;
    }
    return w;
}          
