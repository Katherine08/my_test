#include <iostream> 
#include <cmath> 
using namespace std; 

int main() { 
  int k; 
  double t,x,eps,S; 
  cin>>x>>eps; 
  t=-x; 
  S=t; 
  printf("%15e,%20.4f\n", t, S);
  k=1; 
  while (fabs(t)>eps) { 
    t*=-pow(x,2)/(2*k*(2*k-1)); 
    S+=t; 
    printf("%15e%20.4f\n", t, S);
    k++;
  }
  cout<<"Summa="<<S;
  return 0; 
}
