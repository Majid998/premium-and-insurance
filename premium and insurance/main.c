/* An Insurance company follows following rules to calculate
premium.
(1) If a person’s health is excellent and the person is between
25 and 35 years of age and lives in a city and is a male
then the premium is Rs. 4 per thousand and his policy
amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that
the sex is female then the premium is Rs. 3 per thousand
and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25
and 35 years of age and lives in a village and is a male
then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.
Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured. */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
   char health, location, Gender;
   int age = 0;
    printf("Hello world!\n");

    printf("Please enter the health of the person(E for excellent and P for poor):\n");
    printf("Please enter the location of the person(C of city and V for village):\n");
    printf("Please enter the gender of the person:(M for male and F for female)\n");
    printf("Please enter the age of the person:\n");
    printf("Please enter the age, health,location and gender of the person\n");
    scanf("%d %c %c %c",&age,&health,&location,&Gender);

    if(health == 'E'&&location == 'C'&&Gender == 'M'&&(age >= 25 && age <=35))
      {
              printf("The premium is 4 Rs per thousand and the policy limit is cannot exceed Rs 2 Lakh(s). \n");
       }
    else if(health == 'E'&&location =='C'&&Gender == 'F'&&(age >= 25 && age <=35))
    {
        printf("The premium is 3 Rs per thousand and the policy limit is cannot exceed Rs 1 Lakh(s). \n");
    }
    else if(health == 'P'&&location == 'V'&&Gender == 'M'&&(age >= 25 && age <=35))
    {
        printf("The premium is 6 Rs per thousand and the policy limit is cannot exceed Rs 10,000. \n");
    }
    else
    {
        printf("The person is not insured");
    }

    getch();
    return 0;
}
