type boolCallback = bool => unit;

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getApplicationName: unit => string = "getApplicationName";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBatteryLevel: unit => Js.Promise.t(float) = "getBatteryLevel";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBrand: unit => string = "getBrand";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBuildNumber: unit => string = "getBuildNumber";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getBundleId: unit => string = "getBundleId";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getCarrier: unit => string = "getCarrier";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getDeviceCountry: unit => string = "getDeviceCountry";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getDeviceId: unit => string = "getDeviceId";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getDeviceLocale: unit => string = "getDeviceLocale";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getDeviceName: unit => string = "getDeviceName";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getFirstInstallTime: unit => float = "getFirstInstallTime";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getFontScale: unit => float = "getFontScale";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getFreeDiskStorage: unit => float = "getFreeDiskStorage";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getIPAddress: unit => Js.Promise.t(string) = "getIPAddress";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getInstallReferrer: unit => string = "getInstallReferrer";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getInstanceID: unit => string = "getInstanceID";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getLastUpdateTime: unit => float = "getLastUpdateTime";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getMACAddress: unit => Js.Promise.t(string) = "getMACAddress";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getManufacturer: unit => string = "getManufacturer";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getMaxMemory: unit => float = "getMaxMemory";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getModel: unit => string = "getModel";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getPhoneNumber: unit => string = "getPhoneNumber";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getReadableVersion: unit => string = "getReadableVersion";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getSerialNumber: unit => string = "getSerialNumber";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getSystemName: unit => string = "getSystemName";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getSystemVersion: unit => string = "getSystemVersion";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getTimezone: unit => string = "getTimezone";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getTotalDiskCapacity: unit => float = "getTotalDiskCapacity";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getTotalMemory: unit => float = "getTotalMemory";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getUniqueID: unit => string = "getUniqueID";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getUserAgent: unit => string = "getUserAgent";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external getVersion: unit => string = "getVersion";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external is24Hour: unit => bool = "is24Hour";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isEmulator: unit => bool = "isEmulator";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isPinOrFingerprintSet: unit => boolCallback = "isPinOrFingerprintSet";

[@bs.module "react-native-device-info"] [@bs.scope "default"]
external isTablet: unit => bool = "isTablet";
