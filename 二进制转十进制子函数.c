int parseBinary(const char * const binaryString) {
    int sum=0;
    int i,n=0;
    while (binaryString[n]) n++;
    for (--n,i=n; i>=0; i--)
        sum|=(binaryString[i]-48)<<n-i;
    return sum;
}

