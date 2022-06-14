#ifndef LINUX_KERNEL_API_4_19_81_H_
#define LINUX_KERNEL_API_4_19_81_H_
#include "../ver_control.h"
#if MY_LINUX_VERSION_CODE == KERNEL_VERSION(4,19,81)

long probe_kernel_read(void* dst, const void* src, size_t size);

MY_STATIC long x_probe_kernel_read(void* bounce, const char* ptr, size_t sz) {
	return probe_kernel_read(bounce, ptr, sz);
}

#endif
#endif /* LINUX_KERNEL_API_4_19_81_H_ */


