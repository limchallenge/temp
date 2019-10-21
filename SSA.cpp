int n = -1;
int a = 10;
int b = 12;
int c = 6;
int* x = &a;
int* y = &b;
int z = *x + *y;
c = a + b;
if(z == c)
    n = 1;
else
    n = 0;
