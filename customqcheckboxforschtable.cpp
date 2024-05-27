#include "customqcheckboxforschtable.h"




CustomQCheckBoxForSchTable::CustomQCheckBoxForSchTable(QWidget* parent) : QCheckBox(parent) {
    try {
        this->_checkBoxClicked = false;

        connect(this, &QCheckBox::clicked, this, &CustomQCheckBoxForSchTable::on_CheckBoxClicked);
    }
    catch(const std::exception& ex) {
        qDebug() << ex.what() << "\n\n";
    }
}



void CustomQCheckBoxForSchTable::on_CheckBoxClicked(bool checked) {
    if (checked) {
        this->_checkBoxClicked = true;
        return;
    }
    // the check box is un checked
    this->_checkBoxClicked = false;
}


bool CustomQCheckBoxForSchTable::checkBoxClicked() {
    return this->_checkBoxClicked;
}


void CustomQCheckBoxForSchTable::setSchId(int schId) {
    this->schId = schId;
}

int CustomQCheckBoxForSchTable::getSchId() {
    return this->schId;
}

void CustomQCheckBoxForSchTable::setCheckBoxClicked(bool value) {
    this->_checkBoxClicked = false; // after deleting the checkBox assign _checkBoxclicked it to false
}
