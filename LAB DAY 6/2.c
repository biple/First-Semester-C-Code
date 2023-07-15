/*program to print integers entered using dynamic memoery allocations*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n,i;
  int *data;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);

  data = (int *)calloc(n, sizeof(int));
  if (data == NULL) {
  printf("Error!!! memory not allocated.");
  exit(0);
  }

  for (i = 0; i < n; ++i) 
  {
  	printf("Enter number%d: ", i + 1);
  	scanf("%d", data + i);
  }

  for (i = 0; i < n; ++i) {
    printf("%d\n", *(data + i));
  }

  free(data);

  return 0;
}
