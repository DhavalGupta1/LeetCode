class Solution {
public:
    string intToRoman(int num) {
        string res;
        vector<int> vec1;
        int check=1;
        while(num>0){
            int digit=num%10;
            digit=digit*check;
            vec1.push_back(digit);
            check=check*10;
            num=num/10;
        }
        for(int i=vec1.size()-1;i>=0;i--){
            if(vec1[i] == 4) res += "IV";
            else if(vec1[i] == 9) res += "IX";
            else if(vec1[i] == 40) res += "XL";
            else if(vec1[i] == 90) res += "XC";
            else if(vec1[i] == 400) res += "CD";
            else if(vec1[i] == 900) res += "CM";
            else{
                while(vec1[i]>0){
                    if(vec1[i]>=1000){
                        vec1[i]-=1000;
                        res+="M";
                    }
                    else if(vec1[i]>=500){
                        vec1[i]-=500;
                        res+="D";
                    }
                    else if(vec1[i]>=100){
                        vec1[i]-=100;
                        res+="C";
                    }
                    else if(vec1[i]>=50){
                        vec1[i]-=50;
                        res+="L";
                    }
                    else if(vec1[i]>=10){
                        vec1[i]-=10;
                        res+="X";
                    }
                    else if(vec1[i]>=5){
                        vec1[i]-=5;
                        res+="V";
                    }
                    else if(vec1[i]>=1){
                        vec1[i]-=1;
                        res+="I";
                    }
                }
            }
        }
        return res;
    }
};