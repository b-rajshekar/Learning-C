/*
C Multidimensional Arrays

Arrays are also known as single dimension arrays. but However, if you want to store data as a tabular form, like a table with rows and columns, you need to get familiar with multidimensional arrays.

A multidimensional array is basically an array of arrays.

Arrays can have any number of dimensions. 


Two-Dimensional Arrays also known as a matrix (a table of rows and columns).

To create a 2D array of integers, take a look at the following example:

int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} }

Access the Elements of a 2D Array:
To access an element of a 2D array, you must specify the index number of both the row and column.

Example Program: */

#include <stdio.h>
int main() {
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    printf("%d", matrix[0][2]);

    return 0;
} // outputs 2

