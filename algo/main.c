#include <stdio.h>
#include <stdlib.h>

void sort(int *tab, int N){
    int i,j;
    int min;
    for(i = 0; i < N - 1; i++){
        i = min;
        for(j = i; j < N + 1; j++){
            if(tab[j] < tab[min]){
                j = min;
            }
        }
        if(min != i){
            tab[min] = tab[i];
        }

        printf("\n%d\n", tab[min]);
    }


}

int main(){
    int tab[] = {2,1,3,4,3};

    sort(tab, 6);
    return 0;
}
