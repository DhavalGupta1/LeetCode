bool isIsomorphic(char* s, char* t) {
    int *arr=(int*)calloc(256,sizeof(int));
    int *arr2=(int*)calloc(256,sizeof(int));
    int i=0;
    while(s[i]!='\0'){
        if(arr[(int)s[i]]==0&&arr2[(int)t[i]]==0){
            arr[(int)s[i]]=(int)t[i];
            arr2[(int)t[i]]=(int)s[i];
        }
        else if(arr[(int)s[i]]!=((int)t[i])||arr2[(int)t[i]]!=(int)s[i]){
            return 0;
        }
        i++;
    }
    return 1;
}