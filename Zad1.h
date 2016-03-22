#pragma once

#include<iostream>
#include<cmath>
#include<string>

struct Drink { 
  enum arg {bottle,cup,can};
  Drink(arg s = bottle):_state(s) { set_measure(s);};

  void set_bottle() { _state=bottle; set_measure(bottle);}
  void set_cup() {_state=cup; set_measure(cup);}
  void set_can() {_state=can; set_measure(can);}

  void set_measure(arg state) {
    if (state==bottle) _measure = " bottles";
    else if (state==can) _measure = " cans";
    else _measure = " cups";
    std::cout << "I pour this drink to" << _measure << std::endl;
  }
  std::string get_measure()
  { return _measure; }

  double operator()(double x) 
    { return convert(x); }

private:
  arg _state;
  std::string _measure;
  double convert(double x) {
    if (_state==bottle) return ceil(x/2);
    else if (_state==can) return ceil(x/0.5);
    else return ceil(x/0.25);
  }  
};
