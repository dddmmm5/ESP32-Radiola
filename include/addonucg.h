/******************************************************************************
 * 
 * Copyright 2018 karawin (http://www.karawin.fr)
 * Modified for ESP32-Radiola 2019 SinglWolf (https://serverdoma.ru)
 *
 *******************************************************************************/
#ifndef ADDONUCG_H_
#define ADDONUCG_H_

void setfont(int size);
void playingUcg();
void namesetUcg(char* ici);
void statusUcg(const char* label);
void icy0Ucg(char* ici);
void icy4Ucg(char* ici);
void metaUcg(char* ici);
char* getNameNumUcg();
void scrollUcg();
void drawFrameUcg(uint8_t mTscreen);
void drawTTitleUcg(char* ttitle);
void drawNumberUcg(uint8_t mTscreen,char* irStr);
void drawStationUcg(uint8_t mTscreen,char* snum,char* ddot);
//void drawVolumeUcg(uint8_t mTscreen,char* aVolume);
void drawVolumeUcg(uint8_t mTscreen);
void drawTimeUcg(uint8_t mTscreen,unsigned timein);
void lcd_initUcg();
void setVolumeUcg(uint16_t vol);
void drawLinesUcg();
void removeUtf8(char *characters);


#endif /* ADDONUCG_H_ */