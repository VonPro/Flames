/**
  * Copyright to VonPro (2016).
  */
#include <stdio.h>
#include <conio.h>
#include <string.h>

int alphaCount(char name[30], char letter) {
	int count = 0;

	for (int x=0; x<strlen(name); x++) {
   	if (name[x] == letter) {
      	count++;
      }
   }

   return count;
}

main(void) {
	const char alphabet[] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char yourName[30], someName[30];

   printf("Enter your name: ");
   scanf("%[^\n]%*c", &yourName);

   printf("Enter someone's name: ");
   scanf("%[^\n]%*c", &someName);

   // int maxLength = (strlen(yourName) > strlen(someName)) ? strlen(yourName) : strlen(someName);
   int counter = 0;
   int yourNameAlphaCount = 0, someNameAlphaCount = 0, totalAlphaCount = 0;
   // bool isAlphaPresent = false;

   do {
   	yourNameAlphaCount = alphaCount(yourName, alphabet[counter]);
      someNameAlphaCount = alphaCount(someName, alphabet[counter]);

      if (yourNameAlphaCount > 0 && someNameAlphaCount > 0) {
      	totalAlphaCount += (yourNameAlphaCount + someNameAlphaCount);
         counter++;
      }
      else {
      	counter++;
      }
   }	while (counter < strlen(alphabet));

   do {
   	if (totalAlphaCount > 6) {
      	totalAlphaCount -= 6;
      }
      else {
      	printf("FLAMES result: ");
      	switch (totalAlphaCount - 1) {
         	case 0:
            	printf("Friends");
               break;
            case 1:
            	printf("Lovers");
               break;
            case 2:
            	printf("Acquintance");
               break;
            case 3:
            	printf("Marriage");
               break;
            case 4:
            	printf("Enemy");
               break;
            case 5:
            	printf("Sweet");
               break;
            default:
            	printf("Something went wrong.");
      	}
         break;
      }
   }	while (true);

   getche();
}
