#include <stdio.h>
int ft_atoi(char *str){
    int i=0;
    int count=0;
    int result=0;
        while(str[i]==32||(str[i]>=9&&str[i]<=13)){
            i++;
        }
        while(str[i]<='0'||str[i]>='9'){
            if(str[i]=='-'){
                count++;
            }
            i++;
        }
        while(str[i]>='0' && str[i]<='9'){
            result*=10;
            result+=str[i]-'0';
            i++;
        }
    if(count % 2 !=0){
        return -result;
    }else{
        return result;
    }
}

int main(){
    printf("%d",ft_atoi("---+--+1234ab567"));
    
}