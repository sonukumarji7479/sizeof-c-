#include <stdio.h>
// sizeof() Data types
int m1()
{
    int a, b, c, d;
    a = sizeof(int);
    printf("sizeof of int is : %d\n", a);
    b = sizeof(char);
    printf("sizeof of char is :%d\n", b);
    c = sizeof(float);
    printf("size of float is :%d\n", c);
    d = sizeof(double);
    printf("size of double is :%d\n", d);
    return 0;
}

// sizeof() variables
int m2()
{
    int x, y;
    float m;
    char ch;
    double d1;

    printf("size of x is  : %lu\n", sizeof(x));
    printf("size of m is : %lu\n", sizeof(m));
    printf(" size of ch is :%lu\n", sizeof(ch));
    printf(" size of d1 is %lu\n", sizeof(d1));
    return 0;
}
// size of data types
int m3()
{
    // To find the amount of memory allocated to char
    printf("size of char is :%lu\n", sizeof(char));
    // to find the amount of memory allocate to int
    printf("size of int is :%lu\n", sizeof(int));
    // to find the amount of memory allocate to float
    printf("size of float is :%lu\n", sizeof(float));
    // to find the amount of memory allocate to float
    printf("size of double is :%lu\n", sizeof(double));
    // to find the amount of memory allocate to long int
    printf("size of long int is:%lu\n", sizeof(long int));
    return 0;
}
// sizeof() constent
int m4()
{
    int x = 35, y = 4.7, z = 63;

    int c = 'f';

    printf(" size of 35  is :%lu\n", sizeof(35));
    printf(" size of 4.7 is :%lu\n", sizeof(4.7));
    printf(" size of  63 is :%lu\n", sizeof(63));
    printf(" size of c is   :%lu\n", sizeof(c));

    return 0;
}
// size of veriables
int main()
{
    int m = 35;
    char c = 'f';
    float h = 23.4;
    double d = 2.36;
    long int f = 50;
    long long int l = 361;
    printf("size of m is:%lu\n", sizeof(m));
    printf("size of c is:%lu\n", sizeof(c));
    printf("size of h is:%lu\n", sizeof(h));
    printf("size of d is:%lu\n", sizeof(d));
    printf("size of f is:%lu\n", sizeof(f));
    printf("size of l is:%lu\n", sizeof(l));
    return 0;
}
