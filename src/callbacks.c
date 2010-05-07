#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"


void
on_top1_activate                       (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
 // az ertekek a csuszkak felett legyenek
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 vizszintes = lookup_widget (GTK_WIDGET (menuitem), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (menuitem), "vscale1");
 gtk_scale_set_value_pos (GTK_SCALE(vizszintes), GTK_POS_TOP);
 gtk_scale_set_value_pos (GTK_SCALE(fuggoleges), GTK_POS_TOP);
}


void
on_bottom1_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
 // az ertekek a csuszkak alatt legyenek
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 vizszintes = lookup_widget (GTK_WIDGET (menuitem), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (menuitem), "vscale1");
 gtk_scale_set_value_pos (GTK_SCALE(vizszintes), GTK_POS_BOTTOM);
 gtk_scale_set_value_pos (GTK_SCALE(fuggoleges), GTK_POS_BOTTOM);
}


void
on_left1_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
 // az ertekek a csuszkaktol balra legyenek
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 vizszintes = lookup_widget (GTK_WIDGET (menuitem), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (menuitem), "vscale1");
 gtk_scale_set_value_pos (GTK_SCALE(vizszintes), GTK_POS_LEFT);
 gtk_scale_set_value_pos (GTK_SCALE(fuggoleges), GTK_POS_LEFT);
}


void
on_right1_activate                     (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
 // az ertekek a csuszkaktol jobbra legyenek
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 vizszintes = lookup_widget (GTK_WIDGET (menuitem), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (menuitem), "vscale1");
 gtk_scale_set_value_pos (GTK_SCALE(vizszintes), GTK_POS_RIGHT);
 gtk_scale_set_value_pos (GTK_SCALE(fuggoleges), GTK_POS_RIGHT);
}


void
on_cont1_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
 // az ertekek a megjelenitese folyamatos
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 GtkWidget * gordulosav;
 vizszintes = lookup_widget (GTK_WIDGET (menuitem), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (menuitem), "vscale1");
 gordulosav = lookup_widget (GTK_WIDGET (menuitem), "hscrollbar1");
 gtk_range_set_update_policy (GTK_RANGE(vizszintes), GTK_UPDATE_CONTINUOUS);
 gtk_range_set_update_policy (GTK_RANGE(fuggoleges), GTK_UPDATE_CONTINUOUS);
 gtk_range_set_update_policy (GTK_RANGE(gordulosav), GTK_UPDATE_CONTINUOUS);
}


void
on_discont1_activate                   (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
 // az ertekek a megjelenitese nem folyamatos
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 GtkWidget * gordulosav;
 vizszintes = lookup_widget (GTK_WIDGET (menuitem), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (menuitem), "vscale1");
 gordulosav = lookup_widget (GTK_WIDGET (menuitem), "hscrollbar1");
 gtk_range_set_update_policy (GTK_RANGE(vizszintes), GTK_UPDATE_DISCONTINUOUS);
 gtk_range_set_update_policy (GTK_RANGE(fuggoleges), GTK_UPDATE_DISCONTINUOUS);
 gtk_range_set_update_policy (GTK_RANGE(gordulosav), GTK_UPDATE_DISCONTINUOUS);
}


void
on_delay1_activate                     (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
 // az ertekek a megjelenitese kesleltetett
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 GtkWidget * gordulosav;
 vizszintes = lookup_widget (GTK_WIDGET (menuitem), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (menuitem), "vscale1");
 gordulosav = lookup_widget (GTK_WIDGET (menuitem), "hscrollbar1");
 gtk_range_set_update_policy (GTK_RANGE(vizszintes), GTK_UPDATE_DELAYED);
 gtk_range_set_update_policy (GTK_RANGE(fuggoleges), GTK_UPDATE_DELAYED);
 gtk_range_set_update_policy (GTK_RANGE(gordulosav), GTK_UPDATE_DELAYED);
}


void
on_btnQuit_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
 g_print ("Bye-bye...");
 gtk_main_quit ();
}


void
on_window1_destroy                     (GtkObject       *object,
                                        gpointer         user_data)
{
 gtk_main_quit ();
}

