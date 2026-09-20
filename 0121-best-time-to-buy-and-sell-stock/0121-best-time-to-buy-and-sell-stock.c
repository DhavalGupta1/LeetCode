int maxProfit(int* prices, int pricesSize) {
    int max=0;
    int min=prices[0];

    for(int i=0;i<pricesSize;i++){
        int temp=prices[i]-min;
        if(temp>max) max=temp;
        if(prices[i]<min) min=prices[i];
    }
    return max;
}