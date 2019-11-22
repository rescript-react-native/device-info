# `@reason-react-native/device-info`

[![Build Status](https://github.com/reason-react-native/device-info/workflows/Build/badge.svg)](https://github.com/reason-react-native/device-info/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/device-info.svg)](https://www.npmjs.com/@reason-react-native/device-info)
[![Chat](https://img.shields.io/discord/235176658175262720.svg?logo=discord&colorb=blue)](https://reasonml-community.github.io/reason-react-native/discord/)

[ReasonML](https://reasonml.github.io) /
[BuckleScript](https://bucklescript.github.io) bindings for
[`react-native-device-info`](https://github.com/react-native-community/react-native-device-info).

Exposed as `ReactNativeDeviceInfo` module.

`@reason-react-native/device-info` X.y._ means it's compatible with
`react-native-device-info` X.y._

## Installation

When
[`react-native-device-info`](`https://github.com/react-native-community/react-native-device-info`)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @reason-react-native/device-info
# or
yarn add @reason-react-native/device-info
```

`@reason-react-native/device-info` should be added to `bs-dependencies` in your
`bsconfig.json`. Something like

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "@reason-react-native/device-info"
  ],
  //...
}
```

## Usage

### Types

#### `ReactNativeDeviceInfo.asyncHookResult('result)`

```re
{
  .
  "loading": bool,
  "result": 'result,
}
```

#### `ReactNativeDeviceInfo.powerState`

```re
type powerState  = {
  batteryLevel: float,
  batteryState: string, // | "unplugged" | "charging" | "full" | "unknown"
  lowPowerMode: option(bool),
}
```

### Methods

#### `ReactNativeDeviceInfo.getAndroidId()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getApiLevel()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getApplicationName()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getAvailableLocationProviders()`

```re
unit => Js.Promise.t(Js.Dict.t(bool))
```

#### `ReactNativeDeviceInfo.getBaseOs()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getBatteryLevel()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getBootloader()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getBrand()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getBuildId()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getBuildNumber()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getBundleId()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getCarrier()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getCodename()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getDevice()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getDeviceId()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getDeviceName()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getDeviceType()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getDisplay()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getFingerprint()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getFirstInstallTime()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getFontScale()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getFreeDiskStorage()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getHardware()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getHost()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getIncremental()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getInstallReferrer()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getInstanceId()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getIpAddress()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getLastUpdateTime()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getMacAddress()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getManufacturer()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getMaxMemory()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getModel()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getPhoneNumber()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getPowerState()`

```re
unit => Js.Promise.t(powerState)
```

#### `ReactNativeDeviceInfo.getPreviewSdkInt()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getProduct()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getReadableVersion()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getSecurityPatch()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getSerialNumber()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getSystemAvailableFeatures()`

```re
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.getSystemName()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getSystemVersion()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getTags()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getTotalDiskCapacity()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getTotalMemory()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getType()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getUniqueId()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.getUsedMemory()`

```re
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getUserAgent()`

```re
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getVersion()`

```re
unit => string
```

#### `ReactNativeDeviceInfo.hasNotch()`

```re
unit => bool
```

#### `ReactNativeDeviceInfo.hasSystemFeature()`

```re
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isAirplaneMode()`

```re
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isBatteryCharging()`

```re
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isCameraPresent()`

```re
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isEmulator()`

```re
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isHeadphonesConnected()`

```re
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isLandscape()`

```re
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isLocationEnabled()`

```re
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isPinOrFingerprintSet()`

```re
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isTablet()`

```re
unit => bool
```

#### `ReactNativeDeviceInfo.supported32BitAbis()`

```re
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.supported64BitAbis()`

```re
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.supportedAbis()`

```re
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.useBatteryLevel()`

```re
unit => option(float)
```

#### `ReactNativeDeviceInfo.useBatteryLevelIsLow()`

```re
unit => option(float)
```

#### `ReactNativeDeviceInfo.useDeviceName()`

```re
unit => asyncHookResult(string)
```

#### `ReactNativeDeviceInfo.useFirstInstallTime()`

```re
unit => asyncHookResult(float)
```

#### `ReactNativeDeviceInfo.useHasSystemFeature()`

```re
string => asyncHookResult(bool)
```

#### `ReactNativeDeviceInfo.useIsEmulator()`

```re
unit => asyncHookResult(bool)
```

#### `ReactNativeDeviceInfo.usePowerState()`

```re
unit => powerState
```

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/reason-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/reason-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
