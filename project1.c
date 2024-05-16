#include<stdio.h>
void cartesian_product()
{
    int a[10],b[10],n1,n2;
    printf("Enter size of set A\n");
    scanf("%d",&n1);
    printf("Enter element of set A\n");
    for(int i=0;i<n1;i++)
      scanf("%d",&a[i]);
    printf("Enter size of set B\n");
    scanf("%d",&n2);
    printf("Enter element of set B\n");
    for(int i=0;i<n2;i++)
      scanf("%d",&b[i]);
    
    // logic for cartesian product
    
    printf("{");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf(" (%d %d) ",a[i],b[j]);
        }
    }
    printf("}");
    //return 0;
}
void Union()
{
   int a[10],b[10],i,c[10],j,k=0,n1,n2;

   // taking input set A

   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

    // taking input set B

   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

   // logic for calculate union

   // copy the element of set A in set C
   for(i=0;i<n1;i++)
   {
       // repeted element is not allowed so we check is any value repeted
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
      }
       if(j==k) //if not repesated then store value in set c 
       {
          c[k]=a[i];
          k++;
       }
  }
    // copy element of set B in set C
   for(i=0;i<n2;i++)
   {
       // check for repeted element
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) // if element is not repeted then store in set C
     {
       c[k]=b[i];
       k++;
     }
   }

   // printing of union of set A and set B
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}

void intersection()
{

 int a[100],b[100],c[100],n1,n2,n,k=0,i,j;
    
    // taking input of set A
    
    printf("Enter number of element of set A\n");
    scanf("%d",&n1);
    printf("Enter elements of set A\n");
    for(i=0;i<n1;i++)
      scanf("%d",&a[i]);
      
    // taking input set B
    
    printf("Enter number of element of set B\n");
    scanf("%d",&n2);
    printf("Enter elements of set B\n");
    for( i=0;i<n2;i++)
      scanf("%d",&b[i]);
      
    // Logic for intersection
    
    for( i=0;i<n1;i++)
    {
         for(j=0;j<n2;j++)
         {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
         }
        
    }
    
    // Printing the elements of intersection of set A and set B
    printf("intersection of set A and set B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
    
    //return 0; 
}
void setdifference()
{

int a[10],b[10],c[10],d[10],m=0,k=0,n1,n2,l,i,j;
    printf("Enter size of set A");
    scanf("%d",&n1);
    printf("Enter element of set");
    for( i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Enter size of set B");
    scanf("%d",&n2);
    printf("Enter element of set");
    for( i=0;i<n2;i++)
    scanf("%d",&b[i]);
   
    
    // logic for find A-B
    
    for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
          // here we check that is element already present in the set 
          // if present than ignore it otherwise add to the difference set   
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        
    }
    
    // logic for find B-A
    
    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
          // here we check that is element already present in the set 
          //if present than ignore it otherwise add to the difference set
            for(l=0;l<m;l++) 
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }
        
    }
     printf("Difference of A-B is:-\n");
     for(i=0;i<k;i++)
     {
         printf("%d ",c[i]);
     }
     printf("\n");
     printf("Difference of B-A is:-\n");
     for(i=0;i<m;i++)
     {
         printf("%d ",d[i]);
     }
    //return 0;
    
}
void symmetricdifference()
{

int a[10],b[10],c[10],d[10],m=0,k=0,n=0,n1,n2,l,i,j,sy[100];
    printf("Enter size of set A");
    scanf("%d",&n1);
    printf("Enter element of set");
    for( i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Enter size of set B");
    scanf("%d",&n2);
    printf("Enter element of set");
    for( i=0;i<n2;i++)
    scanf("%d",&b[i]);
   
    
    // logic for find A-B
    
    for( i=0;i<n1;i++)
    {
       // here we check that is b[i] already present in the ans set
      // if present then ignore it otherwise add it to the ans set
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
            
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        
    }
    
    // logic for find B-A
    
    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
          // here we check that is b[i] already present in the ans set
          // if present then ignore it otherwise add it to the ans set 
            for(l=0;l<m;l++)
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }
        
    }
    
    //logic for symmetric Difference
    
    for(i=0;i<k;i++)
    {
        sy[n]=c[i];
        n++;
    }
    for(i=0;i<m;i++)
    {
        sy[n]=d[i];
        n++;
    }
    
    printf("\nsymmetric Difference of sets is:-\n");
    for(i=0;i<n;i++)
     printf("%d ",sy[i]);
    //return 0;
    
}

void primecheck()
{

int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  //return 0;
}


void primenumberupton()
{
  int n, i = 3, count, c;

  printf("Enter the number of prime numbers to print\n");
  scanf("%d", &n);

  if (n >= 1) {
    printf("First %d prime numbers are:\n",n);
    printf("2\n");
  }

  for (count = 2; count <= n;)
  {
    for (c = 2; c <= i - 1; c++)
    {
      if (i%c == 0)
        break;
    }
    if (c == i)
    {
      printf("%d\n", i);
      count++;
    }
    i++;
  }

  //return 0;
}


void hcf()
{
int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

   // return 0;
}


