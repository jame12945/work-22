#include <math.h>
#include <stdio.h>

int pytagorean()
{
    const int sum = 1000;
    int a;
    for (a = 1; a <= sum / 3; a++)
    {
        int b;
        for (b = a + 1; b <= sum / 2; b++)
        {
            int c = sum - a - b;
            if (a * a + b * b == c * c)
                printf("a=%d, b=%d, c=%d \n So a*b*c=%d", a, b, c,a*b*c);
          
        }
       
    }
   
    return 0;
}
int main() {
    pytagorean();
    
    return 0;
}