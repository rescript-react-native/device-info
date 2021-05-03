// good reference
// https://github.com/react-native-device-info/react-native-device-info/blob/db504076eb8bf311138917d403491ee4d01fdc01/src/index.js.flow

type asyncHookResult<'result> = {
  loading: bool,
  result: 'result,
}

type powerState = {
  // all
  batteryLevel: float,
  batteryState: string, // | "unplugged" | "charging" | "full" | "unknown"
  // optional for apple tv
  // https://github.com/react-native-device-info/react-native-device-info/blob/5db7c09e47d731f62e39e881139baa8d00cc9df0/ios/RNDeviceInfo/RNDeviceInfo.m#L575-L581
  lowPowerMode: option<bool>,
  // we don't support anything else yet (chargingtime/dischargingtime)
  // see https://github.com/react-native-device-info/react-native-device-info/issues/new?template=feature_request.md
}

@module("react-native-device-info") @scope("default")
external getAndroidId: unit => Js.Promise.t<string> = "getAndroidId"

@module("react-native-device-info") @scope("default")
external getApiLevel: unit => Js.Promise.t<float> = "getApiLevel"

@module("react-native-device-info") @scope("default")
external getApplicationName: unit => string = "getApplicationName"

@module("react-native-device-info") @scope("default")
external getAvailableLocationProviders: unit => Js.Promise.t<Js.Dict.t<bool>> =
  "getAvailableLocationProviders"

@module("react-native-device-info") @scope("default")
external getBaseOs: unit => Js.Promise.t<string> = "getBaseOs"

@module("react-native-device-info") @scope("default")
external getBatteryLevel: unit => Js.Promise.t<float> = "getBatteryLevel"

@module("react-native-device-info") @scope("default")
external getBootloader: unit => Js.Promise.t<string> = "getBootloader"

@module("react-native-device-info") @scope("default")
external getBrand: unit => string = "getBrand"

@module("react-native-device-info") @scope("default")
external getBuildId: unit => Js.Promise.t<string> = "getBuildId"

@module("react-native-device-info") @scope("default")
external getBuildNumber: unit => string = "getBuildNumber"

@module("react-native-device-info") @scope("default")
external getBundleId: unit => string = "getBundleId"

@module("react-native-device-info") @scope("default")
external getCarrier: unit => Js.Promise.t<string> = "getCarrier"

@module("react-native-device-info") @scope("default")
external getCodename: unit => Js.Promise.t<string> = "getCodename"

@module("react-native-device-info") @scope("default")
external getDevice: unit => Js.Promise.t<string> = "getDevice"

@module("react-native-device-info") @scope("default")
external getDeviceId: unit => string = "getDeviceId"

@module("react-native-device-info") @scope("default")
external getDeviceName: unit => Js.Promise.t<string> = "getDeviceName"

@module("react-native-device-info") @scope("default")
external getDeviceToken: unit => Js.Promise.t<string> = "getDeviceToken"

@module("react-native-device-info") @scope("default")
external getDeviceType: unit => string = "getDeviceType"

@module("react-native-device-info") @scope("default")
external getDisplay: unit => Js.Promise.t<string> = "getDisplay"

@module("react-native-device-info") @scope("default")
external getFingerprint: unit => Js.Promise.t<string> = "getFingerprint"

@module("react-native-device-info") @scope("default")
external getFirstInstallTime: unit => Js.Promise.t<float> = "getFirstInstallTime"

@module("react-native-device-info") @scope("default")
external getFontScale: unit => Js.Promise.t<float> = "getFontScale"

@module("react-native-device-info") @scope("default")
external getFreeDiskStorage: unit => Js.Promise.t<float> = "getFreeDiskStorage"

@module("react-native-device-info") @scope("default")
external getHardware: unit => Js.Promise.t<string> = "getHardware"

@module("react-native-device-info") @scope("default")
external getHost: unit => Js.Promise.t<string> = "getHost"

@module("react-native-device-info") @scope("default")
external getIncremental: unit => Js.Promise.t<string> = "getIncremental"

@module("react-native-device-info") @scope("default")
external getInstallerPackageName: unit => Js.Promise.t<string> = "getInstallerPackageName"

@module("react-native-device-info") @scope("default")
external getInstallReferrer: unit => Js.Promise.t<string> = "getInstallReferrer"

@module("react-native-device-info") @scope("default")
external getInstanceId: unit => Js.Promise.t<string> = "getInstanceId"

@module("react-native-device-info") @scope("default")
external getIpAddress: unit => Js.Promise.t<string> = "getIpAddress"

@module("react-native-device-info") @scope("default")
external getLastUpdateTime: unit => Js.Promise.t<float> = "getLastUpdateTime"

@module("react-native-device-info") @scope("default")
external getMacAddress: unit => Js.Promise.t<string> = "getMacAddress"

@module("react-native-device-info") @scope("default")
external getManufacturer: unit => Js.Promise.t<string> = "getManufacturer"

@module("react-native-device-info") @scope("default")
external getMaxMemory: unit => Js.Promise.t<float> = "getMaxMemory"

@module("react-native-device-info") @scope("default")
external getModel: unit => string = "getModel"

@module("react-native-device-info") @scope("default")
external getPhoneNumber: unit => Js.Promise.t<string> = "getPhoneNumber"

