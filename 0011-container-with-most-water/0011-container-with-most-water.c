int max(int a,int b){
    if(a>=b){
        return a;

    }
    else return b;
}
int min(int a,int b){
    if(a>=b){
        return b;
    }
    else return a;
}
int maxArea(int* height, int heightSize) {
    int  i=0;
    int j=heightSize-1;
    int res=0;
    while(i<j)
    {
        res=max(res,min(height[i],height[j])*(j-i));
        if(height[i]<height[j]){
            i++;
        }
        else j--;
    }
    return res;
}