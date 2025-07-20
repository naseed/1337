#include <stdio.h>
int ft_atoi_base(char *str,char *base){
    //cheking the base 
    int i=0;
    int base_len=0;
    while(base[i]!='\0'){
        int j=i+1;
        while(base[j]!='\0'){
            if(base[i]==base[j]){
                return 0;
            }
            j++;
        }
        if(base[i]=='+'||base[i]=='-'){
            return 0; 
        }
        base_len++;
        i++;
    }
    if(base_len<=1){
        return 0;
    }
    //converting the number
    int count=0;
    i=0;
    while(str[i]==32||(str[i]>=9&&str[i]<=13)){
        i++;
    }
     while(str[i]<='0'||str[i]>='9'){
        if(str[i]=='-'){
            count++;
        }
        i++;
    }
    int result=0;
    while(str[i]<='9'||str[i]>='0'){
        str[i]=str[i]-'0';
        result*=10;
        result+=str[i];
    }
    if(result/base_len!=0){
        return ft_atoi_base(result%base_len);
    }
    if(count % 2 !=0){
        return -result;
    }else{
        return result;
    }
}
int main(){

}