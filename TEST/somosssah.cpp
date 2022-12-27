#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int glasses = 48;
    int length;
    int width;
    int size;
    int totalArea;
    int cut;
    int length1;
    int size1;
    int totalArea1;
    int cut1;
    int totalCut;
    
    scanf("%d %d", &length, &width);
    
    size  = length*width;
    
    totalArea= size*glasses;
    
    printf("Initial total area: %d \n", totalArea);
    if (length<width)
    {
        cut = width - length;
        length1 = width - cut;
        
        size1 = length * length1;
        
        totalArea1 = size1*glasses;
        printf("Total area: %d\n", totalArea1);
        
        if(size != size1)
        {
            cut1 = size1-size;
        }
    }
    totalCut = cut1*glasses;
    printf("Cut area: %d", totalCut);
    
    return 0;
}