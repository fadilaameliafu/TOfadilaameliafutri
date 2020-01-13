#include <stdio.h>

void main()
{
  int i, a;
  printf("Masukkan Nilai bilangan asli untuk dicari nilai ganjil-genap : ");
  scanf("%d",&a);

  printf(""\nNilai-nilai bilangan ganjil dari 0 hingga %d adalah :\n",a);
  printf("Genap\tGanjil\n");
  for (i=0; i<=a; i++)
  {
    if(i %2 == 0) {
      printf("%d\t",i); }
    else {
      printf("%d\n",i); }
  }
}