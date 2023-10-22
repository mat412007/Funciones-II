float turtleX, turtleY;  // Posición de la tortuga
float angle;            // Dirección de la tortuga en grados
float stepSize = 10;    // Tamaño del paso de la tortuga

void setup() {
  size(400, 400);
  background(255);
  resetTurtle();
}

void turtle(char command) {
  switch(command) {
    case 'F':
      float newX = turtleX + cos(radians(angle)) * stepSize;
      float newY = turtleY + sin(radians(angle)) * stepSize;
      line(turtleX, turtleY, newX, newY);
      turtleX = newX;
      turtleY = newY;
      break;
    case 'L':
      rotateTurtle(-90);
      break;
    case 'R':
      rotateTurtle(90);
      break;
  }
}

void rotateTurtle(int rotateAngle) {
  angle += rotateAngle;
}

void resetTurtle() {
  turtleX = width / 2;
  turtleY = height / 2;
  angle = 0;
}

// Ejemplo de uso en el mousePressed
void mousePressed() {
  turtle('F');
  turtle('R');
  turtle('F');
  turtle('L');
  turtle('F');
}