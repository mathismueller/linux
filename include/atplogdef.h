#ifndef _ATPLOGDEF_H
#define _ATPLOGDEF_H

#define ATP_LOG_TYPE_DAD 0
#define ATP_LOG_LEVEL_WARNING 0

static inline int syswatch_sendLog(int type, int level, int flag, const char *buf)
{
	return 0;
}

#endif /* _ATPLOGDEF_H */
