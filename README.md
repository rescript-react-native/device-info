# device-info

[ReasonML](https://reasonml.github.io)/[BuckleScript](https://bucklescript.github.io) bindings for [react-native-device-info](https://github.com/react-native-community/react-native-device-info).

## Installation

```shell
# yarn
yarn add @reason-react-native/device-info react-native-device-info

# or npm
npm install @reason-react-native/device-info react-native-device-info
```

Then add `@reason-react-native/device-info` to the dependencies in your `bsconfig.json`, e.g.:

```json
{
  "name": "my-app",
  ...
  "bs-dependencies": ["reason-react", "reason-react-native", "@reason-react-native/device-info"],
  ...
}
```

## Usage

The `react-native-device-info` functions are available in the `ReactNativeDeviceInfo` module. For example,

```reason
Js.log("Device name: " ++ ReactNativeDeviceInfo.getDeviceName());
```

will log the device name.
