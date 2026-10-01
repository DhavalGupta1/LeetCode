char sta[10003];
int top=0;
void push(char c){
    sta[top]=c;
    top++;
}
char pop(){
    return sta[--top];
}
bool isValid(char* s) {
    top=0;
    int i=0;
    if(strlen(s)<2) return 0;
    while(s[i]!='\0'){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            push(s[i]);
        }
        else{
            if(top==0) return 0;
            else if((s[i]==')')&&(pop()!='(')) return 0;
            else if((s[i]==']')&&(pop()!='[')) return 0;
            else if((s[i]=='}')&&(pop()!='{')) return 0;
        }
        i++;
    }

    if(top==0) return 1;
    else return 0;
}