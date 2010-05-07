#include <gtk/gtk.h>


void
on_top1_activate                       (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_bottom1_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_left1_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_right1_activate                     (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_cont1_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_discont1_activate                   (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_delay1_activate                     (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_btnQuit_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_window1_destroy                     (GtkObject       *object,
                                         gpointer         user_data);

void
on_hscale3_value_changed               (GtkRange        *range,
                                        gpointer         user_data);

void
on_hscrollbar1_value_changed           (GtkRange        *range,
                                        gpointer         user_data);

void
on_vscale1_value_changed               (GtkRange        *range,
                                        gpointer         user_data);

void
on_checkbutton1_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_hscale2_value_changed               (GtkRange        *range,
                                        gpointer         user_data);

void
on_hscale1_value_changed               (GtkRange        *range,
                                        gpointer         user_data);
