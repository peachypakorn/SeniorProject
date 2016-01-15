/*
 * grayscale.cpp
 *
 *  Created on: Jan 14, 2016
 *      Author: Peachy
 */

#include "grayscaleh.h"

typedef unsigned char luminance;
typedef luminance pixel1[1];
typedef struct {
   unsigned int width;
   unsigned int height;
   luminance *buf;
} grayimage_t;
typedef grayimage_t *grayimage;

grayimage alloc_grayimg(unsigned int, unsigned int);
grayimage tograyscale(image);
image tocolor(grayimage);

Grayscale::Grayscale() {
	// TODO Auto-generated constructor stub

}

Grayscale::~Grayscale() {
	// TODO Auto-generated destructor stub
}

