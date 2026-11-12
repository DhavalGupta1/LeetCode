char* addBinary(char* a, char* b) {
    char *res=(char*)calloc(10006,sizeof(char));
    int i=strlen(a)-1,k=0;
    int j=strlen(b)-1;
    char c='0',sum='0';
    while(i>=0||j>=0||c=='1'){
        char a1=(i>=0)?a[i]:'0';
        char b1=(j>=0)?b[j]:'0';
        sum = ((a1=='1')^(b1=='1')^(c=='1'))?'1':'0';
        c = ( ((a1=='1') & (b1=='1')) | ((b1=='1') & (c=='1')) | ((a1=='1') & (c=='1')) )?'1':'0';
        res[k++]=sum;
        i--;j--;
    }
    for(int i=0;i<k/2;i++){
        char temp=res[i];
        res[i]=res[k-i-1];
        res[k-i-1]=temp;
    }
    res[k]='\0';
    return res;
}