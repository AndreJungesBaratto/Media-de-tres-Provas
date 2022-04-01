#include <stdio.h>
#include <math.h>
int main(){
float P1, P2, P3;
printf("Informe a nota das tres provas:\n");
scanf("%f, %f, %f", &P1, &P2, &P3);
int M;
M=(P1+P2+P3)/3;
if(M<5){
printf("Nao aprovado\n");
}
else{printf("Parabens, voce foi aprovado!\n");
}
return 0;
}
