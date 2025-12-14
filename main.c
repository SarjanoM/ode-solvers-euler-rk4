#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main(){
    double k1, k2, k3, k4, y, initial, k, check1, check2 = 0, V = 0, h, v0, fv0, temp, count = 0.0;
    int i, n, M;

    printf("Enter the carrying capacity(M): ");
    scanf("%d", &M);
    printf("Enter the value of k: ");
    scanf("%lf", &k);
    printf("Enter the value of h: ");
    scanf("%lf", &h);
    printf("Enter the value you want to reach: ");
    scanf("%lf", &temp);
    printf("Enter the initial value of v0: ");
    scanf("%lf", &v0);

    initial = v0;
    n = temp / h;

    printf("\n");
    printf("Huen's Method\n");
    for (i=0; i<n; i++) {

        fv0 = (k * v0 * (1 -(v0 / M)));
        count += h;
        printf("%.1f\t:\t", count);
        V = v0 + h * fv0;
        printf("%.0lf\t\t", V);

        do {
            check2 = V;
            V = v0 + (h / 2) *(fv0 + (k * V * (1 - (V/M)))); 
            V = round(V);
            check1 = V; 
            printf("%.0lf\t\t", V);
            }while (check2!=check1);
            v0 = V;
            printf("\n");
        }
    printf("\n");
    printf("RK4 Method\n");
    count = 0;
    v0 = initial;
    for (i=0; i<n;i++) {
        k1 = h * (k * v0 * (1 - (v0/M)));
        k2 = h * (k * (v0 + ((k1) * 0.5))  * (1 - ((v0 + ((k1) * 0.5)) / M)));
        k3 = h * (k * (v0 + ((k2) * 0.5))  * (1 - ((v0 + ((k2) * 0.5)) / M)));
        k4 = h * (k * (v0 + (k3))  * (1 - ((v0 + (k3)) / M)));
        y = v0 + (1.0  / 6.0) * (k1 + (2 * k2) + (2 * k3) + k4);
        printf("k1 = %.0lf\t k2 = %.0lf\t k3 = %.0lf\t k4 = %.0lf\t", k1,k2,k3,k4);
        count += h;
        printf("%.1f = %.0lf\n",count, y);
        v0 = y;
    }
    printf("\n");
}
