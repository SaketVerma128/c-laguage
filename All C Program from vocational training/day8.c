#include<stdio.h>

int main()
{
    //Q1. Fahrenheit to Celsius Conversion:
    float deg, fer;
    printf("Enter the Value in fahrenhaite\n");
    scanf("%f",&fer);
    deg = (fer-32)*5/9;
    printf("celcius = %f\n",deg);



    //Q2.Integer Division with Float Result:
    int a,b;
    printf("\nEnter the two integer to divide\n");
    scanf("%d  %d",&a,&b);
    printf("the division in float value is %.2f\n",(float)a/b);



    //Q3. Implicit vs Explicit Casting:
    int aa=10, cc=6;
    float bb=6;
    printf("\n\nthe implicit type casting division of %d and %f is %f\n",aa,bb,aa/bb);
    printf("the Explicit type casting division of %d and %d is %f\n",aa,cc,(aa/cc));


    //Q4. Character to ASCII Conversion:
    char ch;
    printf("\n\n\nEnter the character you want to convert into ASCII value\n");
    scanf("%s",&ch);
    printf("The ASCII value for '%c' is %d",ch ,ch);



    //Q5. Float salary to Integer for Report:
    float salary ;
    printf("\n\n\nenter the (float) salary that you want to convert into whole number\n");
    scanf("%f",&salary);
    printf("Your salary into whole number is %d\n",(int)salary);



    //Q6. Average maerks as Float:
    int i ;
    float marks , total;
    printf("\n\n\nenter the number of subjects\n");
    scanf("%d",&i);
    printf("enter the marks one by one\n");
    for ( int j = 0; j < i; j++)
    {
        scanf("%f",&marks);
        total += marks;
    }
    printf("The average of all the marks you entered is %.2f",total/i);
    
    

    //Q7. Double to int conversion:
    double num;
    printf("\n\n\nEnter the double value \n");
    scanf("%lf",&num);
    printf("the convertion from double(%lf) to int is %d\n", num ,(int)num);




    //Q8. Weight conversion for pakaging:
    float num1;
    printf("\n\nEnter the weight value: ");
    scanf("%f",&num1);
    printf("the round offed value for weight(%f) is %d KG\n", num1 ,(int)num1);



    //Q9. Mixed-Type Billing Calculation:
    int rs;
    float paisa;
    printf("\n\n\nEnter the cost in rupee and than paisa\n");
    scanf("%d %f", &rs , &paisa);
    printf("the total money required is %.2f rupee",rs+(paisa/100));



    //10. compare result with and without casting:
    int first = 11, second = 9;
    float first1 = 11 , second1 = 9;
    printf("\n\n\nthe value of division of %d and %d with type casting is %f\n", first ,second, (float)first/second);
    printf("the value of division of %f and %f without type casting is %f\n", first1 ,second1, first1/second1);
    return 0;
}