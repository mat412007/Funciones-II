void setup(){
  size(600, 600);
  noLoop();
  background(255);
  noStroke();
  int n = 5;
  circulos(n, 300, 300, 250, 240); 
}

void circulos(int n, float x, float y, float r, int c){
    if(n == 0){
        return;
    }
    fill(c);
    circle(x, y, r*2);
    
    circulos(n-1, x-r/2.0, y, r/2.0, c-20);
    circulos(n-1, x+r/2.0, y, r/2.0, c-20);
}