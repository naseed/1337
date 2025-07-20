#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

char *ft_strcapitalize(char *str){
    int i=0;
    str[i]=str[i]-32;
    while(str[i]!='\0'){
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            if(str[i]==' '||str[i]=='+'||str[i]=='-'){
                str[i+1]=str[i+1]-32;
            }
        }
    }
    return str;
}
int main(){
    char str[]="Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    ft_strcapitalize(str);
    int i=0;
    while(str[i]!='\0'){
        ft_putchar(str[i]);
        i++;
    }
}