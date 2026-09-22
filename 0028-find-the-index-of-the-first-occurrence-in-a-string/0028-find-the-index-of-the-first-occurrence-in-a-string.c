int strStr(char* haystack, char* needle) {
    int res=0;
    int i=0;
    while(haystack[i]!='\0'){
        if(haystack[i]==needle[0]){
            int temp=0,temp2=i;
            while(needle[temp]!='\0'){
                if(haystack[temp2]==needle[temp]){
                    temp2++;
                    temp++;
                    res=1;
                }
                else{
                    res=0;
                    break;
                }
            }
        }
        if(res==1){
            return i;
        }
        i++;
    }
    return -1;
}