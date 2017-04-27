#include <stdio.h>
#include <stdlib.h>

int main(){
	float media=1, vetnota[4], soma=0;
	int n;
	for(n=0; n<4;n++){
		printf("Informe a %d nota\n", n+1);
		scanf("%f",&vetnota[n]);
		soma+=vetnota[n];
	}
	media=soma/4.0;
	if(media<5.0)
		printf("Parece que alguem precisa estudar mais!!!\n");
	else
		printf("ORA ORA ATE QUE EM FIM!!! PAAASSSOOOUU!!!!!\n");
	printf("Sua media foi %.2f \n", media);
	return 0;
}