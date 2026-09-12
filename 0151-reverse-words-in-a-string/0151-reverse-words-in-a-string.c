char* reverseWords(char* s) {
    int len=0,k=0;
    while(s[len]!='\0'){
        len++;
    }
    int c=0,i=len-1;
    char *res=(char*)malloc(10000*sizeof(char));
    while(i>=0){
        if(s[i]==' '){
            i--;
        }
        else{
            c=0;
            while(i>=0&&s[i]!=' '){
                c++;
                i--;
            }
            int temp=i+1;
            while(c>0){
                res[k++]=s[temp];
                c--;
                temp++;
            }
            res[k++]=' ';
        }
    }
    res[--k]='\0';
    return res;
}