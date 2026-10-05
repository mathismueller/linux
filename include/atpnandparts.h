#ifndef _ATPNANDPARTS_H
#define _ATPNANDPARTS_H

#include <linux/mtd/mtd.h>
#include <linux/mtd/partitions.h>
#include <mach/hi_flash.h>

#define HI_TYPE_SINGLE   0
#define HI_TYPE_DOUBLE   1
#define MAIN_ACTIVE      0
#define SLAVE_ACTIVE     1

#define FLASH_INFO_SIZE  (sizeof(hi_mtd_s) * HI_MAX_MTD_NR)

extern int hi_setup_mtd_partitions(struct mtd_info *mtd,
                                   const unsigned char *puc_boot_param,
                                   struct mtd_partition **ppst_parts,
                                   unsigned int *pui_mtd_num);

static inline int atp_setup_mtd_partitions(struct mtd_info *mtd,
                                          const unsigned char *puc_boot_param,
                                          unsigned int ui_active_sys,
                                          struct mtd_partition **ppst_parts,
                                          int *pi_nparts)
{
    unsigned int nparts = 0;
    int ret = hi_setup_mtd_partitions(mtd, puc_boot_param, ppst_parts, &nparts);
    if (pi_nparts)
        *pi_nparts = (int)nparts;
    return ret;
}

#endif /* _ATPNANDPARTS_H */
