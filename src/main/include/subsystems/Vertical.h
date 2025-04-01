// ROBOTBUILDER TYPE: Subsystem.
#pragma once

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include <frc/DigitalInput.h>
#include <frc/motorcontrol/PWMVictorSPX.h>
#include <frc2/command/SubsystemBase.h>
#include <frc/PS5Controller.h>
#include <rev/SparkAbsoluteEncoder.h>
#include <rev/SparkMax.h>

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 *
 *
 * @author ExampleAuthor
 */
class Vertical : public frc2::SubsystemBase {
 private:
  // It's desirable that everything possible is private except
  // for methods that implement subsystem capabilities
  // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

  // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
 public:
  Vertical();

  void Periodic() override;
  void SimulationPeriodic() override;
  void CheckInput();
  rev::spark::SparkMax liftMotor {6, rev::spark::SparkMax::MotorType::kBrushless};

  // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

  // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS
  // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CO                                                                                                                                                  NSTANTS

  // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};