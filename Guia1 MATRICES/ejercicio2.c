#include <stdio.h>

void matriZ(int matris [6][6]){
	
	int i;
	int j;
	
	for (i=0; i<6; i++){
		for (j=0;j<6;j++){
		
			if (i==j){
				
				matris[i][j]= 1;
			}
			else{
				matris[i][j]= 0; 
			}
			printf (" [%d] ", matris[i][j]);
		}
		printf ("\n");
	}
		
}

int main(){
	
	int matris[6][6];
	
	matriZ(matris);
	
	return 0;
}