void lcm()
{
int n1, n2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    //return 0;
}
void permutation_and_combination()
{
  //int fact(int n);
  int fact(int n) 
{
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
   int n, r, comb, per;
   printf("Enter n : ");
   scanf("%d",&n);
   printf("\nEnter r : ");
   scanf("%d",&r);
   comb = fact(n) / (fact(r) * fact(n-r));
   printf("\nCombination :%d",comb);
   per = fact(n) / fact(n-r);
   printf("\nPermutation :%d",per);
   //return 0;
}

/*int fact(int n) 
{
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}*/

void And()
{
int a[5] = { 1, 0, 1, 0, 1 };
    int b[5] = { 0, 1, 1, 0, 0 };
    int i, product;
  
    for (i = 0; i < 5; i++) {
  
        // using product method
        product = a[i] * b[i];
  
        printf("\n %d AND %d = %d",
               a[i], b[i], product);
    }
}
void Or()
{
int a[5] = { 1, 0, 1, 0, 1 };
    int b[5] = { 0, 1, 1, 0, 0 };
    int i, or_ans;
  
    for (i = 0; i < 5; i++) {
  
        // using the + operator
        if (a[i] + b[i] > 0)
            or_ans = 1;
        else
            or_ans = 0;
  
        printf("\n %d AND %d = %d",
               a[i], b[i], or_ans);
    }
}
void Nand()
{
 int a[5] = { 1, 0, 1, 0, 1 };
    int b[5] = { 0, 1, 1, 0, 0 };
    int i, ans;
  
    for (i = 0; i < 5; i++) {
        if (a[i] == 1 && b[i] == 1)
            ans = 0;
        else
            ans = 1;
        printf("\n %d NAND %d = %d",
               a[i], b[i], ans);
    }
}
void Nor()
{
int a[5] = { 1, 0, 1, 0, 1 };
    int b[5] = { 0, 1, 1, 0, 0 };
    int i, ans;
  
    for (i = 0; i < 5; i++) {
        ans = !(a[i] + b[i]);
        printf("\n %d NOR %d = %d",
               a[i], b[i], ans);
    }
}
void Not()
{
int a[5] = { 1, 0, 1, 0, 1 };
    int i, ans;
  
    for (i = 0; i < 5; i++) {
        if (a[i] == 0)
            ans = 1;
        else
            ans = 0;
        printf("\n  NOT %d = %d", a[i], ans);
    }
}
void introduction()
{
    printf("*******************************************************************************************************************************************************************");
    printf("\n\t\t\t\t\t\t\t\t:DSTL SOLVER:\n\n\n");
    printf("\tWelcome to Dstl Solver:->\n\n");
    //printf("This tool can solve the problems of below given Subjects.\n");
    printf("\tRules:\n\n\n");
    printf("\tUser have to enter the number as mentioned infront of the respective subjects.\n\n\n");
    printf("\t\t1.-->\"SET THEORY\""); 
    printf("\t\t2.-->\"NUMBER THEORY\"");
    printf("\t\t3.-->\"LOGIC GATES\""); 
    printf("\t\t4.-->\"Exit\"");
    printf("\n\n");
    printf("*******************************************************************************************************************************************************************");
}
void cartesian_product();
void introduction();
void Union();
void intersection();
void setdifference();
void symmetricdifference();
void And();
void Or();
void Nand();
void Nor();
void Not();
int  fact(int);
void lcm();
void permutation_and_combination();
void primenumberupton();
void hcf();
void primecheck();
int main()
{
 introduction();
 int control_1,control_2;
 printf("\nEnter Your Choice(1/2/3/4): ");
 scanf("%d",&control_1);
 switch(control_1)
 {
  case 1:
  {
    printf("\t\t\t\t\t\t\"Set theory\"\n\n\n\n");
    printf("\tChoose any one:\n\n");
    printf("\t1. Cartesian Product  \n");
    printf("\t2. Union Operation \n");
    printf("\t3. Intersection Operation \n");
    printf("\t4. Set Difference \n");
    printf("\t5. Symmetric Difference \n");
    printf("\t6. Exit\n\n");
    while(1)
    {
     printf("\n\nEnter Your Choice(1/2/3/4/5/6): ");
     scanf("%d",&control_2);
      switch(control_2)
      {
         case 1:
         cartesian_product();
         break;
         case 2:
         Union();
         break;
         case 3:
         intersection();
         break;
         case 4:
         setdifference();
         break;
         case 5:
         symmetricdifference();
         break;
         case 6:
         main();
      }
   }
  
   break;
  } 
  case 2:
  {
     printf("\t\t\t\t\t\t\"Number Theory\"\n\n\n\n");
     printf("\tChoose any one:\n\n");
     printf("\t1.Prime Number Checking \n");
     printf("\t2.Prime Number till the \"n\" given by user \n");
     printf("\t3.To check HCF \n");
     printf("\t4.To check LCM \n");
     printf("\t5.Permutation and Combination \n");
     printf("\t6. Exit\n\n");
     while(1)
    {
       printf("\n\nEnter Your Choice(1/2/3/4/5/6): ");
       scanf("%d",&control_2);
       switch(control_2)
        {
          case 1:
          primecheck();
          break;
          case 2:
          primenumberupton();
          break;
          case 3:
          hcf();
          break;
          case 4:
          lcm();
          break;
          case 5:
          permutation_and_combination();
          case 6:
          main();
          break;
        }   
    }
     break;
  }
  case 3:
  {
     printf("\t\t\t\t\t\t\"Logic Gates\"\n\n\n\n");
     printf("\tChoose any one:\n\n");
     printf("\t1.AND Gate \n");
     printf("\t2.OR Gate \n");
     printf("\t3.NAND Gate \n");
     printf("\t4.NOT Gate \n");
     printf("\t5.NOR Gate \n");
     while(1)
     {
      printf("\n\nEnter Your Choice(1/2/3/4/5/6): ");
       scanf("%d",&control_2);
       switch(control_2)
        {
          case 1:
          And();
          break;
          case 2:
          Or();
          break;
          case 3:
          Nand();
          break;
          case 4:
          Not();
          break;
          case 5:
          Nor();
          break;
          case 6:
          main();
          break;
        }
     }
  }
  case 4:
  printf("");
  printf("\n\nThank's for using...\n---------------------");
  break;
 }  
  return 0;
}
