// hRobot_1_00_10 edited by mzabinski94@gmail.com
// from hRobot_1_00_09

#include <cstddef>
#include <cstdint>
#include "hFramework.h"
#include "hCloudClient.h"
#include "Arm.h"

float current[9];
// jog, ui, recorded positions values
float target[9];

// temp PID values for calibration
float tempKp = 8.4;
float tempKi = 0.35;
float tempKd = 9;

void hMain()
{
	Serial.init(115200);
	sys.setLogDev(&Serial);
	Arm hRobot;
	hRobot.ArmInit();

	for (;;) {
		sys.delay(1000);
		LED1.toggle();
	}
}
