#include <stdio.h>
#include <math.h>
float p[6], ply[6], q[6];
float synth(int m, float r)
{
  int i;
  q[0] = p[0];
  for (i = 1; i <= m; i++)
  {
    q[i] = (q[i - 1] * r) + p[i];
  }
  printf("\n");
  for (i = 0; i < m; i++)
  {
    printf("\t%f", q[i]);
  }
  printf("\t%f", q[m]);
  return (q[m]);
}
void main()
{
  int m, i, flag = 0;
  float r, x, x1, fx, fdx;
  printf("\n Enter the highest degree of the Equation(max 5):");
  scanf("%d", &m);
  for (i = 0; i <= m; i++)
  {
    printf("\n Coeffient x[%d]=", m - i);
    scanf("%f", &p[i]);
    ply[i] = p[i];
  }
  printf("\nEnter the initial value x0:");
  scanf("%f", &r);
  x = r;
  do
  {
    printf("\n%f\n", x);
    fx = synth(m, x);
    for (i = 0; i <= m; i++)
    {
      p[i] = q[i];
    }
    fdx = synth(m - 1, x);
    x1 = x - (fx / fdx);
    if (fabs(x1 - x) <= 0.0009)
    {
      flag = 1;
    }
    x = x1;
    for (i = 0; i <= 5; i++)
    {
      p[i] = ply[i];
    }
  } while (flag != 1);
  printf("\nApproximate root=%f", x1);
}