void
on_hscale3_value_changed               (GtkRange        *range,
                                        gpointer         user_data)
{
 // ha megvaltozik a vizszintes csuszka erteke
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 GtkWidget * gorditosav;
 vizszintes = lookup_widget (GTK_WIDGET (range), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (range), "vscale1");
 gorditosav = lookup_widget (GTK_WIDGET (range), "hscrollbar1");
 gtk_range_set_value (GTK_RANGE(fuggoleges), gtk_range_get_value (GTK_RANGE(vizszintes)));
 gtk_range_set_value (GTK_RANGE(gorditosav), gtk_range_get_value (GTK_RANGE(vizszintes)));
}

void
on_hscrollbar1_value_changed           (GtkRange        *range,
                                        gpointer         user_data)
{
 // ha megvaltozik a vizszintes gorditosav erteke
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 GtkWidget * gorditosav;
 vizszintes = lookup_widget (GTK_WIDGET (range), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (range), "vscale1");
 gorditosav = lookup_widget (GTK_WIDGET (range), "hscrollbar1");
 gtk_range_set_value (GTK_RANGE(fuggoleges), gtk_range_get_value (GTK_RANGE(gorditosav)));
 gtk_range_set_value (GTK_RANGE(vizszintes), gtk_range_get_value (GTK_RANGE(gorditosav)));
}


void
on_vscale1_value_changed               (GtkRange        *range,
                                        gpointer         user_data)
{
 // ha megvaltozik a fuggoleges csuszka erteke
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 GtkWidget * gorditosav;
 vizszintes = lookup_widget (GTK_WIDGET (range), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (range), "vscale1");
 gorditosav = lookup_widget (GTK_WIDGET (range), "hscrollbar1");
 gtk_range_set_value (GTK_RANGE(vizszintes), gtk_range_get_value (GTK_RANGE(fuggoleges)));
 gtk_range_set_value (GTK_RANGE(gorditosav), gtk_range_get_value (GTK_RANGE(fuggoleges)));

}

void
on_checkbutton1_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
 GtkWidget * jelolonegyzet;
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 vizszintes = lookup_widget (GTK_WIDGET (togglebutton), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (togglebutton), "vscale1");
 jelolonegyzet = lookup_widget (GTK_WIDGET(togglebutton), "checkbutton1");
 // ha bekapcsoljak a jelolonegyzetet, megmutatjuk a csuszkak ertekeit
 if (gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON(jelolonegyzet)) == TRUE) {
  gtk_scale_set_draw_value (GTK_SCALE(vizszintes), TRUE);
  gtk_scale_set_draw_value (GTK_SCALE(fuggoleges), TRUE);
 }
 else { // ellenben eltuntetjuk oket
  gtk_scale_set_draw_value (GTK_SCALE(vizszintes), FALSE);
  gtk_scale_set_draw_value (GTK_SCALE(fuggoleges), FALSE);
 }
}

void
on_hscale2_value_changed               (GtkRange        *range,
                                        gpointer         user_data)
{
 // beallitjuk a lathato szamjegyek szamat
 GtkWidget * szamjegyek;
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 szamjegyek = lookup_widget (GTK_WIDGET(range), "hscale2");
 vizszintes = lookup_widget (GTK_WIDGET (range), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (range), "vscale1");
 gtk_scale_set_digits (GTK_SCALE(vizszintes), gtk_range_get_value (GTK_RANGE(szamjegyek)));
 gtk_scale_set_digits (GTK_SCALE(fuggoleges), gtk_range_get_value (GTK_RANGE(szamjegyek)));
}

void
on_hscale1_value_changed               (GtkRange        *range,
                                        gpointer         user_data)
{
 // beallitjuk a "page size" erteket:
 GtkWidget * pagesize;
 GtkWidget * vizszintes;
 GtkWidget * fuggoleges;
 GtkWidget * gorditosav;
 gdouble Ertek;
 pagesize = lookup_widget (GTK_WIDGET(range), "hscale2");
 vizszintes = lookup_widget (GTK_WIDGET (range), "hscale3");
 fuggoleges = lookup_widget (GTK_WIDGET (range), "vscale1");
 gorditosav = lookup_widget (GTK_WIDGET (range), "hscrollbar1");
 Ertek = gtk_range_get_value (GTK_RANGE(pagesize));
 gtk_range_set_increments (GTK_RANGE (vizszintes), Ertek, Ertek);
 gtk_range_set_increments (GTK_RANGE (fuggoleges), Ertek, Ertek);
 gtk_range_set_increments (GTK_RANGE (gorditosav), Ertek, Ertek);
	

}
