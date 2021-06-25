### 視訊
```C
import processing.video.*;
Capture cam;    //global全域變數
void setup()
{
  size(640, 480);
  println(Capture.list());
  cam = new Capture(this, "HD WebCam");  //初始設定
  cam.start();  //開啟webcam
}
void draw()
{
  if(cam.available()) cam.read();  //如果有視訊鏡頭，則讀取
  set (0, 0, cam);
}
```
