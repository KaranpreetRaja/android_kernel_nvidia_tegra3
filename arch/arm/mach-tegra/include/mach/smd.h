/* arch/arm/mach-tegra/include/mach/smd.h  */

#include <linux/io.h>
#include <linux/notifier.h>

typedef struct smd_channel smd_channel_t;

#define SMD_MAX_CH_NAME_LEN 20 /* includes null char at end */

#define SMD_EVENT_DATA 1
#define SMD_EVENT_OPEN 2
#define SMD_EVENT_CLOSE 3

static inline int smd_open(const char *name, smd_channel_t **ch, void *priv,
	     void (*notify)(void *priv, unsigned event))
{
	return -ENODEV;
}

static inline int smd_close(smd_channel_t *ch)
{
	return -ENODEV;
}

static inline int smd_read(smd_channel_t *ch, void *data, int len)
{
	return -ENODEV;
}

static inline int smd_write(smd_channel_t *ch, const void *data, int len)
{
	return -ENODEV;
}

static inline int smd_write_avail(smd_channel_t *ch)
{
	return -ENODEV;
}

static inline int smd_read_avail(smd_channel_t *ch)
{
	return -ENODEV;
}

static inline int
smd_named_open_on_edge(const char *name, uint32_t edge, smd_channel_t **_ch,
			   void *priv, void (*notify)(void *, unsigned))
{
	return -ENODEV;
}

static inline void smd_disable_read_intr(smd_channel_t *ch)
{
}
