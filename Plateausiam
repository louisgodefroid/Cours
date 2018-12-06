#include<stdio.h>
#include<stdlib.h>
#define NULL 0

typedef struct DeuxChar
{
	char first;
	char second;
}DeuxChar_t;

DeuxChar_t **creaplateau (int longueur , int largeur)
{

	DeuxChar_t **plateau = NULL;
	plateau = (DeuxChar_t**) malloc((largeur+1) * sizeof(DeuxChar_t*));
	plateau [largeur] = NULL;
	for(int x = 0;x<largeur;x++)
	{
		plateau[x] = (DeuxChar_t *) malloc((longueur+1)* sizeof(DeuxChar_t));
		plateau[x][longueur].first = 'f';
		plateau[x][longueur].second= 'f';
	}
	return plateau;

}

void remplissagetableau (DeuxChar_t **plateau , int largeur , int longueur)
{
	for(int x = 0;x<largeur;x++)
	{
		for(int y = 0;y<longueur;y++)
		{
			plateau [x][y].first = 'o';
			plateau [x][y].second = 'o';
		}
	}
	plateau [2][1].first = 'M';
	plateau [2][1].second = 'M';
	plateau [2][2].first = 'M';
	plateau [2][2].second = 'M';
	plateau [2][3].first = 'M';
	plateau [2][3].second = 'M';

}

void affichageplateau (DeuxChar_t **plateau, int longueur, int largeur)
{
	printf(" ");
	for(int x=0;x<largeur+1;x++)
	{
		printf("- ");
	}
	printf("\n");

	for(int y= 0;y<longueur;y++)
	{
		printf("| ");
		for(int x =0;x<largeur;x++)
		{
			printf("2%c",plateau[x][y].first, plateau[x][y].second);

		}

		printf("|\n");
	}

	printf(" ");
	for(int x=0;x<largeur+1;x++)
		{
			printf("- ");
		}

printf("\n");


}



int main (void)
{
	int longueur = 5 , largeur = 5;
	DeuxChar_t **plateau = NULL;
	plateau = creaplateau(longueur,largeur);
	remplissagetableau(plateau,longueur,largeur);
	affichageplateau(plateau,longueur,largeur);
	while (1)
			{
				int x =0, y=0;
				printf("\nabs: ");
				scanf("%d",&x);
				printf("\nord: ");
				scanf("%d",&y);
				plateau [x][y].first ='xb';
				plateau [x][y].second ='xb';
				affichageplateau(plateau,longueur,largeur);
			}


	return 0;
}

