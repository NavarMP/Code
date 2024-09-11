//Solution of a quadratic equation

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//calculate the discriminant
double calcDiscrim (double a,double b, double c) {
    return b * b - 4 * a * c;
}

//find the roots of the quadratic equation
void findRoots (double a,double b, double c) {
    double discrim = calcDiscrim (a, b, c);

    if (discrim > 0) {
        double root1 = (-b + sqrt(discrim))/2 * a;
        double root2 = (-b - sqrt(discrim))/2 * a;
        printf ("root1 = %.2lf and root2 = %.2lf\n",root1, root2);
    } else if (discrim ==0) {
        double root = -b / (2 * a);
        printf ("root1 = root2 = %.2lf\n",root);
    } else {
        double realPart = -b / (2 *a);
        double imagPart = sqrt (-discrim) / (2 *a);
        printf ("root1 = %.2lf + %.2lfi and root2 = %.2f - %.2fi\n",realPart, imagPart, realPart, imagPart);
    }
}

int main () {
    printf ("Find Solution of a quadratic equation\n");
    double a, b, c;

    //Input validation
    printf ("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf",&a ,&b, &c) != 3) {
        fprintf (stderr, "Error reading input values.\n");
        return EXIT_FAILURE;
    }

    //Check for division by zero
    if (a==0) {
        fprintf (stderr, "Error: Division by zero.\n");
        return EXIT_FAILURE;
    }

    findRoots(a, b, c);
    return EXIT_FAILURE;
}
