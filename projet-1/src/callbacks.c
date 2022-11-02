#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "greeting.h"

void on_buttonhello_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
	GtkWidget* input ;
	GtkWidget*output ;
	char nom[20],hello[27];
	input = lookup_widget(objet_graphique, "entrynom") ;
	output = lookup_widget(objet_graphique, "labelhello") ;
	strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input)));
	sayhello(nom, hello);
	gtk_label_set_text(GTK_LABEL(output),hello);
}

