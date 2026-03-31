#include <stdio.h>
#include <stdlib.h>

int main() {

   char message[100];
   int shift;
   int i;
   int choice;

   printf("Enter operation with message\n");
   printf("encrypt - 1\n");
   printf("decrypt - 2\n");
   scanf("%d", &choice);

   switch(choice)
   {
      case 1:
      {
         printf("Enter message to encrypt\n");
         scanf("%s", message);

         printf("Enter shift\n");
         scanf("%d", &shift);

         for (i = 0; message[i] != '\0'; i++)
         {
            message[i] = message[i] + shift;
            if (message[i] > 'z')
               message[i] = message[i] - 26;
         }
         printf("Encrypted message: %s\n", message);
         break;
      }

      case 2:
      {
         printf("Enter message to decrypt\n");
         scanf("%s", message);

         printf("Enter shift\n");
         scanf("%d", &shift);

         for (i = 0; message[i] != '\0'; i++)
         {
            message[i] = message[i] - shift;
            if (message[i] < 'a')
               message[i] = message[i] + 26;
         }
         printf("Decrypted message: %s\n", message);
         break;
      }
   }

   return 0;
}
