#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int v1[N], v2[N], v3[N], i1, i2, i3, diff, i3fin;

    for(i1 = 0; i1 < N; i1++){
        printf("Inserire il valore numero %d del primo vettore\n", i1 + 1);
        scanf("%d", &v1[i1]);
    }
    for(i2 = 0; i2 < N; i2++){
        printf("Inserire il valore numero %d del secondo vettore\n", i2 + 1);
        scanf("%d", &v2[i2]);
    }
    i1 = 0;
    i2 = 0;
    i3 = 0;

    for(i1 = 0; i1 < N; i1++){
        for(i2 = 0; i2 < N; i2++){
            if(v1[i1] != v2[i2]){
                diff++;
            }
        }
        if(diff == 10){
            v3[i3] = v1[i1];
            i3++;
            i2 = 0;
            diff = 0;
        }
        else{
            i2 = 0;
            diff = 0;
        }
    }
    i3fin = i3;
    for(i3 = 0; i3 < i3fin; i3++){
        printf("%d\n", v3[i3]);
    }
    return 0;
}
