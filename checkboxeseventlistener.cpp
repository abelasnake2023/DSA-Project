#include "checkboxeseventlistener.h"



CheckBoxesEventListener::CheckBoxesEventListener(std::map<QCheckBox*, bool>& allCheckBoxClickedState, QCheckBox* cBox) {
    this->sourceCBox = cBox;
    this->allCheckBoxClickedState = allCheckBoxClickedState;
}


void CheckBoxesEventListener::on_checkBoxClicked(bool checked) {
    qDebug() << "Dumb clicked: " << "\n\n";
    // Check if the sender is a QCheckBox
    if (checked) {
        qDebug() << this->sourceCBox << " -> object\n\n";
        allCheckBoxClickedState[this->sourceCBox] = true;

        for(int i = 0; i < 7; i++) {
            qDebug() << "bool value: " << allCheckBoxClickedState[this->sourceCBox] << "\n\n";
        }
        return;
    }
    // the check box is un checked
    allCheckBoxClickedState[this->sourceCBox] = false;
}
