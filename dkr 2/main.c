#include <stdio.h>
#include <stdlib.h>

void print(int N, int *array);
int most_frequent(int N, int *array);
int frequency(int N, int element, int *array);


int main() {

    int N, temp, i, x;

    do{
    printf("Enter the size of the array: ");
    scanf("%d", &N);

        if(N < 1)
            printf("\nSize must be > 1\n");

    }while (N < 1);

    int array[N];

  system("cls");

  for (i = 0; i < N; i++) {
    do {

        if(x < -3 || x > 3)
            printf("\nX must be [-3; 3]\n");

        printf("Type element[%d]: ", i);
        scanf("%d", &x);
    } while (x < -3 || x > 3);
  array[i] = x;
}
  system("cls");

  temp = most_frequent(N, &array);

  print(N, &array);

  printf("\nThe most frequent element is '%d' and it appears '%d' times.\n", temp, frequency(N, temp, &array));
  getch();
  return 0;
}


void print(int N, int *array) {

  int i;
  printf("Your array is:\n");
  for (i = 0; i < N; i++)
  {
    printf("%d ", array[i]);
  }
}


int most_frequent(int N, int *array) {

  int i, max_count = 0, max_element = array[0];
  for (i = 0; i < N; i++)
  {
    int count = frequency(N, array[i], &array);
    if (count > max_count)
    {
      max_count = count;
      max_element= array[i];
}
}
return max_element;
}

int frequency(int N, int element, int *array) {

  int i, count = 0;
  for (i = 0; i < N; i++)
  {
    if (array[i] == element)
    {
      count++;
    }
  }
  return count;
}
