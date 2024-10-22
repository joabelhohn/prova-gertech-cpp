#pragma once

#include <gtkmm.h>
#include <gtk/gtk.h>
#include <glib.h>

using namespace Glib;
using namespace Gtk;

class MainWindow : public Window {
 public:
  MainWindow();
  virtual ~MainWindow();

 protected:
  Gtk::Button button;
  Gtk::VBox container;

  void on_button_clicked();
};