/*
 * flash_api.c
 *
 *  Created on: 21 déc. 2018
 *      Author: thomas
 */

#include <stdint.h>
#include <flash_map_backend/flash_map_backend.h>

int flash_area_open(uint8_t id, const struct flash_area ** area)
{
	return 0;
}

void flash_area_close(const struct flash_area * area)
{

}

int flash_area_read(const struct flash_area * area, uint32_t off, void *dst, int32_t len)
{
	return 0;
}

int flash_area_write(const struct flash_area * area, uint32_t off, const void *src, uint32_t len)
{
	return 0;
}

int flash_area_erase(const struct flash_area * area, uint32_t off, uint32_t len)
{
	return 0;
}

uint8_t flash_area_align(const struct flash_area * area)
{
	return 0;
}

int flash_area_to_sectors(int idx, int *cnt, struct flash_area *ret)
{
	return 0;
}

/*int flash_area_id_from_image_slot(int slot)
{
	return 0;
}*/

int flash_area_id_to_image_slot(int area_id)
{
	return 0;
}
