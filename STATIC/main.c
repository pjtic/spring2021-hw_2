
#include "matrix_static.h"

int main() 
{
	  static T data[] = {1,2,3,4};
	    int rows,cols;
	    matrix  a,b,custom_Matrix;
	    a = create_initvals(2,3,data);
	    b = create_empty(2,3);
	    equate(&a,&b);
	    printf("\n Matrix a:");
	    matrix_print(a);
	    printf("\n Matrix b:");
	    matrix_print(b);
	    printf("\n a+b");
	    matrix_print(add(a,b));

	    printf("\n Transposed Matrix a");
	    matrix_print_integer(transpose(a));

            printf("\n Transposed Matrix b");
	    matrix_print_integer(transpose(b));
	    
	    printf("Please enter desired number of rows\n");
	    scanf("%d", &custom_Matrix.row_dim);

	    printf("Please enter desired number of colums\n");
	    scanf("%d", &custom_Matrix.col_dim);
	    
	   custom_Matrix = create_custom_Matrix(custom_Matrix.row_dim, custom_Matrix.col_dim);
	  
	   printf("\n Custom user matrix \n");
	   matrix_print_integer(custom_Matrix);

	   printf(" \n Transposed Custom Matrix");
	   matrix_print_integer(transpose(custom_Matrix));

}
