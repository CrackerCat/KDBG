#ifndef _IOCTRL_H
#define _IOCTRL_H

#include "global.h"
#include "undoc.h"

#define KDRV_CTRL_DEBUG_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0100, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

#define KDRV_CTRL_DUMP_KERNEL_IMAGE_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0200, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)
#define KDRV_CTRL_DUMP_USER_IMAGE_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0201, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)

#define KDRV_CTRL_READ_KERNEL_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0300, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)
#define KDRV_CTRL_WRITE_KERNEL_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0301, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)

#define KDRV_CTRL_READ_USER_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0400, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)
#define KDRV_CTRL_WRITE_USER_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0401, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)

#define KDRV_CTRL_MEMORY_SCAN_KERNEL_REQEUST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0500, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)
#define KDRV_CTRL_MEMORY_SCAN_USER_REQEUST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0501, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)

#define KDRV_CTRL_THREAD_SUSPEND_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0600, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)
#define KDRV_CTRL_THREAD_RESUME_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0601, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)

typedef struct _KDRV_DUMP_KERNEL_IMAGE_REQUEST
{
  PRTL_PROCESS_MODULES Images;
  ULONG Size;
} KDRV_DUMP_KERNEL_IMAGE_REQUEST, * PKDRV_DUMP_KERNEL_IMAGE_REQUEST;
typedef struct _KDRV_DUMP_USER_IMAGE_REQUEST
{
  PSYSTEM_PROCESS_INFORMATION Images;
  ULONG Size;
} KDRV_DUMP_USER_IMAGE_REQUEST, * PKDRV_DUMP_USER_IMAGE_REQUEST;

typedef struct _KDRV_READ_KERNEL_REQUEST
{
  PCHAR ImageName;
  PCHAR ExportName;
  PBYTE Buffer;
  ULONG Offset;
  ULONG Size;
} KDRV_READ_KERNEL_REQUEST, * PKDRV_READ_KERNEL_REQUEST;
typedef struct _KDRV_WRITE_KERNEL_REQUEST
{
  PCHAR ImageName;
  PCHAR ExportName;
  PBYTE Buffer;
  ULONG Offset;
  ULONG Size;
} KDRV_WRITE_KERNEL_REQUEST, * PKDRV_WRITE_KERNEL_REQUEST;

typedef struct _KDRV_READ_USER_REQUEST
{
  ULONG Pid;
  PWCHAR ModuleName;
  PBYTE Buffer;
  ULONG Offset;
  ULONG Size;
} KDRV_READ_USER_REQUEST, * PKDRV_READ_USER_REQUEST;
typedef struct _KDRV_WRITE_USER_REQUEST
{
  ULONG Pid;
  PWCHAR ModuleName;
  PBYTE Buffer;
  ULONG Offset;
  ULONG Size;
} KDRV_WRITE_USER_REQUEST, * PKDRV_WRITE_USER_REQUEST;

typedef struct _KDRV_MEMORY_SCAN_KERNEL_REQEUST
{
  ULONG Pid;
  PBYTE Pattern;
} KDRV_MEMORY_SCAN_KERNEL_REQEUST, * PKDRV_MEMORY_SCAN_KERNEL_REQEUST;
typedef struct _KDRV_MEMORY_SCAN_USER_REQEUST
{
  ULONG Pid;
  PBYTE Pattern;
} KDRV_MEMORY_SCAN_USER_REQEUST, * PKDRV_MEMORY_SCAN_USER_REQEUST;

typedef struct _KDRV_THREAD_SUSPEND_REQUEST
{
  ULONG Pid;
} KDRV_THREAD_SUSPEND_REQUEST, * PKDRV_THREAD_SUSPEND_REQUEST;
typedef struct _KDRV_THREAD_RESUME_REQUEST
{
  ULONG Pid;
} KDRV_THREAD_RESUME_REQUEST, * PKDRV_THREAD_RESUME_REQUEST;

#endif