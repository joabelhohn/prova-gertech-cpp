#include "main_window.h"

MainWindow::MainWindow() : Gtk::Window() {

	add(container);

	button.set_label("Botão");
	button.set_size_request(300, 50);
	button.signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_clicked));
	
	container.set_halign(ALIGN_CENTER);
	container.set_valign(ALIGN_CENTER);
	container.pack_start(button, true, true, 8);

	//set_decorated(false);
	//set_resizable(false);
	set_title("Gertech - Exemplo C++/Gtk/Gtkmm");
	set_default_size(1024, 600);
	set_position(Gtk::WindowPosition::WIN_POS_CENTER_ALWAYS);
	show_all();

}

MainWindow::~MainWindow() {}

void MainWindow::on_button_clicked() {
	//
}
