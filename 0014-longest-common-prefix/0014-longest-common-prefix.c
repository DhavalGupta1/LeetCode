char* longestCommonPrefix(char** strs, int strsSize) {
    char* res = (char*)malloc(200*sizeof(char));
    if(strsSize<1) return res;
    if(strsSize==1) return strs[0];
    int k=0,p=0;
    while(1){
        int ch=1;
        char temp=strs[0][p];
        if(temp=='\0'){
            res[k++]='\0';
            return res;
        }
        for(int j=1;j<strsSize;j++){
            if(strs[j][p]!=temp){
                ch=0;
                break;
            }
        }
        if(ch==0){
            res[k++]='\0';
            return res;
        }
        else{
            res[k++]=temp;
            p++;
        }
    }
    res[k++]='\0';
    return res;
}