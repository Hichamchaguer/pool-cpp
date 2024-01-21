#include <stdio.h>

int main()
{
    float a = 42.454f;

    void* b = &a;

    void* c = (void *) &a;
    void* d = &a;

    int* e = (int*) &a;

    int* f = (int *) d;


    printf("%p, %.2f\n",&a, a);
    printf("%p, \n",b);
    printf("%p, \n",c);
    printf("%p, \n",d);

    printf("%p, %d\n",e, *e);
    printf("%p, %d\n",f, *f);
    

}