#include <stdlib.h>
#include <stdio.h>
struct records {
  char subject_Name[50];
  int subject_Score;
};

int main() {
  struct records *p;
  int total_Records;
  int count = 1;
  printf("Input the no of Records: ");
  scanf("%d", &total_Records);

  p = (struct records *)malloc(total_Records * sizeof(struct records));
  for (int temp = 0; temp < total_Records; ++temp)
   {
    printf("Input the subject and score of the %d record :\n",count);
    scanf("%s %d", (p + temp)->subject_Name, &(p + temp)->subject_Score);
    ++count;

  }

  printf("Subject and Score Info:\n");
  for (int temp = 0; temp < total_Records; ++temp) {
    printf("%s\t%d\n", (p + temp)->subject_Name, (p + temp)->subject_Score);
  }

  free(p);

  return 0;
}