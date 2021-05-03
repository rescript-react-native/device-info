# `@rescript-react-native/device-info`

[![Build Status](https://github.com/rescript-react-native/device-info/workflows/Build/badge.svg)](https://github.com/rescript-react-native/device-info/actions)
[![Version](https://img.shields.io/npm/v/@rescript-react-native/device-info.svg)](https://www.npmjs.com/@rescript-react-native/device-info)
[![ReScript Forum](https://img.shields.io/discourse/posts?color=e6484f&label=ReScript%20Forum&server=https%3A%2F%2Fforum.rescript-lang.org)](https://forum.rescript-lang.org/)

[ReScript](https://rescript-lang.org) bindings for
[`react-native-device-info`](https://github.com/react-native-device-info/react-native-device-info).

Exposed as `ReactNativeDeviceInfo` module.

`@rescript-react-native/device-info` X.y.\* means it's compatible with
`react-native-device-info` X.y.\*

## Installation

When
[`react-native-device-info`](https://github.com/react-native-device-info/react-native-device-info)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @rescript-react-native/device-info
# or
yarn add @rescript-react-native/device-info
```

`@rescript-react-native/device-info` should be added to `bs-dependencies` in your
`bsconfig.json`:

```diff
{
  //...
  "bs-dependencies": [
    "@rescript/react",
    "rescript-react-native",
    // ...
+    "@rescript-react-native/device-info"
  ],
  //...
}
```

## Usage

### Types

#### `ReactNativeDeviceInfo.asyncHookResult('result)`

```rescript
{
  .
  "loading": bool,
  "result": 'result,
}
```

#### `ReactNativeDeviceInfo.powerState`

```rescript
type powerState  = {
  batteryLevel: float,
  batteryState: string, // | "unplugged" | "charging" | "full" | "unknown"
  lowPowerMode: option(bool),
}
```

### Methods

#### `ReactNativeDeviceInfo.getAndroidId()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getApiLevel()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getApplicationName()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getAvailableLocationProviders()`

```rescript
unit => Js.Promise.t(Js.Dict.t(bool))
```

#### `ReactNativeDeviceInfo.getBaseOs()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getBatteryLevel()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getBootloader()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getBrand()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getBuildId()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getBuildNumber()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getBundleId()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getCarrier()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getCodename()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getDevice()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getDeviceId()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getDeviceName()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getDeviceType()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getDisplay()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getFingerprint()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getFirstInstallTime()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getFontScale()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getFreeDiskStorage()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getHardware()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getHost()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getIncremental()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getInstallReferrer()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getInstanceId()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getIpAddress()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getLastUpdateTime()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getMacAddress()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getManufacturer()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getMaxMemory()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getModel()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getPhoneNumber()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getPowerState()`

```rescript
unit => Js.Promise.t(powerState)
```

#### `ReactNativeDeviceInfo.getPreviewSdkInt()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getProduct()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getReadableVersion()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getSecurityPatch()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getSerialNumber()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getSystemAvailableFeatures()`

```rescript
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.getSystemName()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getSystemVersion()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getTags()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getTotalDiskCapacity()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getTotalMemory()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getType()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getUniqueId()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.getUsedMemory()`

```rescript
unit => Js.Promise.t(float)
```

#### `ReactNativeDeviceInfo.getUserAgent()`

```rescript
unit => Js.Promise.t(string)
```

#### `ReactNativeDeviceInfo.getVersion()`

```rescript
unit => string
```

#### `ReactNativeDeviceInfo.hasNotch()`

```rescript
unit => bool
```

#### `ReactNativeDeviceInfo.hasSystemFeature()`

```rescript
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isAirplaneMode()`

```rescript
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isBatteryCharging()`

```rescript
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isCameraPresent()`

```rescript
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isEmulator()`

```rescript
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isHeadphonesConnected()`

```rescript
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isLandscape()`

```rescript
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isLocationEnabled()`

```rescript
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isPinOrFingerprintSet()`

```rescript
unit => Js.Promise.t(bool)
```

#### `ReactNativeDeviceInfo.isTablet()`

```rescript
unit => bool
```

#### `ReactNativeDeviceInfo.supported32BitAbis()`

```rescript
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.supported64BitAbis()`

```rescript
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.supportedAbis()`

```rescript
unit => Js.Promise.t(Js.Array.t(string))
```

#### `ReactNativeDeviceInfo.useBatteryLevel()`

```rescript
unit => option(float)
```

#### `ReactNativeDeviceInfo.useBatteryLevelIsLow()`

```rescript
unit => option(float)
```

#### `ReactNativeDeviceInfo.useDeviceName()`

```rescript
unit => asyncHookResult(string)
```

#### `ReactNativeDeviceInfo.useFirstInstallTime()`

```rescript
unit => asyncHookResult(float)
```

#### `ReactNativeDeviceInfo.useHasSystemFeature()`

```rescript
string => asyncHookResult(bool)
```

#### `ReactNativeDeviceInfo.useIsEmulator()`

```rescript
unit => asyncHookResult(bool)
```

#### `ReactNativeDeviceInfo.usePowerState()`

```rescript
unit => powerState
```

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/rescript-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/rescript-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
