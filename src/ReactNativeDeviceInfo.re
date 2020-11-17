// good reference
// https://github.com/react-native-device-info/react-native-device-info/blob/db504076eb8bf311138917d403491ee4d01fdc01/src/index.js.flow

type asyncHookResult('result) = {
  loading: bool,
  result: 'result,
};

type powerState = {
  // all
  batteryLevel: float,
  batteryState: string, // | "unplugged" | "charging" | "full" | "unknown"
  // optional for apple tv
  // https://github.com/react-native-device-info/react-native-device-info/blob/5db7c09e47d731f62e39e881139baa8d00cc9df0/ios/RNDeviceInfo/RNDeviceInfo.m#L575-L581
  lowPowerMode: option(bool),
  // we don't support anything else yet (chargingtime/dischargingtime)
  // see https://github.com/react-native-device-info/react-native-device-info/issues/new?template=feature_request.md
};

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getAndroidId: unit => Js.Promise.t(string) = "getAndroidId";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getApiLevel: unit => Js.Promise.t(float) = "getApiLevel";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getApplicationName: unit => string = "getApplicationName";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getAvailableLocationProviders: unit => Js.Promise.t(Js.Dict.t(bool)) =
  "getAvailableLocationProviders";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBaseOs: unit => Js.Promise.t(string) = "getBaseOs";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBatteryLevel: unit => Js.Promise.t(float) = "getBatteryLevel";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBootloader: unit => Js.Promise.t(string) = "getBootloader";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBrand: unit => string = "getBrand";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBuildId: unit => Js.Promise.t(string) = "getBuildId";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBuildNumber: unit => string = "getBuildNumber";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBundleId: unit => string = "getBundleId";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getCarrier: unit => Js.Promise.t(string) = "getCarrier";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getCodename: unit => Js.Promise.t(string) = "getCodename";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getDevice: unit => Js.Promise.t(string) = "getDevice";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getDeviceId: unit => string = "getDeviceId";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getDeviceName: unit => Js.Promise.t(string) = "getDeviceName";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getDeviceToken: unit => Js.Promise.t(string) = "getDeviceToken";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getDeviceType: unit => string = "getDeviceType";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getDisplay: unit => Js.Promise.t(string) = "getDisplay";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getFingerprint: unit => Js.Promise.t(string) = "getFingerprint";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getFirstInstallTime: unit => Js.Promise.t(float) =
  "getFirstInstallTime";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getFontScale: unit => Js.Promise.t(float) = "getFontScale";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getFreeDiskStorage: unit => Js.Promise.t(float) =
  "getFreeDiskStorage";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getHardware: unit => Js.Promise.t(string) = "getHardware";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getHost: unit => Js.Promise.t(string) = "getHost";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getIncremental: unit => Js.Promise.t(string) = "getIncremental";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getInstallerPackageName: unit => Js.Promise.t(string) =
  "getInstallerPackageName";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getInstallReferrer: unit => Js.Promise.t(string) =
  "getInstallReferrer";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getInstanceId: unit => Js.Promise.t(string) = "getInstanceId";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getIpAddress: unit => Js.Promise.t(string) = "getIpAddress";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getLastUpdateTime: unit => Js.Promise.t(float) = "getLastUpdateTime";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getMacAddress: unit => Js.Promise.t(string) = "getMacAddress";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getManufacturer: unit => Js.Promise.t(string) = "getManufacturer";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getMaxMemory: unit => Js.Promise.t(float) = "getMaxMemory";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getModel: unit => string = "getModel";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getPhoneNumber: unit => Js.Promise.t(string) = "getPhoneNumber";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getPowerState: unit => Js.Promise.t(powerState) = "getPowerState";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getPreviewSdkInt: unit => Js.Promise.t(float) = "getPreviewSdkInt";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getProduct: unit => Js.Promise.t(string) = "getProduct";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getReadableVersion: unit => string = "getReadableVersion";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getSecurityPatch: unit => Js.Promise.t(string) = "getSecurityPatch";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getSerialNumber: unit => Js.Promise.t(string) = "getSerialNumber";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getSystemAvailableFeatures: unit => Js.Promise.t(Js.Array.t(string)) =
  "getSystemAvailableFeatures";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getSystemName: unit => string = "getSystemName";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getSystemVersion: unit => string = "getSystemVersion";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getTags: unit => Js.Promise.t(string) = "getTags";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getTotalDiskCapacity: unit => Js.Promise.t(float) =
  "getTotalDiskCapacity";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getTotalMemory: unit => Js.Promise.t(float) = "getTotalMemory";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getType: unit => Js.Promise.t(string) = "getType";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getUniqueId: unit => string = "getUniqueId";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getUsedMemory: unit => Js.Promise.t(float) = "getUsedMemory";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getUserAgent: unit => Js.Promise.t(string) = "getUserAgent";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getVersion: unit => string = "getVersion";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external hasNotch: unit => bool = "hasNotch";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external hasSystemFeature: unit => Js.Promise.t(bool) = "hasSystemFeature";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isAirplaneMode: unit => Js.Promise.t(bool) = "isAirplaneMode";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isBatteryCharging: unit => Js.Promise.t(bool) = "isBatteryCharging";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isCameraPresent: unit => Js.Promise.t(bool) = "isCameraPresent";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isEmulator: unit => Js.Promise.t(bool) = "isEmulator";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isHeadphonesConnected: unit => Js.Promise.t(bool) =
  "isHeadphonesConnected";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isLandscape: unit => Js.Promise.t(bool) = "isLandscape";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isLocationEnabled: unit => Js.Promise.t(bool) = "isLocationEnabled";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isPinOrFingerprintSet: unit => Js.Promise.t(bool) =
  "isPinOrFingerprintSet";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isTablet: unit => bool = "isTablet";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external supported32BitAbis: unit => Js.Promise.t(Js.Array.t(string)) =
  "supported32BitAbis";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external supported64BitAbis: unit => Js.Promise.t(Js.Array.t(string)) =
  "supported64BitAbis";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external supportedAbis: unit => Js.Promise.t(Js.Array.t(string)) =
  "supportedAbis";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external syncUniqueId: unit => Js.Promise.t(string) = "syncUniqueId";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external useBatteryLevel: unit => option(float) = "useBatteryLevel";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external useBatteryLevelIsLow: unit => option(float) = "useBatteryLevelIsLow";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external useDeviceName: unit => asyncHookResult(string) = "useDeviceName";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external useFirstInstallTime: unit => asyncHookResult(float) =
  "useFirstInstallTime";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external useHasSystemFeature: string => asyncHookResult(bool) =
  "useHasSystemFeature";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external useIsEmulator: unit => asyncHookResult(bool) = "useIsEmulator";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external useIsHeadphonesConnected: unit => asyncHookResult(bool) =
  "useIsHeadphonesConnected";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external useManufacturer: unit => asyncHookResult(string) = "useManufacturer";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external usePowerState: unit => powerState = "usePowerState";
