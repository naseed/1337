#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

char *ft_strcapitalize(char *str){
    int i=0;
    int x=1;
    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
            if(x){
                str[i]-=32;
            }
            x=0;
        }else if(str[i]>='A'&&str[i]<='Z'){
            if(!x){
                str[i]+=32;
            }
            x=0;
        }else if(str[i]>='0'&&str[i]<='9'){
            x=0;
        }else{
            x=1;
        }
        i++;
    }
    return str;
}
int main(){
    char str[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    int i=0;
    while(str[i]!='\0'){
        ft_putchar(str[i]);
        i++;
    }
}