/*
 Program to find Least Root Mean Squared Error for ordered pairs.
*/
#include <stdio.h>

int main() {
    int numOfPairs;
    float x, y;
    
    printf("Enter number of ordered pairs: ");
    scanf("%d", &numOfPairs);
    
    float xArray[numOfPairs][2];
    float yArray[numOfPairs];
    float xStarArray[2][numOfPairs];
    float xStarxArray[2][2] = {0};
    float xStarxInverseArray[2][2] = {0};
    float xStaryArray[2][1] = {0};
    float adjxStarxArray[2][2] = {0};
    float successArray[2] = {0};
    float xSuccessArray[numOfPairs];
    float errorArray[numOfPairs];
    
    for (int i = 0; i < numOfPairs; i++) {
        printf("Enter 'x' value: ");
        scanf("%f", &xArray[i][0]);
        printf("Enter 'y' value: ");
        scanf("%f", &yArray[i]);
        
        xArray[i][1] = 1;
        xStarArray[0][i] = xArray[i][0];
        xStarArray[1][i] = 1;
    }
    
    float sum;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum = 0;
            for (int k = 0; k < numOfPairs; k++) {
                sum += xStarArray[i][k] * xArray[k][j];
            }
            xStarxArray[i][j] = sum;
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            sum = 0;
            for (int k = 0; k < numOfPairs; k++) {
                sum += xStarArray[i][k] * yArray[k];
            }
            xStaryArray[i][j] = sum;
        }
    }
    
    float detOfxStarx = (xStarxArray[0][0] * xStarxArray[1][1]) - (xStarxArray[0][1] * xStarxArray[1][0]);
    
    adjxStarxArray[0][0] = xStarxArray[1][1];
    adjxStarxArray[0][1] = - xStarxArray[0][1];
    adjxStarxArray[1][0] = - xStarxArray[1][0];
    adjxStarxArray[1][1] = xStarxArray[0][0];
    
    xStarxInverseArray[0][0] = adjxStarxArray[0][0] / detOfxStarx;
    xStarxInverseArray[0][1] = adjxStarxArray[0][1] / detOfxStarx;
    xStarxInverseArray[1][0] = adjxStarxArray[1][0] / detOfxStarx;
    xStarxInverseArray[1][1] = adjxStarxArray[1][1] / detOfxStarx;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            sum = 0;
            for (int k = 0; k < 2; k++) {
                sum += xStarxInverseArray[i][k] * xStaryArray[k][j];
            }
            successArray[i] = sum;
        }
        printf("\n");
    }
    
    for (int i = 0; i < numOfPairs; i++) {
        for (int j = 0; j < 1; j++) {
            sum = 0;
            for (int k = 0; k < 2; k++) {
                sum += xArray[i][k] * successArray[k];
            }
            xSuccessArray[i] = sum;
        }
    }
    
    for (int i = 0; i < numOfPairs; i++) {
        errorArray[i] = yArray[i] - xSuccessArray[i];
    }
    
    float error = 0;
    
    for (int i = 0; i < numOfPairs; i++) {
        error += errorArray[i] * errorArray[i];
    }
    
    printf("xArray: \n");
    
    for (int i = 0; i < numOfPairs; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%f\t", xArray[i][j]);
        }
        printf("\n");
    }
    
    printf("yArray: \n");
    
    for (int i = 0; i < numOfPairs; i++) {
        printf("%f\n", yArray[i]);
        printf("\n");
    }
    
    printf("xStarArray: \n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < numOfPairs; j++) {
            printf("%f\t", xStarArray[i][j]);
        }
        printf("\n");
    }
    
    printf("xStarxArray: \n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%f\t", xStarxArray[i][j]);
        }
        printf("\n");
    }
    
    printf("xStarxInverseArray: \n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%f\t", xStarxInverseArray[i][j]);
        }
        printf("\n");
    }
    
    printf("xStaryArray: \n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            printf("%f\t", xStaryArray[i][j]);
        }
        printf("\n");
    }
    printf("detOfxStarx: %f\n", detOfxStarx);
    printf("adjxStarxArray: \n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%f\t", adjxStarxArray[i][j]);
        }
        printf("\n");
    }
    
    printf("Success Array: \n");
    printf("%f -> Slope (c) \n", successArray[0]);
    printf("%f -> Constant (d) \n", successArray[1]);
    
    printf("xSuccessArray: \n");
    
    for (int i = 0; i < numOfPairs; i++) {
        printf("%f\n", xSuccessArray[i]);
    }
    
    printf("errorArray: \n");
    
    for (int i = 0; i < numOfPairs; i++) {
        printf("%f\n", errorArray[i]);
    }
    
    printf("Error: %f", error);
    
    
    return 0;
}
 
