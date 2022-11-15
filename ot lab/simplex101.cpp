#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
// Online C++ compiler to run C++ program online

using namespace std;
int n;
int m;
// #define Z(x,y,z)  (2*x)-(3*y)+(3*z)       //enter the function z

// x.resize(n, vector<double>(m));
// x_z.resize(n + m);
// slack.resize(m, vector<double>(m, 0));
// c.resize(m);
// this vector contain the value for which i will cal the value of z;
double
negative (double x)
{
  return (-x);
}

void
optimize_value (vector < double >&sol, vector < double >&x_z, double z_con)
{
  double bfs = 0;
  for (int i = 0; i < n + m; i++)
    {
      bfs += sol[i] * x_z[i];
    }
  bfs += z_con;
  cout << "objective value function is" << bfs << endl;
  return;
}

void
update_x_z (vector < double >&x_z, vector < vector < double > >&slack,
	    vector < vector < double > >&x, vector < double >&sol, double z_con,
	    int index_, int z, vector < double >&c)
{
  double demo;
  demo = x_z[z];
  x_z[z] = 0;
  for (int i = 0; i < m + n; i++)
    {
      if ((i < n))
	{
	  if (i != z)
	    {
	      x_z[i] = x_z[i] - (demo * x[i][index_]);
	    }
	}
      else
	{
	  x_z[i] = x_z[i] - (demo * (slack[i - n][index_]));
	}
    }
  z_con += (-1) * (c[index_]);
  optimize_value (sol, x_z, z_con);
  return;
}

void
update_x (vector < double >&x_z, vector < vector < double > >&slack,
	  vector < vector < double > >&x, vector < double >&sol, double z_con,
	  vector < double >&c, int index_, int z)
{
  slack[index_][index_] = ((slack[index_][index_]) / x[z][index_]);
  c[index_] = c[index_] / x[z][index_];
  sol[z] = c[index_];
  for (int i = 0; i < n; i++)
    {
      x[i][index_] /= x[z][index_];
    }
  // solution we can put the slack and athore variable 0 here only by calling solution
  for (int i = 0; i < n + m; i++)
    {
      if (i < n)
	{
	  if ((x[i][index_] != 0))
	    {
	      if (i != z)
		{
		  sol[i] = 0;
		}
	    }
	  // if the coffe is not 0 the we can equate the solution coresponding to it 0 and slack(index) is now also be 0 so solution(n+index)=0 will work
	}
      else
	{
	  if (slack[i - n][index_] != 0)
	    {
	      sol[i] = 0;
	    }
	  else
	    {
	      sol[i] = c[i];
	    }
	}
    }
  
  cout << "the basic feasible solution is\n(" << endl;
  for (int i = 0; i < m + n; i++)
    {
      cout << sol[i] << ", ";
    }
  cout << ")\n";
  for(int t=0;t<2*m;t++)
  {
    double 
    if(x[z][m]!=0)
    {

    }
  }
  update_x_z (x_z, slack, x, sol, z_con, index_, z, c);
  return;
}

void
loop ( vector < double >&c, vector < double >&x_z, vector < vector < double > >&slack,
    vector < vector < double > >&x, vector < double >&sol, double z_con, int z)	// this function will campare the division of constant and to the non basic varialbe
{
  int index_;
  vector < double >q;
  q=x[z];
  double min = 0;
  double demo;
  for (int i = 0; i < q.size (); i++)
    {
      if (i == 0)
	{
	  min = c[0] / q[0];
	}
      else
	{
	  demo = c[i] / q[i];
	  if (min > demo)
	    {
	      min = demo;
	      index_ = i;
	    }
	}
    }
  update_x (x_z, slack, x, sol, z_con, c, index_, z);
  return;
}

void
iterator_ (vector < double >&x_z, vector < vector < double > >&slack,
	   vector < vector < double > >&x, vector < double >&sol, double z_con,
	   vector < double >&c)
{
  int z;
  for (int i = 0; i < x_z.size (); i++)
    {
      if (i < n)
	{
	  if (x_z[i] > 0)
	    {
	      z = i;
	      loop (c, x_z, slack, x, sol, z_con, z);
	    }
	  else
	    {
	      i++;
	    }
	}
      else
	{
	  if (x_z[i] > 0)
	    {
	      z = i;
	      loop (c, x_z, slack, x, sol, z_con, z);
	    }
	  else
	    {
	      i++;
	    }
	}
    }
  return;
}

void
switch_ (vector < double >&x_z, vector < vector < double > >&slack,
	 vector < vector < double > >&x, vector < double >&sol, double z_con,
	 vector < double >&c)
{
  char menu;
  cout <<    "enter the\n a- all bfs \n "
  "b -print the initial simplex table\n"
    "c -list of all non-basic solution in intial table\n"
    "d - list of basic variable along with min ratio in the first iteration\n"
    "e- simplex table of the second iteration"
    << endl;
  cin >> menu;
  switch (menu)
    {
    case 'a':
      cout << "BFS" << endl;
      sol.resize (m + n, 0);
      iterator_ (x_z, slack, x, sol, z_con, c);
      break;
    }
  return;
}

int
main (void)
{
  // m=no of constrant
  int z;
  int index_;
  vector < vector < double > >x (n, vector < double >(m, 0));
  vector < double >x_z (n + m, 0);	// z can be writen as in the + non basic variable and slack varible
  vector < vector < double > >slack (m, vector < double >(m, 0));	// slack variable
  vector < double >c (m);	// constant
  vector < double >sol (m + n, 0);
  double z_con = 0;
  cout << "hello babuwolf this is the code for simplex methode " << endl;
  cout << "how many input variable r there" << endl;
  cin >> n;
  cout << "how many constraints eqation are there" << endl;
  cin >> m;
  // x.resize(n, vector<double>(m));
  // x_z.resize(n + m);
  // slack.resize(m, vector<double>(m, 0));
  // c.resize(m);
  slack.resize (m, vector < double >(m, 0));
      for (int j = 0; j < m; j++)
	{
	      slack[j][j] = 1;
	}
  cout <<
    "input the objective eqation the the order of non basic varialbe \n eg: is the variable x1 is not present the objective fn the enter its coffi as 0\n";
  for (int i = 0; i < n + m; i++)
    {
      if (i < n)
	{
	  printf ("input the x(%d) variable coffi\n", i);
	  cin >> x_z[i];
	}
      else
	{
	  x_z[i] = 0;
	}
    }

  cout << "input the constant in your constraints eq\n";
  for (int i = 0; i < m; i++)
    {
      printf ("input the %d const in the %d constraints eq\n", i, i);
      cin >> c[i];
    }
  for (int i = 0; i < n; i++)
    {
      cout <<
	"input the coffi of basic variable in the constraints equation the in order all the x1 then x2 and so on"
	<< endl;
      for (int j = 0; j < m; j++)
	{
	  printf ("input the x%d in the %d constraints eq\n", i, j);
	  cin >> x[i][j];
	}
    }
  cout <<
    "what do you want to do with the obective function i.e. u want to max or min input 1 if Max other wise 0"
    << endl;
  int demo;
  cin >> demo;
  if (demo != 1)
    {
      transform (x_z.begin (), x_z.end (), x_z.begin (), negative);
    }
//   switch_ ();
  switch_ (x_z, slack, x, sol, z_con, c);
  // return;
  return 0;
}

