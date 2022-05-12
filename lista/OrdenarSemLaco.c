#include<stdio.h>
   
int maior(int n1, int n2) {
    if(n1 > n2)
        return n1;
    else
        return n2;
}
int menor(int n1, int n2) {
    if(n1 < n2)
        return n1;
    else
        return n2;
}
int meio(int n1, int n2) {
    if(n1 > n2)
        return n2;
    else
        return n1;
}

int main()
{  
    int i, a, b, c, maior, meio, menor;
    
        printf("digite: ");
        scanf("%d", &a);
           
        printf("digite: ");
        scanf("%d", &b);
    
        printf("digite: ");
        scanf("%d", &c);
    
        int mai = maior(maior(a, b), c);
        int mei = meio(meio(a, b), c);
        int men = menor(menor(a, b), c);
    
    printf("%d, %d, %d", men, mei, mai);
    return 0
}
