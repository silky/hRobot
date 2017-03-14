// hRobot_1_00_10 edited by mzabinski94@gmail.com
// from hRobot_1_00_09

#include <cstddef>
#include <cstdint>
#include "hFramework.h"
#include "hCloudClient.h"
#include "Arm.h"
#include "CommandInput.h"

float current[9];
float target[9];

Arm hRobot;
CommandInput InputData(&hRobot);

//char taskList[1000];

void hMain()
{
	Serial.init(115200);
	sys.setLogDev(&Serial);
	hRobot.ArmInit();

	sys.delay(3000);
    InputData.AddInstructionStream("SET P0 J; SET P1 C 255 0 50 0 0; SHOWALL;\n", SERIAL);

	for (;;) {
		sys.delay(1000);
		LED1.toggle();
		//sys.getTaskList(taskList);
        //Serial.printf("\r\nName\tState\tPriority\tStack\tNum\r\n******************************\r\n%s", taskList);
	}
}