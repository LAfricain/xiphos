#ifndef _GUI_H_
#define _GUI_H_

void gui_init(int argc, char *argv[]);
void gui_main(void);

#ifdef DEBUG

gchar *XI_g_strdup_printf(const char *filename,
			  int linenumber,
			  const char *format,
			  ...) G_GNUC_PRINTF(3, 4) G_GNUC_MALLOC;

void XI_g_string_printf(const char *filename,
			int linenumber,
			GString *string,
			const char *format, ...) G_GNUC_PRINTF(4, 5);

#endif /* DEBUG */

#endif
