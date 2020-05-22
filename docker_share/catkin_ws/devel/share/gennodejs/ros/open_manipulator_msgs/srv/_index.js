
"use strict";

let SetJointPosition = require('./SetJointPosition.js')
let SetActuatorState = require('./SetActuatorState.js')
let SetDrawingTrajectory = require('./SetDrawingTrajectory.js')
let GetKinematicsPose = require('./GetKinematicsPose.js')
let GetJointPosition = require('./GetJointPosition.js')
let SetKinematicsPose = require('./SetKinematicsPose.js')

module.exports = {
  SetJointPosition: SetJointPosition,
  SetActuatorState: SetActuatorState,
  SetDrawingTrajectory: SetDrawingTrajectory,
  GetKinematicsPose: GetKinematicsPose,
  GetJointPosition: GetJointPosition,
  SetKinematicsPose: SetKinematicsPose,
};
