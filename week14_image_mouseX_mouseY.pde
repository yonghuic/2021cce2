PImage img;
void setup(){
  size(600, 600);
  img = loadImage("panda.png");
}

void draw(){
  image(img, mouseX, mouseY);
}
