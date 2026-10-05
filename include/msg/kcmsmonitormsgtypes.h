#ifndef _KCMSMONITORMSGTYPES_H
#define _KCMSMONITORMSGTYPES_H

#define ATP_MSG_MONITOR_EVT_COREDUMP_FINISH 0
#define ATP_MSG_MONITOR_EVT_USBSTORAGE_PLUGIN 1
#define ATP_MSG_MONITOR_EVT_USBSTORAGE_PLUGOUT 2
#define ATP_MSG_MONITOR_EVT_IPP_START 3
#define ATP_MSG_MONITOR_EVT_IPP_STOP 4

static inline int ATP_Netlink_SendToUserspace(int msg, const void *data, int len)
{
	return 0;
}

static inline int syswatch_nl_send(int msg, const void *data, int len)
{
	return 0;
}

#endif
