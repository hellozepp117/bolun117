param n>=0, integer;
param m>=0, integer;


set I =1..n ;
set J =1..m ;

var x  {j in J}         , binary ;
var y  {i in I, j in J}  >=0     ;


param h {I}                      ;
param c {i in I, j in J}         ;
param p {j in J}                 ;
param d {j in J}                 ;

subject to demandsatisfy {i in I}         : sum{j in J} y[i,j]    =  1                      ;
subject to logic         {i in I, j in J} : x[j]  >=  y[i,j]                                ;





minimize cost: sum {i in I, j in J} ( c[i,j] + d[j] ) * h[i] * y[i,j]  ;