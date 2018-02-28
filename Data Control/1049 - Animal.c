#include <stdio.h>
#include <stdlib.h>

int main()
 {
    char nome1[200], nome2[200], nome3[200];

	scanf("%s",&nome1);
	scanf("%s",&nome2);
	scanf("%s",&nome3);

	if((strcmp(nome1,"vertebrado")==0) && (strcmp(nome2,"ave")==0) && (strcmp(nome3,"carnivoro")==0))
	
		printf("aguia\n");
		
	if((strcmp(nome1,"vertebrado")==0) && (strcmp(nome2,"ave")==0) && (strcmp(nome3,"onivoro")==0))
	
		printf("pomba\n");
		
	if((strcmp(nome1,"vertebrado")==0) && (strcmp(nome2,"mamifero")==0) && (strcmp(nome3,"onivoro")==0))
	
		printf("homem\n");
		
	if((strcmp(nome1,"vertebrado")==0) && (strcmp(nome2,"mamifero")==0) && (strcmp(nome3,"herbivoro")==0))
	
		printf("vaca\n");
		
	if((strcmp(nome1,"invertebrado")==0) && (strcmp(nome2,"inseto")==0) && (strcmp(nome3,"hematofago")==0))
	
		printf("pulga\n");
		
	if((strcmp(nome1,"invertebrado")==0) && (strcmp(nome2,"inseto")==0) && (strcmp(nome3,"herbivoro")==0))
	
		printf("lagarta\n");
		
	if((strcmp(nome1,"invertebrado")==0) && (strcmp(nome2,"anelideo")==0) && (strcmp(nome3,"hematofago")==0))
	
		printf("sanguessuga\n");
		
	if((strcmp(nome1,"invertebrado")==0) && (strcmp(nome2,"anelideo")==0) && (strcmp(nome3,"onivoro")==0))
	
		printf("minhoca\n");

	system("PAUSE");
    return 0;
}
