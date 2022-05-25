void setup()
{
  size(300, 300);
  fill(#F5527D);
  textSize(50);
  textAlign(CENTER, CENTER);
}
int choice = -1;
void draw()
{
  background(#99ccff);
  text("Dinner1", 150, 50);
  text("Dinner2", 150, 150);
  text("Dinner3", 150, 250);
  if(choice==0) ellipse(30,  50, 50, 50);
  if(choice==1) ellipse(30, 150, 50, 50);
  if(choice==2) ellipse(30, 250, 50, 50);
}
void mousePressed(){
  choice = int( random(3) );
}
