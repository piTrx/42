#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *v;
    printf("Nro de valores: ");
    scanf ("%d", &n);
    v = (int*)malloc(sizeof(int)*n);
    for(i = 0; i<n; i++){
        printf("v[%d] = ",i);
        scanf("%d", &v[i]);
    }
    for (i=0;i<n;i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
    free(v);
    return 0;
}

