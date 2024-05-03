#include <stdio.h>

float add(float a, float b) {

   return a + b;
}

float subtract(float a, float b) {

   return a - b;
}

float multiply(float a, float b) {

   return a * b;
}

float divide(float a, float b) {

   if (b == 0) {
       printf("Error: Division by zero is not allowed.\n");
       return -1;
   }
   return a / b;
}

int main() {
   float num1, num2, result;
   int choice;
   printf("Welcome to the Arithmetic Operations Menu Program!\n");
   printf("Enter first number: ");
   scanf("%f", &num1);
   printf("Enter second number: ");
   scanf("%f", &num2);

   while (1) {
       printf("\nChoose an operation to perform:\n");
       printf("1. Addition\n");
       printf("2. Subtraction\n");
       printf("3. Multiplication\n");
       printf("4. Division\n");
       printf("5. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);

       switch (choice) {

           case 1:
               result = add(num1, num2);
               if (result != -1)
                   printf("Result: %.2f\n", result);
               break;

           case 2:
               result = subtract(num1, num2);
               if (result != -1)
                   printf("Result: %.2f\n", result);
               break;

           case 3:
               result = multiply(num1, num2);
               if (result != -1)
                   printf("Result: %.2f\n", result);
               break;

           case 4:
               result = divide(num1, num2);
               if (result != -1)
                   printf("Result: %.2f\n", result);
               break;

           case 5:
               printf("Exiting the program...\n");
               return 0;
           default:

               printf("Invalid choice. Please enter a valid choice.\n");
       }
   }
   return 0;
}
