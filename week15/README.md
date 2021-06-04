### CountDown
```C
import processing.sound.*;
SoundFile player;
void setup()  //設定，只做一次
{
  size(400, 200);
  textSize(40);  //字型大小
  player = new SoundFile(this, "tada.mp3");  //先將mp3拖入視窗
}

void draw()  //畫圖，每秒60次
{
  background(41,109,207);
  int s=second();
  text(9-s%10, 100, 100);  //倒數
}
void mousePressed()
{
  player.play();
}
```
