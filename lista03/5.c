int main() {
  
  
  unsigned size;
  scanf("%u", &size);
  int *vec = malloc(size*sizeof(int));
  for(int i = 0; i<size; i++) {
    scanf("%d", vec+i);
  }
  
  
  int *aux = malloc(size*sizeof(int));
  for(int i = 0; i<size; i++) {
    aux[i] = 1;
    for(int j = i+1; j<size; j++) {
      if(vec[j]==vec[i]) aux[i]++;
    }
  }
  
  
  for(int i = 0; i<size; i++) {
    int repeated = 0;
    if(aux[i]>1) {
      for(int j = 0; j<i; j++) {
        if(vec[i]==vec[j]){
          repeated = 1;
          break;
          
        }
      }
      if(repeated==0) {
        printf("%d-%d ", vec[i], aux[i]);
      }
    }
  }
  printf("\n");

  return 0;
}


