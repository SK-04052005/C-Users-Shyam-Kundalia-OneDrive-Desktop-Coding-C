#include<stdio.h>

typedef struct
{
    int x,y,z;
}vector;

vector add (vector v1,vector v2)
{
    vector sum;
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    sum.z=v1.z+v2.z;

    return sum;

}

vector sub (vector v1,vector v2)
{
    vector sub;
    sub.x=v1.x-v2.x;
    sub.y=v1.y-v2.y;
    sub.z=v1.z-v2.z;

    return sub;

}

float scalar (vector v1,vector v2)
{
    float scalar;
    scalar=((v1.x*v2.x)+(v1.y*v2.y)+(v1.z*v2.z));

    return scalar;

}

vector multi (vector v1,vector v2)
{
    vector multi;
    multi.x=((v1.x*v2.y)-(v1.y*v2.x));
    multi.y=-((v1.x*v2.z)-(v2.x*v1.z));
    multi.z=((v1.y*v2.z)-(v1.z*v2.y));

    return multi;

}

int main()
{

    vector v1,v2,v3,v4,v6;
    float v5;

    printf("Enter x element of first vector: ");
    scanf("%d",&v1.x);

    printf("Enter y element of first vector: ");
    scanf("%d",&v1.y);

    printf("Enter z element of first vector: ");
    scanf("%d",&v1.z);

    printf("Enter x element of second vector: ");
    scanf("%d",&v2.x);

    printf("Enter y element of second vector: ");
    scanf("%d",&v2.y);

    printf("Enter z element of second vector: ");
    scanf("%d",&v2.z);

    v3=add(v1,v2);
    v4=sub(v1,v2);
    v5=scalar(v1,v2);
    v6=multi(v1,v2);

    printf("\nAddition is (%d,%d,%d)\n",v3.x,v3.y,v3.z);
    printf("\nSubtraction is (%d,%d,%d)\n",v4.x,v4.y,v4.z);
    printf("\nScalar product is %f\n",v5);
    printf("\nVector product is %di + %dj + %dk",v6.x,v6.y,v6.z);
    

    return 0;

}