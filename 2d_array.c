#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int row, col;

	scanf("%d %d", &row, &col);

	int** array;

	array = (int**)malloc(sizeof(int *) * row);
	for (int j = 0; j < col; j++) {
		array[j] = (int*)malloc(sizeof(int) * col);
	}








	////////////////(FREE)////////////////////


	for (int j = 0; j < col; j++) {
		free(array[j]);
	}

	free(array);





	return 0;
}
