#include<stdio.h>
#include<conio.h>

int main()
{
  int n = 3;
int printingLimit;

  printf("Enter an integer: ");
  scanf("%d", &n);

  int reducer = 1;
  for(int i = 1; i<= ((n*2)-1); i++ ){
    if(i<=n){
        printingLimit = i;
    }else{
        printingLimit = n-reducer;
        reducer++;
    }

    for(int j = 1; j<=printingLimit; j++){
        printf("1 ");
    }
    printf("\n");
  }
  getch();
  return 0;
}