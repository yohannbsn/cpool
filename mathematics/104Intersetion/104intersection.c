/*
** EPITECH PROJECT, 2020
** 104itersection
** File description:
** 104intersection
*/

#include "math.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void my_help()
{
    printf("USAGE\n");
    printf("    ./104intersection opt xp yp zp xv yv zv p\n\n");
    printf("DESCRISPTION\n");
    printf("    opt             surface option: 1 for a sphère, 2 for a cylinder, 3 for a cone\n");
    printf("    (xp, yp ,zp)    coordinates of a point by which the light ray passes through\n");
    printf("    (xv, yv, zv)    coordinates of a vector parallel to the light ray\n");
    printf("    p               parameter: radius of the sphère radius of the sphère, radius of the cylinder, or\n");
    printf("                    angle formed by the cone and the Z-axis\n");

}
void root(double a, double b, int delta, char **av)
{
    double	x1;
    double	x2;
    double 	xp1;
    double 	yp1;
    double 	zp1;
    double 	xp2;
    double 	yp2;
    double 	zp2;

    if (delta < 0)
        printf("No intersection point.\n");
    else if (delta == 0)
        {
        printf("1 intersection points:\n");
        printf("Point d'intersection : (%.3f, %.3f, %.3f)\n", (-b / 2 * a), (-b /	2 * a), atof(av[4]));
        }
    else if (delta > 0)
        {
        printf("2 intersection points:\n");
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        xp1 = atof (av [ 2 ]) + x1 * atof (av [ 5 ]);
        yp1 = atof (av [ 3 ]) + x1 * atof (av [ 6 ]);
        zp1 = atof (av [ 4 ]) + x1 * atof (av [ 7 ]);
        xp2 = atof (av [ 2 ]) + x2 * atof (av [ 5 ]);
        yp2 = atof (av [ 3 ]) + x2 * atof (av [ 6 ]);
        zp2 = atof (av [ 4 ]) + x2 * atof (av [ 7 ]);
        printf ( " Point 1: ( % .3f , % .3f , % .3f ) \ n " , xp1, yp1, zp1);
        printf ( " Point 2: ( % .3f , % .3f , % .3f ) \ n " , xp2, yp2, zp2);
    }
}

int sphere(char **av)
{
    double 	a;
    double 	b;
    double 	c;
    int 	delta;

    a = pow(atof(av[5]),2) + pow(atof(av[6]),2) + pow(atof(av[7]),2);
    b = (2*atof(av[2]) * atof(av[5])) + (2*atof(av[3])*atof(av[6])) + (2*atof(av[4])*atof(av[7]));
    c = (pow(atof(av[2]),2) + pow(atof(av[3]),2) + pow(atof(av[4]),2)) - pow(atof(av[8]),2);
    delta= pow(b,2) - 4*a*c;
    affiche(a, b, delta, av);
}

int main (int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            my_help();
            return(0);
        }
        else
            return (84);
    }
    if (ac == 9) {
        if (strcmp(av[1], "1") == 0) {
            printf("Sphere of radius %i\nLine passing through the point (%i, %i, %i) and parallel to the vector (%i, %i, %i)\n", atoi(av[8]), atoi(av[2]), atoi(av[3]), atoi(av[4]), atoi(av[5]), atoi(av[6]), atoi(av[7]));
            //sphere(av);
        }
        else if (strcmp(av[1], "2") == 0)
            printf("Cylinder of radius %d\nLine passing through the point (%d, %d, %d) and parallel to the vector (%d, %d, %d)\n", atoi(av[8]), atoi(av[2]), atoi(av[3]), atoi(av[4]), atoi(av[5]), atoi(av[6]), atoi(av[7]));
        else if (strcmp(av[1], "3") == 0)
            printf("Cone with a %d degree angle\nLine passing through the point (%d, %d, %d) and parallel to the vector (%d, %d, %d)\n", atoi(av[8]), atoi(av[2]), atoi(av[3]), atoi(av[4]), atoi(av[5]), atoi(av[6]), atoi(av[7]));
        return (0);
    }
    if (ac != 8 && ac != 2)
        return (84);
}

