void simple_math(void)
{
    float num1;
    float num2;
    float res;
    char oper;

    printf("Input calculation\n");
    scanf("%f %c %f", &num1, &oper, &num2);

    switch (oper)
    {
        case '+':
            res = num1 + num2;
            printf("%.1f", res);
            break;

        case '-':
            res = num1 - num2;
            printf("%.1f", res);
            break;

        case '*':
            res = num1 * num2;
            printf("%.1f", res);
            break;

        case '/':
            if (num2 != 0)
            {
                res = num1 / num2;
                printf("%.1f", res);
            }
            else
            {
                printf("ERR\n");
            }

            break;

        default:
            printf("ERR\n");
    }
}
