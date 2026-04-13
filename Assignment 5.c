#include<stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int R, C1, i, j, k;
    int choice;
    printf("Enter number of rows: ");
    scanf("%d", &R);
    printf("Enter number of columns: ");
    scanf("%d", &C1);
    printf("Enter Matrix A:\n");
    for(i=0; i<R; i++)
        for(j=0; j<C1; j++)
        {
            printf("Enter value of number in [%d][%d]\t", i, j);
            scanf("%d", &A[i][j]);
        }
    printf("\nSelect Operation:\n");
    printf("1. Addition\n2. Saddle Point\n3. Inverse\n4. Magic Square\n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("Enter Matrix B:\n");
        for(i=0; i<R; i++)
            for(j=0; j<C1; j++)
            {
                printf("Enter value of number in [%d][%d]\t", i, j);
                scanf("%d", &B[i][j]);
            }

        for(i=0; i<R; i++)
            for(j=0; j<C1; j++)
                C[i][j] = A[i][j] + B[i][j];

        printf("Matrix after addition:\n");
        for(i=0; i<R; i++)
        {
            for(j=0; j<C1; j++)
                printf("%d\t", C[i][j]);
            printf("\n");
        }
    }
    else if(choice == 2)
    {
        int rowMin, colMax, found = 0;
        for(i=0; i<R; i++)
        {
            rowMin = A[i][0];
            k = 0;
            for(j=1; j<C1; j++)
                if(A[i][j] < rowMin)
                {
                    rowMin = A[i][j];
                    k = j;
                }
            colMax = A[0][k];
            for(j=1; j<R; j++)
                if(A[j][k] > colMax)
                    colMax = A[j][k];
            if(rowMin == colMax)
            {
                printf("Saddle point found: %d at [%d][%d]\n", rowMin, i, k);
                found = 1;
            }
        }
        if(!found)
            printf("No saddle point found.\n");
    }
    else if(choice == 3)
    {
        if(R != 2 || C1 != 2)
        {
            printf("Inverse only supported for 2x2 matrix here.\n");
        }
        else
        {
            int det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
            if(det == 0)
                printf("Inverse does not exist (determinant is 0).\n");
            else
            {
                printf("Inverse of matrix:\n");
                printf("%.2f\t%.2f\n",  (float) A[1][1]/det, (float)-A[0][1]/det);
                printf("%.2f\t%.2f\n",  (float)-A[1][0]/det, (float) A[0][0]/det);
            }
        }
    }
    else if(choice == 4)
    {
        int sum, rowSum, colSum, d1=0, d2=0, magic=1;
        sum = 0;
        for(j=0; j<C1; j++)
            sum += A[0][j];
        for(i=0; i<R; i++)
            d1 += A[i][i];
        for(i=0; i<R; i++)
            d2 += A[i][R-1-i];
        if(d1 != sum || d2 != sum)
            magic = 0;
        for(i=0; i<R && magic; i++)
        {
            rowSum = 0;
            colSum = 0;
            for(j=0; j<C1; j++)
            {
                rowSum += A[i][j];
                colSum += A[j][i];
            }
            if(rowSum != sum || colSum != sum)
                magic = 0;
        }
        if(magic)
            printf("The matrix IS a magic square. (Magic sum = %d)\n", sum);
        else
            printf("The matrix is NOT a magic square.\n");
    }
    else
        printf("Invalid choice.\n");
    return 0;
}