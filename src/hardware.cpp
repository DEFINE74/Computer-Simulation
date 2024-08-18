#include <iostream>

#include "../include/hardware.h"

using std::cout, std::endl;

// CPU
CPU::CPU() {
  power_status = false;
  name = "Intel(R) Pentium(R) Dual CPU E2100 @ 2.00GHz";
}
void CPU::TurnOn() {
  cout << "[PC] CPU POWER - TRUE";
  power_status = true;
}
// PowerButton
PowerButton::PowerButton() {
  was_pressed = false;
}
void PowerButton::PressButton(Computer& PC) {
  was_pressed = true;
  PC._power_unit.TurnOnPowerUnit(PC);
}

//Power unit
PowerUnit::PowerUnit() {
  power_status = false;
}
void PowerUnit::TurnOnPowerUnit(Computer& PC) {
  power_status = true;
  PC._main_board.TurnOnMother();
}
//Motherboard
Motherboard::Motherboard() {
  power_status = false;
}
void Motherboard::TurnOnMother() {
  power_status = true;
  cout << "[PC] MOTHERBOARD POWER - TRUE" << endl;
  TurnOnDevices();
}
void Motherboard::TurnOnDevices() {
  processor.TurnOn();
}