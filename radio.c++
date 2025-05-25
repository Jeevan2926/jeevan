#include <QApplication>
#include <QWidget>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Radio Button Example");

    QVBoxLayout *layout = new QVBoxLayout(&window);

    QRadioButton *rb1 = new QRadioButton("Option 1");
    QRadioButton *rb2 = new QRadioButton("Option 2");
    QRadioButton *rb3 = new QRadioButton("Option 3");

    QLabel *label = new QLabel("Select an option");

    layout->addWidget(rb1);
    layout->addWidget(rb2);
    layout->addWidget(rb3);
    layout->addWidget(label);

    QObject::connect(rb1, &QRadioButton::toggled, [&](bool checked){
        if (checked) label->setText("You selected Option 1");
    });
    QObject::connect(rb2, &QRadioButton::toggled, [&](bool checked){
        if (checked) label->setText("You selected Option 2");
    });
    QObject::connect(rb3, &QRadioButton::toggled, [&](bool checked){
        if (checked) label->setText("You selected Option 3");
    });

    window.show();

    return app.exec();
}
