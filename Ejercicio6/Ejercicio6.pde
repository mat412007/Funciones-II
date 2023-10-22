void setup(){
    size(400, 400);
    int n = 8;
    if(n % 4 != 0) exit();
    color(255);
    fill(0);

    translate(200, 200);
    for(int i = 0; i < n; i += 4){
        rotate(radians(360.0/n));
        rect(0, 0, 100, 100);
    }
    rect(0, 0, 100, 100);
}
