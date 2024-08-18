#ifndef HARDWARE_H
#define HARDWARE_H


class Computer;

class CPU {
public:
  bool power_status;
  std::string name;
  CPU();
  void TurnOn();
};
struct PowerButton {
  bool was_pressed;
  PowerButton();
  void PressButton(Computer& PC);
};

class PowerUnit {
public:
  bool power_status;
  PowerUnit();
  void TurnOnPowerUnit(Computer& PC);
};
class Motherboard {
public:
  CPU processor;
  bool power_status;

  Motherboard();
  void TurnOnDevices();
  void TurnOnMother();
};
class Computer {  
  friend class PowerButton;
  friend class PowerUnit;
private:
  Motherboard _main_board;
  PowerUnit _power_unit;
public:
  PowerButton turn_on_button;
};

/*struct GPU {

};
struct RAM {

};
struct HardDisk {

};*/

#endif