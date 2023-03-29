#include <stdio.h>
void prompt(void); //Function that will prompt user for Richter input
void richter(double number); //Function that will calculate damage
int main() {
    prompt(); //Calling prompt
    //Beginning of Problem 2- A program that will categorize and return average of temperatures
   int size;
   printf("Please input the number of temperatures you'd like to process: ");
   scanf("%d", &size);
   int temps[size];
   int hot = 0, pleasant = 0, cold = 0, sum = 0;
   printf("Please input one temperature at a time");
   for(int i = 0; i < size; i++)
   {
       scanf("%d", &temps[i]);
       sum += temps[i];
       if(temps[i] >= 85)
           hot++;
       else if(temps[i] >= 60)
           pleasant++;
       else
           cold++;
   }
   double avg = sum / size;
   printf("There were %d hot days (high of 85 or higher), %d pleasant days (high between 60-84) and"
          "%d cold days (high 60 or lower). The average temperature over %d days was %.2f", hot, pleasant, cold, size, avg);
}
void prompt(void){
    double promptvar;
    printf("Please input the Richter Scale number: ");
    scanf("%lf", &promptvar);
    if(promptvar >= 0 && promptvar <= 9)
        richter(promptvar);
    else
    {
        printf("Number out of range\n");
        prompt(); //Recalls prompt if the given number is out of range
    }
}
void richter(double number)
{
    if (number < 5.0)
        printf("Little or no damage\n");
    else if (number < 5.5)
        printf("Some damage\n");
    else if (number < 6.5)
        printf("Serious damage: walls may crack or fall\n");
    else if (number < 7.5)
        printf("Disaster: houses and buildings may collapse\n");
    else
        printf("Catastrophe: most buildings destroyed\n");
}