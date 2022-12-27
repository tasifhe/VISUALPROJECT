#include<stdio.h>
#include<math.h>
#include<conio.h>


int main()
{
    int length1, length, width, cut, cut1, size, size1, totalCut;
    int glasses = 48;
    //at first the window glass measurement
    printf("First measures: \");
    scanf("%d %d", &length1, &width);
    
    size1  = length1*width;
    
    if (length1<width)
    {
        cut = width - length1;
        length = width - cut;
        
        printf("After cutting the extras it is: %d %d \n", length1, length);
        
        
        int size = length1 * length;
        printf("Squared area is: %d \n", size);
        
        if(size1 != size || size1 > size)
        {
            cut1 = size1-size;
            printf("Cut area per window is: %d \n", cut1);
        }
    }
    else
    {
      printf("\");
    }
    
    totalCut = cut1*glasses;
    printf("Total amount of cut area: %d", totalCut);
    
    return 0;
}