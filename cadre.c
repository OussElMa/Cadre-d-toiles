#include <stdio.h>

int main()
{
    int i, y, col, lignes;
    /*printf("Veuillez entrer le nombre de colonnes:\n");
    scanf("%d", &col);
    printf("Veuillez entrer le nombre de lignes:\n");
    scanf("%d", &lignes);*/
    col=10;
    lignes=10;
    i=1;
    y=1;
    while(y<=lignes)
    {
        while(i<=col)
        {
          if(i == 1 || i == col)
            printf("* ");
          else if(y == 1 || y == lignes)
            printf("* ");
          else
            printf("  ");
          i++;
        }
        printf("\n");
        y++;
        i=1;
    }
    
    return 0;
}