#include <grp.h>
extern int gr_close (void);
extern const struct group *gr_locate (const char *);
extern const struct group *gr_locate_gid (gid_t gid);
extern int gr_lock (void);
extern int gr_name (const char *);
extern const struct group *gr_next (void);
extern int gr_open (int);
extern int gr_remove (const char *);
extern int gr_rewind (void);
extern int gr_unlock (void);
extern int gr_update (const struct group *);
extern int gr_sort (void);