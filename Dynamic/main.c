#include "matrix_dynamic.h"

int main() 
{
	   static T data[] = {1,2,3,4};
	   matrix  a,b,custom_Matrix;
	   a = create_initvals(2,2,data);
	   b = create_empty(2,2);
	   equate(&a,&b);
   	   printf("\n Matrix a:");
	   matrix_print(a);
	   printf("\n Matrix b:");
	   matrix_print(b);
	   printf("\n a+b:");
	   matrix_print(add(a,b));
	
	   printf("\n Transposed matrix a");
	   matrix_print_integer(transpose(a));

	   printf("\n transposed matrix b");
	   matrix_print_integer(transpose(b));

	   printf("\n Enter amount of rows \n");
	   scanf("%d", &custom_Matrix.row_dim);

	   printf("\n Enter amount of columns \n");
	   scanf("%d", &custom_Matrix.col_dim);

	   custom_Matrix = create_custom_Matrix(custom_Matrix.row_dim, custom_Matrix.col_dim);

	   printf(" Custom Matrix \n");
	   matrix_print_integer(custom_Matrix);

	   printf("Transposed Custom Matrix");
	   matrix_print_integer(transpose(custom_Matrix));


}
