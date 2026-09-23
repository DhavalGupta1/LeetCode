int myAtoi(char* s) {
    long long res=0;
    int isneg=1,i=0;
    // int arr[50],k=0,i=0;
    while(s[i]==' '){
        i++;
    }
    if(s[i]=='+'){
        i++;
    }
    else if(s[i]=='-'){
        isneg=-1;
        i++;
    }
    while(s[i]=='0'){
        i++;
    }
    while(isdigit(s[i])&&s[i]!='\0'){
        res = res * 10 + (s[i] - '0');
        if (isneg == 1 && res > INT_MAX)
        return INT_MAX;
        if (isneg == -1 && -res < INT_MIN)
        return INT_MIN;
        i++;
        // arr[k]=s[i]-'0';
        // printf("%d ",arr[k]);
        // k++;
        // i++;
    }
    // long long ten=1;
    // for(int i=k-1;i>=0;i--){
    //     res+=arr[i]*ten;
    //     ten=ten*10;
    // }
    res=res*isneg;
    if(res<INT_MIN) return INT_MIN;
    else if(res>INT_MAX) return INT_MAX;
    return res;
}