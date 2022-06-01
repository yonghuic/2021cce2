PImage img, img2;
void setup(){
  size(300, 600);
  img = loadImage("panda.png"); //主角
  img2 = loadImage("bullet.JPG"); //子彈
}
int dy=0; //子彈飛多遠
void draw(){
  background(255);
  imageMode(CENTER);
  image(img, mouseX, mouseY);
  if(mousePressed){
    image(img2, mouseX, mouseY-dy);
    dy++;
  }
}
