#include <stdio.h>
#include <math.h>

typedef struct
{
    double x;
    double y;
} POINT;

typedef struct
{
    POINT v[3];
} TRIANGLE;

void printTriangle(TRIANGLE t);
double getDistance(POINT a, POINT b);
double getPerimeter(TRIANGLE t);
int getIndexOfLargestTriangleInArray(TRIANGLE *arr, int n);
TRIANGLE getTriangleFromUser();

int main()
{
    TRIANGLE triangles[4];
    int i, idx;

    for (i = 0; i < 4; i++)
    {
        printf("Triangle %d:\n", i + 1);
        triangles[i] = getTriangleFromUser();
    }

    idx = getIndexOfLargestTriangleInArray(triangles, 4);
    printf("\nThe triangle with the largest perimeter is triangle %d:\n", idx + 1);
    printTriangle(triangles[idx]);
    printf("Its perimeter is %.4f\n", getPerimeter(triangles[idx]));
    return 0;
}

void printTriangle(TRIANGLE t)
{
    int i;
    for (i = 0; i < 3; i++)
        printf("  Vertex %d: (%.2f, %.2f)\n", i + 1, t.v[i].x, t.v[i].y);
}

double getDistance(POINT a, POINT b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double getPerimeter(TRIANGLE t)
{
    return getDistance(t.v[0], t.v[1]) + getDistance(t.v[1], t.v[2])
         + getDistance(t.v[2], t.v[0]);
}

int getIndexOfLargestTriangleInArray(TRIANGLE *arr, int n)
{
    int i, best = 0;
    for (i = 1; i < n; i++)
        if (getPerimeter(arr[i]) > getPerimeter(arr[best]))
            best = i;
    return best;
}

TRIANGLE getTriangleFromUser()
{
    TRIANGLE t;
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("  Enter x and y of vertex %d: ", i + 1);
        scanf("%lf %lf", &t.v[i].x, &t.v[i].y);
    }
    return t;
}