#include <stdio.h>
int main(){
    char *produtos[5] = {"Arroz","Feijao","Macarrao","Leite","Cafe"};
    float precos[5] = {25.5,6.2,3.9,4.5,18.9};
    int n=5,i,j; float temp; char *tempNome;
    printf("Originais:\n");
    for(i=0;i<n;i++) printf("%s - R$%.2f\n",produtos[i],precos[i]);
    for(i=0;i<n-1;i++){ for(j=0;j<n-1-i;j++){ if(precos[j]>precos[j+1]){
        temp=precos[j]; precos[j]=precos[j+1]; precos[j+1]=temp;
        tempNome=produtos[j]; produtos[j]=produtos[j+1]; produtos[j+1]=tempNome; } } }
    printf("\nCrescente:\n");
    for(i=0;i<n;i++) printf("%s - R$%.2f\n",produtos[i],precos[i]);
    return 0;
}