@module("react-native-device-info") @scope("default")
external getPowerState: unit => Js.Promise.t<powerState> = "getPowerState"

@module("react-native-device-info") @scope("default")
external getPreviewSdkInt: unit => Js.Promise.t<float> = "getPreviewSdkInt"

@module("react-native-device-info") @scope("default")
external getProduct: unit => Js.Promise.t<string> = "getProduct"

@module("react-native-device-info") @scope("default")
external getReadableVersion: unit => string = "getReadableVersion"

@module("react-native-device-info") @scope("default")
external getSecurityPatch: unit => Js.Promise.t<string> = "getSecurityPatch"

@module("react-native-device-info") @scope("default")
external getSerialNumber: unit => Js.Promise.t<string> = "getSerialNumber"

@module("react-native-device-info") @scope("default")
external getSystemAvailableFeatures: unit => Js.Promise.t<Js.Array.t<string>> =
  "getSystemAvailableFeatures"

@module("react-native-device-info") @scope("default")
external getSystemName: unit => string = "getSystemName"

@module("react-native-device-info") @scope("default")
external getSystemVersion: unit => string = "getSystemVersion"

@module("react-native-device-info") @scope("default")
external getTags: unit => Js.Promise.t<string> = "getTags"

@module("react-native-device-info") @scope("default")
external getTotalDiskCapacity: unit => Js.Promise.t<float> = "getTotalDiskCapacity"

@module("react-native-device-info") @scope("default")
external getTotalMemory: unit => Js.Promise.t<float> = "getTotalMemory"

@module("react-native-device-info") @scope("default")
external getType: unit => Js.Promise.t<string> = "getType"

@module("react-native-device-info") @scope("default")
external getUniqueId: unit => string = "getUniqueId"

@module("react-native-device-info") @scope("default")
external getUsedMemory: unit => Js.Promise.t<float> = "getUsedMemory"

@module("react-native-device-info") @scope("default")
external getUserAgent: unit => Js.Promise.t<string> = "getUserAgent"

@module("react-native-device-info") @scope("default")
external getVersion: unit => string = "getVersion"

@module("react-native-device-info") @scope("default")
external hasNotch: unit => bool = "hasNotch"

@module("react-native-device-info") @scope("default")
external hasSystemFeature: unit => Js.Promise.t<bool> = "hasSystemFeature"

@module("react-native-device-info") @scope("default")
external isAirplaneMode: unit => Js.Promise.t<bool> = "isAirplaneMode"

@module("react-native-device-info") @scope("default")
external isBatteryCharging: unit => Js.Promise.t<bool> = "isBatteryCharging"

@module("react-native-device-info") @scope("default")
external isCameraPresent: unit => Js.Promise.t<bool> = "isCameraPresent"

@module("react-native-device-info") @scope("default")
external isEmulator: unit => Js.Promise.t<bool> = "isEmulator"

@module("react-native-device-info") @scope("default")
external isHeadphonesConnected: unit => Js.Promise.t<bool> = "isHeadphonesConnected"

@module("react-native-device-info") @scope("default")
external isLandscape: unit => Js.Promise.t<bool> = "isLandscape"

@module("react-native-device-info") @scope("default")
external isLocationEnabled: unit => Js.Promise.t<bool> = "isLocationEnabled"

@module("react-native-device-info") @scope("default")
external isPinOrFingerprintSet: unit => Js.Promise.t<bool> = "isPinOrFingerprintSet"

@module("react-native-device-info") @scope("default")
external isTablet: unit => bool = "isTablet"

@module("react-native-device-info") @scope("default")
external supported32BitAbis: unit => Js.Promise.t<Js.Array.t<string>> = "supported32BitAbis"

@module("react-native-device-info") @scope("default")
external supported64BitAbis: unit => Js.Promise.t<Js.Array.t<string>> = "supported64BitAbis"

@module("react-native-device-info") @scope("default")
external supportedAbis: unit => Js.Promise.t<Js.Array.t<string>> = "supportedAbis"

@module("react-native-device-info") @scope("default")
external syncUniqueId: unit => Js.Promise.t<string> = "syncUniqueId"

@module("react-native-device-info") @scope("default")
external useBatteryLevel: unit => option<float> = "useBatteryLevel"

@module("react-native-device-info") @scope("default")
external useBatteryLevelIsLow: unit => option<float> = "useBatteryLevelIsLow"

@module("react-native-device-info") @scope("default")
external useDeviceName: unit => asyncHookResult<string> = "useDeviceName"

@module("react-native-device-info") @scope("default")
external useFirstInstallTime: unit => asyncHookResult<float> = "useFirstInstallTime"

@module("react-native-device-info") @scope("default")
external useHasSystemFeature: string => asyncHookResult<bool> = "useHasSystemFeature"

@module("react-native-device-info") @scope("default")
external useIsEmulator: unit => asyncHookResult<bool> = "useIsEmulator"

@module("react-native-device-info") @scope("default")
external useIsHeadphonesConnected: unit => asyncHookResult<bool> = "useIsHeadphonesConnected"

@module("react-native-device-info") @scope("default")
external useManufacturer: unit => asyncHookResult<string> = "useManufacturer"

@module("react-native-device-info") @scope("default")
external usePowerState: unit => powerState = "usePowerState"
