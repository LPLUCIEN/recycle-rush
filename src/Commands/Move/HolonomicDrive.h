/*
 * HolonomicDrive.h
 *
 *  Created on: 10 Jan 2015
 *      Author: lucien
 */

#ifndef SRC_COMMANDS_HOLONOMICDRIVE_H_
#define SRC_COMMANDS_HOLONOMICDRIVE_H_

#include <CommandBase.h>

class HolonomicDrive: public CommandBase{
    public:
        void Initialize();
        void Execute();
        bool IsFinished();
        void End();
        void Interrupted();
};



#endif /* SRC_COMMANDS_HOLONOMICDRIVE_H_ */
