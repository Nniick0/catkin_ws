
"use strict";

let DigitalRead = require('./DigitalRead.js')
let ServoWrite = require('./ServoWrite.js')
let DigitalWrite = require('./DigitalWrite.js')
let DigitalSetDirection = require('./DigitalSetDirection.js')
let AnalogRead = require('./AnalogRead.js')
let ServoRead = require('./ServoRead.js')
let AnalogWrite = require('./AnalogWrite.js')

module.exports = {
  DigitalRead: DigitalRead,
  ServoWrite: ServoWrite,
  DigitalWrite: DigitalWrite,
  DigitalSetDirection: DigitalSetDirection,
  AnalogRead: AnalogRead,
  ServoRead: ServoRead,
  AnalogWrite: AnalogWrite,
};
