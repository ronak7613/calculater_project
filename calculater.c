#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
void trigo(float x)
{
    float t;
    printf("enter the value you want to calculate");
    scanf("%f",&t);
    float sin_value = sin(t);
    float cos_value = cos(t);
    float tan_value = tan(t);
    float sinh_value = sinh(t);
    float cosh_value = cosh(t);
    float tanh_value = tanh(t);
    float log_value = log(t);
    float log10_value = log10(t);
    float exp_value = exp(t);

    printf("The value of sin(%f) : %f \n", t, sin_value);
    printf("The value of cos(%f) : %f \n", t, cos_value);
    printf("The value of tan(%f) : %f \n", t, tan_value);
    printf("The value of sinh(%f) : %f \n", t, sinh_value);
    printf("The value of cosh(%f) : %f \n", t, cosh_value);
    printf("The value of tanh(%f) : %f \n", t, tanh_value);
    printf("The value of log(%f) : %f \n", t, log_value);
    printf("The value of log10(%f) : %f \n",t,log10_value);
    printf("The value of exp(%f) : %f \n",t, exp_value);
}
 int main()
{
	int a,number1,number2;
	do
	{

	    printf("Hello welocme to calculater\n");
	    printf("enter the two numbers you want to caclulate\n");
	    scanf("%d",&number1);
	    scanf("%d",&number2);
		printf("follow the instructions to operate the calculater\n");
		printf("to add press 1\n");
		printf("to subtract press 2\n");
		printf("to multiply press 3\n");
		printf("to divide  press 4\n");
		printf("to find weather the no. is prime or not  press 5\n");
		printf("to find weather the number is odd or even press 6\n");
		printf("to find trigonometric ratios press 7\n");
		printf("to exit press 0\n");
		scanf("%d",&a)
		;
		switch (a)
		{
		case 1:
		printf("The sum of numbers %d and %d is %d\n",number1,number2,number1+number2);
		break;
        case 2:
		printf("The difference of numbers %d and %d is %d\n",number1,number2,number1-number2);
		break;
		case 3:
		printf("The product of numbers %d and %d is %d\n",number1,number2,number1*number2);
		break;

		case 4:
		printf("The divide qutient of numbers %d and %d is %d\n",number1,number2,number1/number2);
		break;
		case 5:
		    {
            int y,u,flag = 0;
            printf("Enter a positive integer: ");
            scanf("%d", &y);

            for (u = 2; u <= y / 2; ++u) {

                // condition for non-prime
                if (y % u == 0) {
                    flag = 1;
                    break;
                }
            }

            if (y == 1) {
                printf("1 is neither prime nor composite.");
            }
            else {
                if (flag == 0)
                    printf("%d is a prime number.",y);
                else
                    printf("%d is not a prime number.",y);
            }
		    }
		break;

		case 6:
{
		int num;
        printf("Enter an integer: ");
        scanf("%d", &num);
        // True if num is perfectly divisible by 2
        if(num % 2 == 0){
            printf("%d is even.", num);
        }
        else
            printf("%d is odd.", num);
}
        break;

        case 7:
{
        float z;
		trigo(z);
}
        break;

        case 0:
        printf("Thanks for Using my program\n");
        break;
	}
	}
	while(a=0);

	return 0;
}
