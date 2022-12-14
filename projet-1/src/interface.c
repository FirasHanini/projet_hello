/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_mywindow (void)
{
  GtkWidget *mywindow;
  GtkWidget *fixed1;
  GtkWidget *entrynom;
  GtkWidget *buttonhello;
  GtkWidget *labelnom;
  GtkWidget *labelhello;

  mywindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (mywindow), _("first example"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (mywindow), fixed1);

  entrynom = gtk_entry_new ();
  gtk_widget_show (entrynom);
  gtk_fixed_put (GTK_FIXED (fixed1), entrynom, 136, 40);
  gtk_widget_set_size_request (entrynom, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrynom), 8226);

  buttonhello = gtk_button_new_with_mnemonic (_("say hello"));
  gtk_widget_show (buttonhello);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonhello, 152, 120);
  gtk_widget_set_size_request (buttonhello, 120, 32);

  labelnom = gtk_label_new (_("Votre nom"));
  gtk_widget_show (labelnom);
  gtk_fixed_put (GTK_FIXED (fixed1), labelnom, 24, 48);
  gtk_widget_set_size_request (labelnom, 104, 16);

  labelhello = gtk_label_new ("");
  gtk_widget_show (labelhello);
  gtk_fixed_put (GTK_FIXED (fixed1), labelhello, 168, 257);
  gtk_widget_set_size_request (labelhello, 128, 16);
  gtk_misc_set_alignment (GTK_MISC (labelhello), 0.44, 0.5);
  gtk_misc_set_padding (GTK_MISC (labelhello), 11, 0);

  g_signal_connect ((gpointer) buttonhello, "clicked",
                    G_CALLBACK (on_buttonhello_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mywindow, mywindow, "mywindow");
  GLADE_HOOKUP_OBJECT (mywindow, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (mywindow, entrynom, "entrynom");
  GLADE_HOOKUP_OBJECT (mywindow, buttonhello, "buttonhello");
  GLADE_HOOKUP_OBJECT (mywindow, labelnom, "labelnom");
  GLADE_HOOKUP_OBJECT (mywindow, labelhello, "labelhello");

  return mywindow;
}

