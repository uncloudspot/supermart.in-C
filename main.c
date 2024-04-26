#include <stdio.h>

int main(void) {
 // supermart app 
  in_back:
  printf("\t\twelcome to supermart.in\n");
  printf("\t choose categary you want to buy\n");
  printf("1.vegetables\n");
  printf("2.fruits\n");
  printf("3.groceries\n");
  printf("4.clothes\n");
  printf("5.electronics\n");
  printf("6.sports\n");
  printf("\n");
  printf("enter category number : ");
  // define variable 
  int catogray;

  scanf("%d", &catogray);
 /* if (catogray == 1) {
    printf("\t\tchoose vegetables you want to buy\n");
  }
  if (catogray == 2) {
    cat_fruits:
    printf("\t\tchoose fruits you want to buy\n");
    printf("1.apple\n2.banana\n3.mango\n4.grapes\n5.orange");
  } */
  switch (catogray) {
    case 1 : printf("\t\tchoose vegetables you want to buy\n");
      printf("sorry all vagetables are unavailable ");
      
        printf("sorry all vegetables are unavailable \n");
        printf(" \nEnter \"b\" to back to main menu : ");
        char vegetables;
        scanf(" %c", &vegetables);
        if (vegetables == 'b') {
          goto in_back;
        }
    break;
    case 2 : cat_fruits:
    printf("\t\tchoose fruits you want to buy\n");
    printf("1.apple\n2.banana\n3.mango\n4.grapes\n5.orange");
            printf(" \nEnter \"b\" to back to main menu and enter anything to continue : ");
      char back4;
      scanf(" %c", &back4);
      if (back4 == 'b') {
        goto in_back;
      }
      printf("enter product no. : ");
      int fruits;
      scanf("%d", &fruits);
      switch (fruits) {
        case 1 : printf("apple is successfully placed"); 
        break;
        case 2 : printf("banana is successfully placed"); 
        break;
        case 3 : printf("mango is successfully placed"); 
        break;
        case 4 : printf("grapes is successfully placed"); 
        break;
        case 5 : printf("orange is successfully placed"); 
        break;
        default: printf("invalid product no. \n");
          printf("\n");
          printf("enter \"b\" to back to groceries products : ");
          char back_itn;
          scanf(" %c", &back_itn);
          if (back_itn == 'b');
          goto cat_fruits;
        break;
      }
    break;
    
    case 3 : 
      cat_groceries:
      printf("\t\tchoose groceries you want to buy\n");

      printf("1.rice\n");
      printf("2.wheat\n");
      printf("3.sugar\n");
      printf("4.oil\n");
      printf("5.salt\n");
      printf(" \nEnter \"b\" to back to main menu and enter anything to continue : ");
      char back3;
      scanf(" %c", &back3);
      if (back3 == 'b') {
        goto in_back;
      }
      printf("enter product no. : ");
      
      int groceries;
      scanf("%d", &groceries);
      
      switch (groceries) {
        case 1 : printf("rice is sussesfully placed \n");
        break;
        case 2 : printf("wheat is sussesfully placed \n");
        break;
        case 3 : printf("sugar is sussesfully placed \n");
        break;
        case 4 : printf("oil is sussesfully placed \n");
        break;
        case 5 : printf("salt is sussesfully placed \n");
        break;
        default: printf("invalid product no. \n");
          printf("\n");
          printf("enter \"b\" to back to groceries products : ");
          char back2;
          scanf(" %c", &back2);
          if (back2 == 'b');
          goto cat_groceries;
        break;
        
      }
      
    break;

    
    case 4 : printf("\t\tchoose clothes you want to buy\n");
     printf("sorry all clothes are unavailable ");
      printf("sorry all clothes are unavailable \n");
      printf(" \nEnter \"b\" to back to main menu : ");
      char clothes;
      scanf(" %c", &clothes);
      if (clothes == 'b') {
        goto in_back;
      }
    break;

    
    case 5 : printf("\t\tchoose electronics you want to buy\n");
      printf("sorry all electronics are unavailable");
      printf("sorry all electronics are unavailable \n");
      printf(" \nEnter \"b\" to back to main menu : ");
      char electronics;
      scanf(" %c", &electronics);
      if (electronics == 'b') {
        goto in_back;
      }
    break;

    
    case 6 : printf("\t\tchoose sports you want to buy\n");
      printf("sorry all sports are unavailable \n");
      printf(" \nEnter \"b\" to back to main menu : ");
      char sports;
      scanf(" %c", &sports);
      if (sports == 'b') {
        goto in_back;
      }
    
      
    break;
    default: printf("\ninvalid category no. try again\n");
      printf("\n");
      printf("enter \"b\" to go back to main menu : ");
      char back;
      scanf(" %c", &back);
      if (back == 'b') {
        goto in_back;
      }
      
      
    break;
  }
  return 0;
}