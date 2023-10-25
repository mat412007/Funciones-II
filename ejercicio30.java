void tri(float x, float y, float side){
  triangle(x, y, x+side, y, x+side/2.0, y-sin(radians(60)) * side);
}

void setup(){
  size(600, 600);
  noLoop();
  background(255);
  fill(0);
  sierpinski(10, 20, 580, 500);
}

void sierpinski(int n, float x, float y, float side){
  if(n == 0){
    tri(x, y, side);
  }
  else{
    sierpinski(n-1, x, y, side/2.0);
    sierpinski(n-1, x+side/2.0, y, side/2.0);
    sierpinski(n-1, x+side/4.0, y-sin(radians(60))* (side/2.0), side/2.0);
  }
}