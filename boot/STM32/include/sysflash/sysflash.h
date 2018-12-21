/* Manual version of auto-generated version. */

#ifndef __SYSFLASH_H__
#define __SYSFLASH_H__

#include <sys/types.h>
#include <stdint.h>

#define FLASH_AREA_IMAGE_0 1
#define FLASH_AREA_IMAGE_1 2
#define FLASH_AREA_IMAGE_SCRATCH 3

struct flash_area {
	uint8_t fa_id;
	uint8_t fa_device_id;
	uint16_t pad16;
	off_t fa_off;
	size_t fa_size;
};


struct flash_sector {
	off_t fs_off;
	size_t fs_size;
};

#endif /* __SYSFLASH_H__ */
