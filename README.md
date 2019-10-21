#a, b为address-taken变量; c, n，x, y, z为top-level变量.
#......
int n = -1;                               n0 = -1
int a = 10;                               a0 = 10
int b = 12;                               b0 = 12
int c = 6;                                c0 = 6
int* x = &a;                              x0 = ALLOCa
int* y = &b;                              y0 = ALLOCb
int z = *x + *y;                          ADD z0 *x0 *y0
c = a + b;                                ADD c1 a0 b0
if(z == c)                                if(z0 == c1)
    n = 1;                                    n1 = 1
else                                      else
    n = 0;                                    n2 = 0
                                          n3 = Φ(n1, n2)
