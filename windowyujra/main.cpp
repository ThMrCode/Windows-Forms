#include <ctime>
#include "utils.h"
#include "MyForm.h"
#include "MainForm.h"

using namespace System::Windows::Forms;
using namespace windowyujra;

int main() {
	srand(time(NULL));
	// A�adir los Usuarios y Claves
	Administrator^ software = gcnew Administrator();
	software->push("Usuario", "Clave");
	software->push("curso", "mb545");
	Application::EnableVisualStyles();
	Application::Run(gcnew windowyujra::MyForm(software));
	return 0;
}