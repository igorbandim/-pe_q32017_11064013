#include <stdio.h>
#include <math.h>

float tempConvert(int typeFrom, int typeTo, float t);
unsigned binConvert(int typeFrom, int typeTo, unsigned x);
unsigned binToInt(unsigned b);
unsigned intToBinary(unsigned k);


int main() {
  int op, typeFrom, typeTo;
  float x;
  scanf("%d %d %d %f", &op, &typeFrom, &typeTo, &x);
  if(op==1) {
    char type;
    if(typeTo == 1) type = 'C';
    if(typeTo == 2) type = 'F';
    printf("%.2f %c\n", tempConvert(typeFrom, typeTo, x), type);
  } else {
    printf("%d\n", binConvert(typeFrom, typeTo, (unsigned)x));
  }
  return 0;
}

float tempConvert(int typeFrom, int typeTo, float t) {
  float c;
  switch(typeFrom) {
    case 1:
      c = t;
      break;
    case 2:
      c = (t-32)/(1.8);
      break;
    case 3:
      c = t-273;
      break;
    default:
      c = t;
      break;
  }
  switch(typeTo) {
    case 1:
      break;
    case 2:
      c = c*(1.8)+32;
      break;
    case 3:
      c = c + 273;
      break;
    default:
      break;
  }

  return c;
}

unsigned binConvert(int typeFrom, int typeTo, unsigned x) {
  unsigned r;
    switch(typeFrom) {
      case 1:
        r = x;
        break;
      case 2:
        r = binToInt(x);
        break;
      default:
        r = x;
        break;
    }
    switch(typeTo) {
      case 1:
        break;
      case 2:
        r = intToBinary(r);
      default:
        break;
    }
    return r;
}

unsigned intToBinary(unsigned k) {
    if (k == 0) return 0;
    return (k % 2) + 10 * intToBinary(k / 2);
}

unsigned binToInt(unsigned b) {
    static int i = 0;
    if(b == 0) return 0;
    float a = pow(2,i);
    i++;
    return (b%10)*a + binToInt(b/10);
}