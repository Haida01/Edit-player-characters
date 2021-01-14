#include <stdio.h>
#include <stdlib.h>

typedef struct equip{
	
	char* up;
	char* down;
	char* left;
	char* right;
}Equip;



typedef struct player_character{
	
	char* name;
	char* class;
	char* gender;
	char* money;
	int level;
}pc;

//menu fuction prototypes
int main_menu();

//other
void home_screen();

int main(){
	
	//data file
	FILE *f;
	char *operation = "ab";
	char *name="file.dat";
	
	f = fopen(name, operation);
	
	if(!f){
		printf("errore nell'apertura del file");
		exit(1);
	}
	else{
		printf("File aperto in append\n\n");
		home_screen();
	}
	
	return 0;
}

void home_screen(){

	//word: CHARACTERS = 10 characters;
	
    //■ ■ ■  ■  ■  ■ ■ ■  ■ ■ ■  ■ ■ ■  ■ ■ ■  ■ ■ ■  ■ ■ ■  ■ ■ ■  ■ ■ ■  
	//■	  	 ■  ■  ■   ■  ■   ■  ■   ■  ■		 ■ 	  ■	     ■   ■  ■
	//■	     ■■■■  ■ ■ ■  ■ ■ ■  ■ ■ ■  ■		 ■	  ■ ■ ■  ■ ■ ■  ■ ■ ■
	//■      ■  ■  ■   ■  ■ ■    ■   ■  ■		 ■	  ■	     ■ ■		■
	//■ ■ ■  ■  ■  ■   ■  ■   ■  ■   ■  ■ ■ ■	 ■	  ■ ■ ■  ■   ■  ■ ■ ■
	 
	char c = 254; //■
	int i,j;
	
	//first line
		
		printf("\t\t\t\t%c %c %c  %c   %c  ",c,c,c,c,c); //C H
		for(i=0; i<8; i++) //all remaining letters
			printf("%c %c %c  ",c,c,c);
			      
	//second line

		printf("\n\t\t\t\t%c      %c   %c  ",c,c); //C H
		for(i=0; i<3; i++) //A R A
			printf("%c   %c  ",c,c);
		
		printf("%c        %c    ",c,c);//C T
		printf("%c      %c   %c  %c",c,c,c,c);//E R S
		
	//third line

		printf("\n\t\t\t\t%c      %c%c%c%c%c  ",c,c,c,c,c,c); //C H
		for(i=0; i<3; i++) //A R A
			printf("%c %c %c  ",c,c,c);
		
		printf("%c        %c    ",c,c);//C T
		printf("%c %c %c  %c %c %c  ",c,c,c,c,c,c);//E R
		printf("%c %c %c",c,c,c);//S
		
	//fourth line

		printf("\n\t\t\t\t%c      %c   %c  ",c,c); //C H
		printf("%c   %c  ",c,c);//A
		printf("%c %c    ",c,c);//R
		printf("%c   %c  ",c,c);//A
		
		printf("%c        %c    ",c,c);//C T
		printf("%c      %c %c        %c",c,c,c,c);//E R S
		
	//fifth line

		printf("\n\t\t\t\t%c %c %c  %c   %c  ",c,c,c,c,c); //C H
		for(i=0; i<3; i++) //A R A
			printf("%c   %c  ",c,c);
		printf("%c %c %c    %c    ",c,c,c,c);//C T
		printf("%c %c %c  %c   %c  %c ",c,c,c,c);//E R
		printf("%c %c",c,c);//S
		
	return;
}









