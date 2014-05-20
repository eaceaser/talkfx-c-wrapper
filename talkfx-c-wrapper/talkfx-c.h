#pragma once

#include "ROCCAT_Talk.h"

extern "C" {
  __declspec(dllexport) CROCCAT_Talk* newRoccatTalkHandle();
  __declspec(dllexport) void destroyRoccatTalkHandle(CROCCAT_Talk* handle);

  __declspec(dllexport) BOOL init_ryos_talk(CROCCAT_Talk* handle);
	/* take control of a connected Ryos MK PRO keyboard */
  __declspec(dllexport) BOOL set_ryos_kb_SDKmode(CROCCAT_Talk* handle, BOOL state);
	/* basic Ryos MK PRO LED control methods */
  __declspec(dllexport) void turn_off_all_LEDS(CROCCAT_Talk* handle);
  __declspec(dllexport) void turn_on_all_LEDS(CROCCAT_Talk* handle);
	
	/* turn on/off a single LED at specified position */
  __declspec(dllexport) void set_LED_on(CROCCAT_Talk* handle, BYTE ucPos);
  __declspec(dllexport) void set_LED_off(CROCCAT_Talk* handle, BYTE ucPos);
	
	/* send a whole array as a frame to the keyboard (manipulate mulitple LEDS)*/
  __declspec(dllexport) void Set_all_LEDS(CROCCAT_Talk* handle, BYTE *ucLED);
	
	/* simple blinking effect on Ryos MK PRO */
  __declspec(dllexport) void All_Key_Blinking(CROCCAT_Talk* handle, int DelayTime, int LoopTimes);
	
	/* TALK FX method -- set specified zone to effect and RGB colour */
  __declspec(dllexport) void Set_LED_RGB(CROCCAT_Talk* handle, BYTE bZone, BYTE bEffect, BYTE bSpeed,BYTE colorR, BYTE colorG, BYTE colorB);
	
	/* TALK FX method -- restore user LED colour at end of program */
  __declspec(dllexport) void RestoreLEDRGB(CROCCAT_Talk* handle);
}
