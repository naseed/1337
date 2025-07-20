#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
        int i=0;
        while(i<size){
            int j=i+1;
            while(j<size){
                if(tab[i]>tab[j]){
                    int tmp=tab[j];
                    tab[j]=tab[i];
                    tab[i]=tmp;
                }
                j++;
            }
            i++;
        }
}