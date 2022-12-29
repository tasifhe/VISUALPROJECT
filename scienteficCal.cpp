#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  // Create the main window
  QWidget window;
  window.setWindowTitle("Calculator");

  // Create the layout
  QVBoxLayout *layout = new QVBoxLayout;

  // Create the display label
  QLabel *display = new QLabel;
  display->setText("0");
  display->setAlignment(Qt::AlignRight);
  display->setFont(QFont("Arial", 24));
  layout->addWidget(display);

  // Create the input line edit
  QLineEdit *input = new QLineEdit;
  input->setFont(QFont("Arial", 24));
  layout->addWidget(input);

  // Create the buttons
  QPushButton *button1 = new QPushButton;
  button1->setText("1");
  button1->setFont(QFont("Arial", 24));
  layout->addWidget(button1);

  QPushButton *button2 = new QPushButton;
  button2->setText("2");
  button2->setFont(QFont("Arial", 24));
  layout->addWidget(button2);

  // Add the layout to the main window
  window.setLayout(layout);

  // Show the window
  window.show();

  return app.exec();
}