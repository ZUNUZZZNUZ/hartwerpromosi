#include "Keyboard.h"
//modifikasi atau copas kontak ZUNUZZZ
void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  Keyboard.begin();

  delay(500);

  delay(3500);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1000);
 //modifikasi atau copas kontak ZUNUZZZ 
  Keyboard.print("notepad");
  delay(1000);
  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("ZUNUZZZ...");
  typeKey(KEY_RETURN);

  delay(4000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1000);
//modifikasi atau copas kontak ZUNUZZZ
  Keyboard.print("cmd");
  delay(1000);
  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("https://youtu.be/HdkwwYJ6uGQ?si=8LRLYgX1ijx4SDHC");
  typeKey(KEY_RETURN);
  
  delay(750);

  Keyboard.end();
}

void loop() {}
