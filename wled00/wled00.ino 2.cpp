# 1 "/var/folders/8m/71f_87sj1f9ggm2prdxvg93c0000gn/T/tmp6xkyzz9w"
#include <Arduino.h>
# 1 "/Users/williammeister/Documents/GitHub/WLED/wled00/wled00.ino"
# 13 "/Users/williammeister/Documents/GitHub/WLED/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "/Users/williammeister/Documents/GitHub/WLED/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}