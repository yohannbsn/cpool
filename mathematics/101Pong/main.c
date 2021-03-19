/*
** EPITECH PROJECT, 2020
** B-MAT-100-STG-1-1-101pong-yohann.boissenin
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calc_angle(float vector_x, float vector_y, float vector_z, float vector_len)
{
    float len_sum_angle = sqrt((vector_x * vector_x) + (vector_y * vector_y) + ((vector_z + 1) * (vector_z + 1)));
    float scalaire = (len_sum_angle * len_sum_angle - vector_len * vector_len - 1) / 2;
    float cos_angle = scalaire / vector_len;
    float a = 180 / 3.141592;
    float angle = (acos(cos_angle) * a) - 90;
    return (angle);
}

int main (int ac, char **av)
{
    float x0 = atof(av[1]);
    float y0 = atof(av[2]);
    float z0 = atof(av[3]);
    float x1 = atof(av[4]);
    float y1 = atof(av[5]);
    float z1 = atof(av[6]);
    float n = atof(av[7]);

    float vector_x = x1 - x0;
    float vector_y = y1 - y0;
    float vector_z = z1 - z0;
    float vector_len = sqrt((vector_x * vector_x) + (vector_y * vector_y) + (vector_z * vector_z));

    float coord_n_x = vector_x * n + x1;
    float coord_n_y = vector_y * n + y1;
    float coord_n_z = vector_z * n + z1;

    float disp_abs = fabs(z0) - fabs(z1);
    float b = z0 - z1;
    int disp = 0;
    float angle = 0;

    if (z0 > z1 && b == disp_abs) {
        disp = 1;
        angle = calc_angle(vector_x, vector_y, vector_z, vector_len);
    }
    if (z0 < z1 && b != disp_abs) {
        disp = 1;
        angle = calc_angle(vector_x, vector_y, vector_z, vector_len);
    }

    if (disp == 1)
        printf("%s\n(%.2f, %.2f, %.2f)\n%s%.0f%s\n(%.2f, %.2f, %.2f)\n%s\n%.2f %s\n", "The velocity vector of the ball is :", vector_x, vector_y, vector_z, "At time t + ", n, ", ball coordinates will be :", coord_n_x, coord_n_y, coord_n_z, "The incidence angle is:", angle, "degrees");
    else
        printf("%s\n(%.2f, %.2f, %.2f)\n%s%.0f%s\n(%.2f, %.2f, %.2f)\n%s\n", "The velocity vector of the ball is :", vector_x, vector_y, vector_z, "At time t + ", n, ", ball coordinates will be :", coord_n_x, coord_n_y, coord_n_z, "The ball won't reach the paddle.");
}