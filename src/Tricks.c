/**************************  enum and string map uniform with C macro  ********************************/
/** c macro split then connect,and string macro */
#define EVENT_STATE_ENUM(state)   EVENT_##state
#define EVENT_STATE_STR(state)    #state

/**event state table*/
#define EVENT_STATE_TABLE(entry) \
	entry(CLOSED = 0),\
	entry(DNS_RESOLVING),\
	entry(CTRL_CONNECT),\
	entry(QUIT_SENT),\
	entry(CLOSING),\
	entry(STATE_UNKNOWN),\
	entry(STATE_NUM),\
	entry(STATE_MAX = 0xFFFFFFFF)


/** event state enum */
typedef enum _EVENT_STATE_E
{
  EVENT_STATE_TABLE(EVENT_STATE_ENUM)
}EVENT_STATE_E;

/** event state string map */
static const char *s_pEventStateStrMap[] = {
	EVENT_STATE_TABLE(EVENT_STATE_TABLE)
};


/**************************  TOD  ********************************/
