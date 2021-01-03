main()
{
    int A,p,r,t;
    printf("Enter inital prinrcipal blance,annual interest rate,time"); // time in year
    scanf("%d%d%d",&p,&r,&t);
    A=p*(1+r*t);
    printf("simple interest %d",A);
}
