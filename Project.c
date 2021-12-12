#include <stdio.h>
#include <unistd.h>
#include "sense.h"

#define WHITE 0xFFFF
#define BLACK 0x0000
#define GREEN 0x7E0
void letterZ(void){
        pi_framebuffer_t *fb=getFrameBuffer();
        sense_fb_bitmap_t *bm=fb->bitmap;
        //top
        bm->pixel[7][0]=WHITE;
        bm->pixel[6][0]=WHITE;
        bm->pixel[5][0]=WHITE;
        bm->pixel[4][0]=WHITE;
        bm->pixel[3][0]=WHITE;
        bm->pixel[2][0]=WHITE;
        bm->pixel[1][0]=WHITE;
        bm->pixel[0][0]=WHITE;
        //middle
        bm->pixel[1][1]=WHITE;
        bm->pixel[2][2]=WHITE;
        bm->pixel[3][3]=WHITE;
        bm->pixel[4][4]=WHITE;
        bm->pixel[5][5]=WHITE;
        bm->pixel[6][6]=WHITE;
        //bottom
        bm->pixel[7][7]=WHITE;
        bm->pixel[6][7]=WHITE;
        bm->pixel[5][7]=WHITE;
        bm->pixel[4][7]=WHITE;
        bm->pixel[3][7]=WHITE;
        bm->pixel[2][7]=WHITE;
        bm->pixel[1][7]=WHITE;
        bm->pixel[0][7]=WHITE;
        sleep(1);
        freeFrameBuffer(fb);
}

void letterB(void){
        pi_framebuffer_t *fb=getFrameBuffer();
        sense_fb_bitmap_t *bm=fb->bitmap;
        //top
        bm->pixel[7][0]=WHITE;
        bm->pixel[6][0]=WHITE;
        bm->pixel[5][0]=WHITE;
        bm->pixel[4][0]=WHITE;
        //middle
        bm->pixel[7][1]=WHITE;
        bm->pixel[7][2]=WHITE;
        bm->pixel[7][3]=WHITE;
        bm->pixel[7][4]=WHITE;
        bm->pixel[7][5]=WHITE;
        bm->pixel[6][3]=WHITE;
        bm->pixel[5][3]=WHITE;
        bm->pixel[4][3]=WHITE;
        bm->pixel[3][1]=WHITE;
        bm->pixel[3][2]=WHITE;
        bm->pixel[3][4]=WHITE;
        bm->pixel[3][5]=WHITE;
        //bottom
        bm->pixel[7][6]=WHITE;
        bm->pixel[6][6]=WHITE;
        bm->pixel[5][6]=WHITE;
        bm->pixel[4][6]=WHITE;
        sleep(1);
        freeFrameBuffer(fb);
}

void clearScreen(void){
        pi_framebuffer_t *fb=getFrameBuffer();
        clearFrameBuffer(fb,BLACK);
        freeFrameBuffer(fb);
}

void cloverDesign(void){
        pi_framebuffer_t *fb=getFrameBuffer();
        sense_fb_bitmap_t *bm=fb->bitmap;
        //top
        bm->pixel[4][0]=GREEN;
        bm->pixel[3][0]=GREEN;
        bm->pixel[2][0]=GREEN;
        //middle
        bm->pixel[6][1]=GREEN;
        bm->pixel[5][1]=GREEN;
        bm->pixel[4][1]=GREEN;
        bm->pixel[3][1]=GREEN;
        bm->pixel[2][1]=GREEN;
        bm->pixel[6][2]=GREEN;
        bm->pixel[5][2]=GREEN;
        bm->pixel[4][2]=GREEN;
        bm->pixel[3][2]=GREEN;
        bm->pixel[2][2]=GREEN;
        bm->pixel[1][2]=GREEN;
        bm->pixel[0][2]=GREEN;
        bm->pixel[6][3]=GREEN;
        bm->pixel[5][3]=GREEN;
        bm->pixel[4][3]=WHITE;
        bm->pixel[3][3]=WHITE;
        bm->pixel[2][3]=GREEN;
        bm->pixel[1][3]=GREEN;
        bm->pixel[0][3]=GREEN;
        bm->pixel[5][4]=GREEN;
        bm->pixel[4][4]=WHITE;
        bm->pixel[3][4]=WHITE;
        bm->pixel[2][4]=GREEN;
        bm->pixel[1][4]=GREEN;
        bm->pixel[0][4]=GREEN;
        bm->pixel[6][5]=GREEN;
        bm->pixel[5][5]=GREEN;
        bm->pixel[4][5]=GREEN;
        bm->pixel[3][5]=GREEN;
        bm->pixel[2][5]=GREEN;
        bm->pixel[6][6]=GREEN;
        bm->pixel[5][6]=GREEN;
        bm->pixel[4][6]=GREEN;
        bm->pixel[3][6]=GREEN;
        bm->pixel[1][6]=GREEN;
        //bottom
        bm->pixel[6][7]=GREEN;
        bm->pixel[5][7]=GREEN;
        bm->pixel[4][7]=GREEN;
        bm->pixel[3][7]=GREEN;
        bm->pixel[0][7]=GREEN;
        sleep(1);
        freeFrameBuffer(fb);
}

int main(void){
        letterZ();
        clearScreen();
        letterB();
        clearScreen();
        cloverDesign();
        clearScreen();
        return 0;
}
