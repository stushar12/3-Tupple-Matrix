#include<stdio.h>
int main()
{
  int m,p,n,i,j,k,t=0,l;
  int a[10][10],s[10][10],st[10][10];
  printf("\nEnter the size of original array\n");
  scanf("%d%d",&m,&n);
  printf("\n Enter the elements of array\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  k=1;
  for(i=0;i<m;i++)              //Converting to 3 Tupple
  {
    for(j=0;j<n;j++)
    {
      if(a[i][j]!=0)
      {
        s[k][0]=i;
        s[k][1]=j;
        s[k][2]=a[i][j];
      k++;
      if(j>t)
      t=j;
    }
  }
}
printf("%d \n",t);
s[0][0]=m;
s[0][1]=n;
s[0][2]=k-1;
printf("\n 3 tupple representation of the given matrix is\n");
for(i=0;i<k;i++)
{
  for(j=0;j<3;j++)
  {
    printf("%d  ",s[i][j]);
  }
  printf("\n");
}
p=1;
l=k-1;
for(i=0;i<=t;i++)               //Transpose of 3 Tupple
{
  k=1;
  for(j=0;j<l;j++)
  {
    if(s[k][1]==i)
    {
      st[p][1]=s[k][0];
      st[p][0]=s[k][1];
      st[p][2]=s[k][2];
      p++;
      k++;
    }
    else
    k++;
  }
}
st[0][1]=s[0][0];
st[0][0]=s[0][1];
st[0][2]=s[0][2];
printf("\n Transpose of the sparse matrix is\n");
for(i=0;i<p;i++)
{
  for(j=0;j<3;j++)
  {
    printf("%d ",st[i][j]);
  }
  printf("\n");
}
}
