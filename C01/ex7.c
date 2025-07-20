#include <unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
 void ft_rev_int_tab(int *tab, int size){
    int first=0;
    int last=size-1;
    int tmp;
    while(first<last){
        tmp=tab[first];
        tab[first]=tab[last];
        tab[last]=tmp;
        first++;
        last--;
    }
 }
 int main(){
    int array[9]={1,2,3,4,5,6,7,8,9};
    ft_rev_int_tab(array,9);
    for(int i=0;i<9;i++){
        ft_putchar(array[i] +'0');
    }
 }