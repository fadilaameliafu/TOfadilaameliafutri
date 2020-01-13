int main()
{
   int first, second, add, subtract, multiply;
   float divide;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
 
   add = first + second;
   multiply = first * second;

   printf("Sum = %d\n", add);
   printf("Multiplication = %d\n", multiply);
 
   return 0;
}

