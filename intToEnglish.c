#include<stdio.h>
#include<math.h>

void main() {
  //intialzing the three format of values
  int hundred = 0;
  int ten = 0;
  int one = 0;
  int value; 
  
  //while value is not 0
  while(value != 0) {
    printf("Enter a value between 1-999 (enter 0 to exit): ");
    scanf("%d", &value); // input for user number
      
    if (value==0) break; // break loop if valie is zero

    // determinging the what type quantity of numbers in the actual number
    hundred = value / 100;
    ten = (value - (hundred * 100)) / 10;
    one = value - (hundred * 100) - (ten * 10);

    if (hundred > 0) { // if greter than zero
    // if hundred is equal to a certain number
      if(hundred == 9){
          printf("Nine");
      }else if (hundred == 8){
          printf("Eight");
      }else if (hundred == 7){ 
          printf("Seven");
      }else if (hundred == 6){
          printf("Six");
      }else if (hundred == 5){
          printf("Five");
      }else if (hundred == 4){
          printf("Four");
      }else if (hundred == 3){
          printf("Three");
      }else if (hundred == 2){
          printf("Two");
      }else{
          printf("One");
      }
      printf(" Hundred "); 
    }

    if (ten != 1) {  // if ten is not 1
    // if ten is equal to a certain number
      if(ten == 9){
          printf("Ninety ");
      }else if (ten == 8){
          printf("Eighty ");
      }else if (ten == 7){
          printf("Seventy ");
      }else if (ten == 6){
          printf("Sixty ");
      }else if (ten == 5){
          printf("Fifty ");
      }else if (ten == 4){
          printf("Forty ");
      }else if (ten == 3){
        printf("Thirty ");
      }else if (ten == 2){
        printf("Twenty ");
      } 

      if (one > 0) {// if one is greater than 0
      //if one equals to a certain value
        if(one == 9){
          printf("Nine\n");
        }else if (one == 8){
          printf("Eight\n");
        }else if (one == 7){
          printf("Seven\n");
        }else if (one == 6){
          printf("Six\n");
        }else if (one == 5){
          printf("Five\n");
        }else if (one == 4){
          printf("Four\n");
        }else if (one == 3){
          printf("Three\n");
        }else if (one == 2){
          printf("Two\n");
        }else printf("One\n");
      } else {
        printf("\n");
      }
    } else { // if ten is equal to 1
    //does the teen numbers
      if (one > 0) {
        if(one == 9){
          printf("Nineteen\n");
        }else if (one == 8){
          printf("Eightteen\n");
        }else if (one == 7){
          printf("Seventeen\n");
        }else if (one == 6){
          printf("Sixteen\n");
        }else if (one == 5){
          printf("Fifteen\n");
        }else if (one == 4){
          printf("Fourteen\n");
        }else if (one == 3){
          printf("Thirten\n");
        }else if (one == 2){
          printf("Twelve\n");
        }else printf("Eleven\n");
      } else {
        printf("Ten\n");
      }
    }
  }

  
}