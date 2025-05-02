#include <stdio.h>

int row;
int counter, counter2, counter3,value =1;

int main(){
    printf("enter the number of rows : ");
    scanf("%i", &row);
    while(counter <= row){
        for (counter2 = 0; counter2 < row - counter - 1;counter2++){
            printf(" ");
        }
        value = 1; // reset the value to 1 at the begining of each row

        for (counter3 = 0; counter3 <= counter;counter3++){
            printf("%i ", value);
            value = value * (counter - counter3) / (counter3 + 1);
        }
        printf("\n");
        counter++;
    }
    return 0;
}