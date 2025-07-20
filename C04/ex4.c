#include <unistd.h>
void ft_putnbr_base(int nbr,char *base){
    //chekcing the base
    int i=0;
    int base_len=0;
    while(base[i]!='\0'){
        int j=i+1;
        while(base[j]!='\0'){
            if(base[i]==base[j]){
                return ;
            }
            j++;
        }
        if(base[i]=='+'||base[i]=='-'){
            return ; 
        }
        base_len++;
        i++;
    }
    if(base_len<=1){
        return ;
    }
    //converting the number
    if(nbr<0){
        char c='-';
        write(1,&c,1);
        nbr=-nbr;
    }
    if(nbr/base_len!=0){
        ft_putnbr_base(nbr/base_len,base);
    }
    write(1,&base[nbr%base_len],1);
}
int main(){
    ft_putnbr_base(1001,"01");
}