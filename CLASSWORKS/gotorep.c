#include<stdio.h>
#include<conio.h>

int main()
{
    float age;
    char ans;
    here:
    	printf("Enter age: ");
    	scanf("%f", &age);
    	if(age>=18){
    		printf("Adult\n");
    	}else{
    		printf("Child\n");
    	}
    	
    printf("Repeat? Y for yes, n for no: ");
    scanf("%c", &ans);
    scanf("%c", &ans);
    
    if(ans=='Y' || ans == 'y')
    	goto here;
    getch();
    return 0;
}