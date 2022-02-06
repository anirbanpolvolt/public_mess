#include <stdio.h>

int main () {
    printf ("\n");
    printf ("Name: Tanmoy Das\n");
    printf ("Roll No: DC2021BTE0008\n");
    printf ("\n");

    int Matrix1[3][3];
    int Matrix2[3][3];
    int i, j, count=0;

    //Creating the first matrix//
    for (j=0; j<3; j++){
        for (i=0; i<3; i++){
            Matrix1[i][j] = count;
        }
        if (j==1){
            count=8;
        }
    }
    
    printf ("The first matrix is:\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (j!=2){
                printf ("%d\t", Matrix1[i][j]);
            }
            else{
                printf ("%d\n", Matrix1[i][j]);
            }
        }
    }

    printf ("\n");

    //Creating the second matrix//
    count = 0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            Matrix2[i][j] = count;
        }
        if (i==1){
            count=8;
        }
    }
    
    printf ("The second matrix is:\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (j!=2){
                printf ("%d\t", Matrix2[i][j]);
            }
            else{
                printf ("%d\n", Matrix2[i][j]);
            }
        }
    }

    printf ("\n");

    //Separating out the diagonal elements into one-dimensional arrays//
    int arr1[3], arr2[3], k=0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (i==j) {
                arr1[k] = Matrix1[i][j];
                k++;
            }
        }
    }

    k=0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if ((i+j)==2) {
                arr2[k] = Matrix2[i][j];
                k++;
            }
        }
    }

    //Finding out the values of P, Q and R//
    int P = 0, Q = 1;
    
    for (k=0; k<3; k++){
        P = P + ((arr1[k])*(arr2[k]));
    }
    printf ("The value of P = (0*0)+(0*0)+(8*8) = %d\n", P);

    for (k=0; k<3; k++){
        Q = Q * ((arr1[k])+(arr2[k]));
    }
    printf ("The value of Q = (0+0)*(0+0)*(8+8) = %d\n", Q);

    int R = P + Q;
    printf ("Therefore the value of R = P + Q = %d\n", R);
    printf ("\n");
}