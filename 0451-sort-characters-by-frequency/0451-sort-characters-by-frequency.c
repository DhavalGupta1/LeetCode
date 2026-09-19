char* frequencySort(char* s) {
    int *arr=(int*)calloc(256,sizeof(int));
    int i=0,c=0,len=2;
    while(s[i]!='\0'){
        arr[(int)s[i]]++;
        len++;
        i++;
    }
    char *res=(char*)malloc(len*sizeof(char));
    int k=0;
    while(c<256){
        int max=0,ind=0;
        for(int i=0;i<256;i++){
            if(arr[i]==0){
                arr[i]=-1;
                c++;
            }
            else if(arr[i]>max){
                max=arr[i];
                ind=i;
            }
        }
        arr[ind]=-1;
        c++;
        for(int j=0;j<max;j++){
            res[k++]=(char)ind;
        }
    }
    res[k]='\0';
    return res;
}