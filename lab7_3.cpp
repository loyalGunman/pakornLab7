int adiff(int a,int b){
  int c;
  a %= 360,b %= 360;
  if (a<0){a += 360;}
  if (b<0){b += 360;}
  if (a>b){c = a-b;}
  else{c = b-a;}
  if (c > 180){
      c = 360-c;
  }
  return c;
}