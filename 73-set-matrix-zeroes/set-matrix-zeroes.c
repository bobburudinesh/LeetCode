void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int col0 = 1;
    int i = 0, j = 0;
    i = 0;
    j = 0;
    if(matrix[0][0] == 0) {
        col0 = 0;
    }
    while(i<matrixSize) {
        j = 0;
        while(j < *matrixColSize) {
            if(matrix[i][j] == 0) {
                if(j == 0) {
                    col0 = 0;
                } else {
                    matrix[0][j] = 0;   // set column
                }
                matrix[i][0] = 0;   // set row
            }
            j++;
        }
        i++;
    }
    i = 1;
    j = 1;

    while(j < *matrixColSize) {
        if(matrix[0][j] == 0) {
            i = 1;
            while(i<matrixSize) {
                matrix[i][j] = 0;
                i++;
            }
        }
        j++;
    }


    i = 0;
    j = 1;
    while(i<matrixSize) {
        if(matrix[i][0] == 0) {
            j = 1;
            while(j < *matrixColSize) {
                matrix[i][j] = 0;
                j++;
            }
        }
        i++;
    }
    i = 0;
    if(col0 == 0) {
        while(i < matrixSize) {
            matrix[i][0] = 0;
            i++;
        }
    }

}