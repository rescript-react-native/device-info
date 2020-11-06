# `@reason-react-native/device-info`

[![Build Status](https://github.com/reason-react-native/device-info/workflows/Build/badge.svg)](https://github.com/reason-react-native/device-info/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/device-info.svg)](https://www.npmjs.com/@reason-react-native/device-info)
[![Chat](https://img.shields.io/discord/235176658175262720.svg?logo=discord&colorb=blue)](https://reason-react-native.github.io/discord/)

[ReScript](https://rescript-lang.org) / [Reason](https://reasonml.github.io) bindings for
[`react-native-device-info`](https://github.com/react-native-community/react-native-device-info).

Exposed as `ReactNativeDeviceInfo` module.

`@reason-react-native/device-info` X.y.\* means it's compatible with
`react-native-device-info` X.y.\*

## Installation

When
[`react-native-device-info`](https://github.com/react-native-community/react-native-device-info)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @reason-react-native/device-info
# or
yarn add @reason-react-native/device-info
```

`@reason-react-native/device-info` should be added to `bs-dependencies` in your
`bsconfig.json`:

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

```reason
{
  .
  "loading": bool,
  "result": 'result,
}
```

#### `ReactNativeDeviceInfo.powerState`

```reason
type powerState  = {
  batteryLevel: float,
  batteryState: string, // | "unplugged" | "charging" | "full" | "unknown"
  lowPowerMode: option(bool),
}
```

### Methods

#### `ReactNativeDeviceInfo.getAndroidId()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getApiLevel()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getApplicationName()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getAvailableLocationProviders()`

```reason
unit => Js.Promise.t(Js.Dict.t(bool))
```

#### `ReactNativeDeviceInfo.getBaseOs()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getBatteryLevel()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getBootloader()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getBrand()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getBuildId()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getBuildNumber()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getBundleId()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getCarrier()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getCodename()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getDevice()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getDeviceId()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getDeviceName()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getDeviceType()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getDisplay()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getFingerprint()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getFirstInstallTime()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getFontScale()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getFreeDiskStorage()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getHardware()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getHost()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getIncremental()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getInstallReferrer()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getInstanceId()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getIpAddress()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getLastUpdateTime()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getMacAddress()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getManufacturer()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getMaxMemory()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getModel()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getPhoneNumber()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getPowerState()`

```reason
unit => Js.Promise.t(powerState)
```

#### `ReactNativeDeviceInfo.getPreviewSdkInt()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getProduct()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getReadableVersion()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getSecurityPatch()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getSerialNumber()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getSystemAvailableFeatures()`

```reason
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.getSystemName()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getSystemVersion()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getTags()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getTotalDiskCapacity()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getTotalMemory()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getType()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getUniqueId()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.getUsedMemory()`

```reason
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getUserAgent()`

```reason
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getVersion()`

```reason
unit => string
```

#### `ReactNativeDeviceInfo.hasNotch()`

```reason
unit => bool
```

#### `ReactNativeDeviceInfo.hasSystemFeature()`

```reason
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isAirplaneMode()`

```reason
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isBatteryCharging()`

```reason
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isCameraPresent()`

```reason
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isEmulator()`

```reason
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isHeadphonesConnected()`

```reason
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isLandscape()`

```reason
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isLocationEnabled()`

```reason
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isPinOrFingerprintSet()`

```reason
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isTablet()`

```reason
unit => bool
```

#### `ReactNativeDeviceInfo.supported32BitAbis()`

```reason
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.supported64BitAbis()`

```reason
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.supportedAbis()`

```reason
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.useBatteryLevel()`

```reason
unit => option(float)
```

#### `ReactNativeDeviceInfo.useBatteryLevelIsLow()`

```reason
unit => option(float)
```

#### `ReactNativeDeviceInfo.useDeviceName()`

```reason
unit => asyncHookResult(string)
```

#### `ReactNativeDeviceInfo.useFirstInstallTime()`

```reason
unit => asyncHookResult(float)
```

#### `ReactNativeDeviceInfo.useHasSystemFeature()`

```reason
string => asyncHookResult(bool)
```

#### `ReactNativeDeviceInfo.useIsEmulator()`

```reason
unit => asyncHookResult(bool)
```

#### `ReactNativeDeviceInfo.usePowerState()`

```reason
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
