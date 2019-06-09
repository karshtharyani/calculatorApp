#ifndef WINDOW_H
#define WINDOW_H
#include <gtkmm.h>
#include <iostream>
#include<string>
#include "calcApp.h"

class Window : public Gtk::Window
{
public:
	Window();
	virtual ~Window();

private:
  void onButtonClicked();
  void onClearButton();
  Gtk::Box vBox;
  Gtk::Button appButton, clearButton;
  Gtk::ScrolledWindow scrolledWindow;
  Gtk::TextView textView;
  Glib::RefPtr<Gtk::TextBuffer> textBuffer;
  CalculatorApp calcApp;
};
#endif
