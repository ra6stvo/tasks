#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int n;
  int b = n;

  scanf("%d", &n);

  int *arr = (int *)malloc(n * 2 * sizeof(int));

  for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }
  for (int i = 0; i < n; i++)
    {
      arr[b] = arr[i];
      b++;
    }
  for (int i = 0; i < b; i++)
    {
      prinf("%d ", arr[i]);
    }
  printf("\n");

  free(arr);

  return 0;
}

