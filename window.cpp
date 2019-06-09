#include "window.h"
Window::Window() : appButton("_button", true), clearButton("_clear", true) {
  set_title("Calculator");
  set_border_width(10);
  set_default_size(400, 200);

  appButton.signal_clicked().connect(
      sigc::mem_fun(*this, &Window::onButtonClicked));

  clearButton.signal_clicked().connect(
      sigc::mem_fun(*this, &Window::onClearButton));

  add(vBox);

  scrolledWindow.add(textView);
  scrolledWindow.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
  vBox.pack_start(scrolledWindow);
  vBox.pack_start(appButton, Gtk::PACK_SHRINK);
  vBox.pack_start(clearButton, Gtk::PACK_SHRINK);

  show_all_children();
}

void Window::onButtonClicked() {
  textBuffer = textView.get_buffer();
  try {
    double x = std::stof(textBuffer->get_text());
    calcApp.setValue(x);
    std::cout << calcApp.computeResult() << std::endl;
  } catch (const std::invalid_argument &ia) {
    std::cerr << "Invalid Argument ! " << std::endl;
  } catch (const std::out_of_range &oor) {
    std::cerr << "Out of Range! " << std::endl;
  }
}

void Window::onClearButton() {
  textBuffer = textView.get_buffer();
  textBuffer->set_text("");
}

Window::~Window() {}
