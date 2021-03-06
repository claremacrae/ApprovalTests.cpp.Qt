#ifndef APPROVALTESTS_CPP_QT_SAMPLEWIDGETS02_PROTECTED_ACCESSOR_H
#define APPROVALTESTS_CPP_QT_SAMPLEWIDGETS02_PROTECTED_ACCESSOR_H

#include <QGroupBox>
class QToolButton;

namespace Ui
{
    class SampleWidgets;
}

//! Ui::SampleWidgets is a private data member - but we provide protected accessors to widgets that we want to be tested
class SampleWidgets02 : public QGroupBox
{
    Q_OBJECT

public:
    explicit SampleWidgets02(QWidget* parent = nullptr);
    ~SampleWidgets02();

    int answer()
    {
        return 42;
    }

protected:
    QToolButton* goButton();

private:
    Ui::SampleWidgets* ui;
};

#endif //APPROVALTESTS_CPP_QT_SAMPLEWIDGETS02_PROTECTED_ACCESSOR_H
