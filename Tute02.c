/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
    int distance, remaining_distance;
    float Amount,remaining_Amount, final_Amount;

    printf("Enter the distance the van has travelled: ");
    scanf("%d",&distance);

    if(distance < 30){
      Amount = distance*50;
      final_Amount = Amount;}

    else
      {remaining_distance = distance - 30;
      Amount = 30*50;
      remaining_Amount = remaining_distance*40;

      final_Amount = Amount + remaining_Amount;}
   
    printf("Youre amount to be paid for a rented vehicle is: %.2f",final_Amount);
  return 0;
}
