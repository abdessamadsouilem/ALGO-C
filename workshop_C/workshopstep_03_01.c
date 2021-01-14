
#include<stdio.h>

main(int argc, char const **argv){

    
    printf("\nVous avez entrer %d arguments dans le terminal\n\n",argc-1);

    
    printf("Les arguments sont :\n");
    int i;
    for(i = 0; i < argc; i++){
        if (i == 0){
            printf(" %s\n",argv[i]);
        }
    }
    
	system("pause");
}
