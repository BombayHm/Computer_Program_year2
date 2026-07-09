#include <stdio.h>
#include <stdlib.h>
int namecard()
{
    printf("\t\t-------------------------------------\n"); // \t = tab
    printf("\t\t-        Sarannakorn Homon          -\n"); // \n new line
    printf("\t\t-              (SHM)                -\n");
    printf("\t\t-              TEE2E                -\n");
    printf("\t\t-          TEL:                     -\n");
    printf("\t\t-------------------------------------\n"); // use Monospace font only for terminal
    return (0);
}
int triangle()
{
    float a, b, h;
    b = 10;
    h = 4;
    a = 0.5 * b * h;
    printf("\t\t--------------------------------\n");
    printf("\t\t-       Area of Triangle       -\n");
    printf("\t\t--------------------------------\n");
    printf("\t\t-    A = 0.5 * Base * Height   -\n");
    printf("\t\t--------------------------------\n");
    printf("\t\t-     Base (m)   = %.2f       -\n", b); /*For define number of float point use %.(number)f*/
    printf("\t\t-     Height (m) = %.2f        -\n", h);
    printf("\t\t-     Area (m*m) = %.2f       -\n", a);
    printf("\t\t--------------------------------\n");
    return (0);
}
int velocity()
{
    float v, d, t;
    printf("\t\t---------------------------------------------\n");
    printf("\t\t-          Velocity Calculation             -\n");
    printf("\t\t---------------------------------------------\n");
    printf("\t\t-        Velocity = Distance/Time           -\n");
    printf("\t\t---------------------------------------------\n");
    printf("\t\t              Distance(m) = ");
    scanf("%f", &d); /*Dont forgot & before variable*/
    printf("\n\t\t                Time(sec) = ");
    scanf("%f", &t); /*Do not have space before and after of %f*/
    v = d / t;
    printf("\n\t\t-          Velocity (m/s) = %.2f            -\n", v);
    printf("\t\t---------------------------------------------");
    return 0;
}
int work1()
{
    float r1 = 10, r2 = 20, r3 = 30, rt = r1 + r2 + r3;
    printf("\t\t--------------------------------\n");
    printf("\t\t-          RT-Series           -\n");
    printf("\t\t--------------------------------\n");
    printf("\t\t-      RT = R1 + R2 + R3       -\n");
    printf("\t\t--------------------------------\n");
    printf("\t\t-        R1 (Ohm) = %.2f      -\n", r1);
    printf("\t\t-        R2 (Ohm) = %.2f      -\n", r2);
    printf("\t\t-        R3 (Ohm) = %.2f      -\n", r3);
    printf("\t\t-        RT (Ohm) = %.2f      -\n", rt);
    printf("\t\t--------------------------------\n");
    return 0;
}
int work2()
{
    float a, r;
    printf("\t\t-------------------------------------------\n");
    printf("\t\t-             Area of circle              -\n");
    printf("\t\t-------------------------------------------\n");
    printf("\t\t-             Area = pi * r^2             -\n");
    printf("\t\t-------------------------------------------\n");
    printf("\t\t             Radius (m) = ");
    scanf("%f", &r);
    a = 3.14 * (r * r);
    printf("\n\t\t-          Area (m^2) = %.2f             -", a);
    printf("\n\t\t-------------------------------------------");
    return 0;
}
int main(void)
{
    int name;
    printf("\t\t\t1 = Namecard\n\t\t\t2 = triangle\n\t\t\t3 = velocity\n\t\t\t4 = w01Rt\n\t\t\t5 = w02circle\n\t\t\tenter the work = ");
    scanf("%d", &name);
    switch (name)
    {
    case 1:
        system("cls");
        namecard();
        break;
    case 2:
        system("cls");
        triangle();
        break;
    case 3:
        system("cls");
        velocity();
        break;
    case 4:
        system("cls");
        work1();
        break;
    case 5:
        system("cls");
        work2();
        break;
    default:
        break;
    }
}
