#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');

pros::Motor intake_stage_one(-20);
pros::Motor intake_stage_bin(-18);
pros::Motor intake_stage_top(-19);

pros::ADIDigitalOut lil_will_piston('H');