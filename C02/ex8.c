#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}
char *ft_strlowcase(char *str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]<='Z'&&str[i]>='A'){
            str[i]=str[i]+32;
        }
        i++;
    }
    return str;
}

int main(){
    char str[]="NaA14sEr";
    ft_strlowcase(str);
    int i=0;
    while(str[i]!='\0'){
        ft_putchar(str[i]);
        i++;
    }
}