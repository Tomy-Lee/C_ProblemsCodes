//Ñ¡ÔñÅÅÐò×Óº¯Êý 
void selectionSort(double list[], int arraySize) {  
    int i, j, d;  
    double temp;  
    for(i = 0; i < arraySize - 1; i++) {  
        d = i;     
        for(j = i + 1; j < arraySize; j++)  
            if(list[j] < list[d])    
                d = j;  
        if(d != i) {       
            temp = list[d];  
            list[d] = list[i];  
            list[i] = temp;  
        }  
    }  
}
