int dlogic (int D)
{
  int S,R,Q=0,NQ=1,CK=1;
  int s,r;
  S=D;
  R=!D;
  s=!(CK&&S);
  r=!(CK&&R);
  Q=!(s&&NQ);
  NQ=!(r&&Q);
  return Q;
}
