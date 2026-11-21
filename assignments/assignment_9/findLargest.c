#include <stdio.h>

int main()
{
    FILE *in = fopen("myData.txt", "r");
    FILE *out = fopen("foundLargest.txt", "w");
    int rows, cols, r, c, value, largest;

    if (in == NULL || out == NULL)
    {
        printf("Could not open a file.\n");
        return 1;
    }

    fscanf(in, "%d %d", &rows, &cols);

    for (r = 0; r < rows; r++)
    {
        fscanf(in, "%d", &largest);
        for (c = 1; c < cols; c++)
        {
            fscanf(in, "%d", &value);
            if (value > largest)
                largest = value;
        }
        fprintf(out, "%d\n", largest);
    }

    fclose(in);
    fclose(out);
    return 0;
}