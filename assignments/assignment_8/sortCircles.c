#include <stdio.h>
#define SORT_BY_RADIUS 1
#define SORT_BY_CENTER 2

// structure representing a point on a plane
typedef struct
{
	double x;
	double y;
}COORDINATE;

// structure representing a circle on a plane
typedef struct
{
	COORDINATE center; 
	double radius;
}CIRCLE;

void swapCircles(CIRCLE *pCircleA, CIRCLE *pCircleB);
int shouldCirleAPrecedeCircleB(CIRCLE A, CIRCLE B, int sortingMethod);
void sortCircles(CIRCLE *pCircles, int numCircles, int sortingMethod);
void printCircles(CIRCLE *pCircles, int numCircles);
void getCirclesFromUser(CIRCLE *pCircles, int numCircles);

int main()
{
	CIRCLE A[4];
	int sortingMethod;
	getCirclesFromUser(A, 4);
        printCircles(A, 4);
	printf("Do you want sort the circles by radius or by center?\n");
	printf("\t %d for by radius\n", SORT_BY_RADIUS);
        printf("\t %d for by center\n", SORT_BY_CENTER);
	scanf("%d", &sortingMethod);
	sortCircles(A, 4, sortingMethod);
	printCircles(A, 4);
	return 0;
}


void swapCircles(CIRCLE *pCircleA, CIRCLE *pCircleB)
{
	// TO DO
}

/*******

The function below specifies the rule of sorting via the input parameter "sortingMethod", 
which  takes value SORT_BY_RADIUS or SORT_BY_CENTER  

*******/
int shouldCirleAPrecedeCircleB(CIRCLE A, CIRCLE B, int sortingMethod)
{
	// TO DO
	return 0;
}


void sortCircles(CIRCLE *pCircles, int numCircles, int sortingMethod)
{
	//TO DO
}

void printCircles(CIRCLE *pCircles, int numCircles)
{
	// TO DO
}

void getCirclesFromUser(CIRCLE *pCircles, int numCircles)
{
	// TO DO
}
