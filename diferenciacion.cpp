#include<iostream>
using std::cout;
using std::endl;
void iniciar(double *u_1, double x_max);
void cambiar(double *u_i, double *u_i1);
int main()
{
	double dt = 0.01;
	double dx = 0.1;
	double c = 1.0;
	double x_max = 2.0;
	double T = 0.5;
	double x = 0;
	int xN = x_max / dx;
	int tN = T / dt;
	double *u_i = new double[xN];
	double *u_i1 = new double[tN]; 
	double x1;
	u_i1[0] = 0;
	u_i1[xN] = 0;
	for(int i = 0; i < xN; i ++)
	{
		x1 = x + i*dx;
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
		for (int i = 1 ; i < xN-1 ; i ++ )
		{
			u_i1[i] = u_i[i] - c*(dt/dx)*(u_i[i] - u_i[i-1]); 
		}	
		for (int k = 0; k < xN ; k ++)
		{
			u_i[k] = u_i1[k];
		}
	}		
	for (int i = 0; i < xN; i++)
	{
		cout << u_i[i] << endl; 
	}
	return 0;
}
	
  
