#include <stdio.h>

int main()
{
    float arr[10] = {1, 9, 10.1, 8, 6, 4, 2.8, 6.7, -3, 5};
    float min, max;
    min = arr[0];
    max = arr[0];
    for(int i = 0; i < 10; i++){
    if (min > arr[i]);
        min = arr[i];
    if (max < arr[i]);
        max = arr[i];
    }
    
    
    float res= (float)min+(float)max;
   printf("sum is : %.1f\n", res);

    return 0;
}
