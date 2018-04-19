#include<iostream>
using std::cout;
using std::endl;
void iniciar(double *u_1, double x_max);
void cambiar(double *u_i, double *u_i1);
int main
{
	double dt = 0.01;
	double dx = 0.1;
	double c = 1;
	double x_max = 2.0;
	double T = 0.5;
	double *u_i[x_max/dx];
	double *u_i1[x_max/dx]; 
	double x = 0;
	int xN = x_max / dx;
	int tN = T / dt;
	double x1;
	u_i[0] = 0;
	u_i[xN-1] = 0;
	for(int i = 0; i < xN; i ++)
	{
		x1 = x + i*dx
		if(x < 0.75 || x >1.25)
		{
			u_i[i] = 0;
		}
		else
		{
			u_i[i]  = 1;
		}
	}	
	for (int j = 1 ; j < tN; j++)
	{
		u_i1[j-1] = u_i[j] - c*(dt/dx)*(u_i[j] - u_1[j-1]) 
	}
	for (int k = 0; k < xN ; + ++)
	{
		u_i[k] = u_i1[k];
	}	
}
  
