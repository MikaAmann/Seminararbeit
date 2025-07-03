extern unsigned __VERIFIER_nondet_uint();
int main() {
  unsigned n =  __VERIFIER_nondet_uint();
  unsigned x =  __VERIFIER_nondet_uint();
  unsigned y = 0;
  while(x > n) {
    x--; n++;
    y = n - x;
  }
  return 0;
}

int x = input(); //Abstraktion => x ist "irgendein" Wert
if (x > 100) {
  int y = 1 / (x - 100);
}

