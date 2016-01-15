/*
 * grayscaleh.h
 *
 *  Created on: Jan 14, 2016
 *      Author: Peachy
 */

#ifndef GRAYSCALEH_H_
#define GRAYSCALEH_H_

#include <stdio.h>
#include <stdlib.h>


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


#endif /* GRAYSCALEH_H_ */
