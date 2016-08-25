#include <stdio.h>
#include<time.h>
int main()
{
    srand(time(0));
    printf("%d\n", rand()%100);
    return 0;


}
