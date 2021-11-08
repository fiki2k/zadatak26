// Broj koji korisnik unese napisat u obratnom redoslijedu koristeci rekurziju.

#include<stdio.h>
int main(){
   int num,reverse_number;

   //Unesi broj
   printf("\nEnter any number:");
   scanf("%d",&num);

   //Pozivamo funkciju i rjesenje spremamo.
   reverse_number=reverse_function(num);
   printf("\nAfter reverse the no is :%d",reverse_number);
   return 0;
}
int sum=0,rem;
int reverse_function(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else
      return sum;
   return sum;
}
