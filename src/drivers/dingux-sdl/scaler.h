

#include "../../types.h"

void upscale_320x240(uint32 *dst, uint8 *src); 
void upscale_384x240(uint32 *dst, uint8 *src);
void upscale_384x272(uint32 *dst, uint8 *src);
void upscale_480x272(uint32 *dst, uint8 *src);
void upscale_320x240_bilinearish_clip(uint32_t* dst, uint8 *src, int width);
void upscale_320x240_bilinearish_noclip(uint32_t* dst, uint8 *src, int width);
extern  void upscale_256_to_288(uint16_t* dst, int dst_width, uint8* src, int src_height);
extern  void upscale_256_to_320(uint16_t* dst, int dst_width, uint8* src, int src_height);
extern  void upscale_256_to_320_filter(uint16_t* dst, int dst_width, uint8* src, int src_height);
extern  void upscale_256_to_288_filter(uint16_t* dst, int dst_width, uint8* src, int src_height);
