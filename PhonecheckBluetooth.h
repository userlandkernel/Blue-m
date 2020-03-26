/* Each Protocol can be represented by a 16-bit integer, this is called the uuid short */
enum ProtocolUUID {
    kProtocolSDP =                      0x0001,        /* Bluetooth Service Discovery Protocol */
    kProtocolUDP =                      0x0002,
    kProtocolRFCOMM =                   0x0003,        /* Bluetooth Radio Frequency Communication */
    kProtocolTCP =                      0x0004,
    kProtocolTCSBIN =                   0x0005,        /* Bluetooth telephony control specification */
    kProtocolTCSAT =                    0x0006,        /* Bluetooth Modem */
    kProtocolATT =                      0x0007,        /* Attribute protocol */
    kProtocolOBEX =                     0x0008,
    kProtocolIP =                       0x0009,
    kProtocolFTP =                      0x000A,
    kProtocolHTTP =                     0x000C,
    kProtocolWSP =                      0x000E,
    kProtocolBNEP =                     0x000F,        /* Bluetooth Network Encapsulation Protocol (BNEP) */
    kProtocolUPNP =                     0x0010,
    kProtocolHIDP =                     0x0011,        /* Human Interface Device Profile (HID) */
    kProtocolHardcopyControlChannel =   0x0012,
    kProtocolHardcopyDataChannel =      0x0014,
    kProtocolHardcopyNotification =     0x0016,
    kProtocolAVCTP =                    0x0017,
    kProtocolAVDTP =                    0x0019,        /* Audio/Video Distribution Transport Protocol (AVDTP) */
    kProtocolCMTP =                     0x001B,
    kProtocolUDICPlane =                0x001D,
    kProtocolMCAPControlChannel =       0x001E,
    kProtocolMCAPDataChannel =          0x001F,
    kProtocolL2CAP =                    0x0100          /* Logical Link Control and Adaptation Protocol */
};


const char *ProtocolMap[] = {
    [kProtocolSDP] = "Service Discovery Protocol",
    [kProtocolUDP] = "Universal Datagram Protocol",
    [kProtocolRFCOMM] = "RFCOMM with TS 07.10",
    [kProtocolTCP] = "Transmission Control Protocol",
    [kProtocolTCSBIN] = "Telephony Control Specification / TCS Binary ",
    [kProtocolTCSAT] = "Telphony Control Specification / TCS-AT",
    [kProtocolOBEX] = "IrDA Interoperability",
    [kProtocolIP] = "Internet Protocol",
    [kProtocolFTP] = "File Transfer Protocol",
    [kProtocolHTTP] = "Hyper Text Transfer Protocol",
    [kProtocolWSP] = "WSP",
    [kProtocolBNEP] = "BNEP",
    [kProtocolUPNP] = "Extended Service Discovery Profile",
    [kProtocolHIDP] = "Human Interface Device Profile",
    [kProtocolHardcopyControlChannel] = "Hardcopy Control Channel",
    [kProtocolHardcopyDataChannel] = "Hardcopy Data Channel",
    [kProtocolHardcopyNotification] = "Hardcopy nofication",
    [kProtocolAVCTP] = "Audio/Video Distribution Transport Protocol",
    [kProtocolAVDTP] = "Audio/Video Control Transport Protocol",
    [kProtocolCMTP] = "Common ISDN Access Profile",
    [kProtocolUDICPlane] = "UDI_C-Plane",
    [kProtocolMCAPControlChannel] = "MCAP Control Channel",
    [kProtocolMCAPDataChannel] = "MCAP Data Channel",
    [kProtocolL2CAP] = "L2CAP"
    
};

inline static const char* ProtocolUUIDString(enum ProtocolUUID proto){
    
    if(proto < (sizeof(ProtocolMap) / sizeof(ProtocolMap[0]))){
        return ProtocolMap[proto];
    }
    return "Unknown";
}


enum BTServiceClass {
    kBTClassServiceDiscoveryServerServiceClassID =               0x1000,
    kBTClassBrowseGroupDescriptorServiceClassID =                0x1001,
    kBTClassPublicBrowseGroup =                                  0x1101,
    kBTClassLANAccessUsingPPP =                                  0x1102,
    kBTClassDialupNetworking =                                   0x1103,
    kBTClassIrMCSync =                                           0x1104,
    kBTClassOBEXObjectPush =                                     0x1105,
    kBTClassOBEXFileTransfer =                                   0x1106,
    kBTClassHumanInterfaceDeviceService =                        0x1124
};

const char* BTServiceClassMap[] = {
    [kBTClassServiceDiscoveryServerServiceClassID] = "ServiceDiscoveryServer Service Class ID",
    [kBTClassBrowseGroupDescriptorServiceClassID] = "BrowseGroupDescriptor Service Class ID",
    [kBTClassPublicBrowseGroup] = "Public Browse Group",
    [kBTClassLANAccessUsingPPP] = "LAN Access Using PPP",
    [kBTClassDialupNetworking] = "Dial-Up networking",
    [kBTClassIrMCSync] = "IrMC Sync",
    [kBTClassOBEXObjectPush] = "OBEX Object Push",
    [kBTClassOBEXFileTransfer] = "OBEX File Transfer"
};

inline static const char* BTServiceClassString(enum BTServiceClass serviceClass){
    
    if(serviceClass < (sizeof(BTServiceClassMap) / sizeof(BTServiceClassMap[0]))){
        return BTServiceClassMap[serviceClass];
    }
    return "Unknown";
}

enum BTHIDProfileAttributeID {
    kBTHIDDeviceReleaseNumber = 0x0200,
    kBTHIDParserVersion = 0x0201,
    kBTHIDDeviceSubclass = 0x0202,
    kBTHIDCountryCode = 0x0203,
    kBTHIDVirtualCable = 0x0204,
    kBTHIDReconnectInitiate = 0x0205,
    kBTHIDDescriptorList = 0x0206,
    kBTHIDLANGIDBaseList = 0x0207,
    kBTHIDSDPDisable = 0x0208,
    kBTHIDBatteryPower = 0x0209,
    kBTHIDRemoteWake = 0x020A,
    kBTHIDProfileVersion = 0x020B,
    kBTHIDSupervisionTimeout = 0x020C,
    kBTHIDNormallyConnectable = 0x020D,
    kBTHIDBootDevice = 0x020E,
    kBTSSRHostMaxLatency = 0x020F,
    kBTSSRHostMinTimeout = 0x0210,
};

const char* BTHIDProfileAttributeIDMap[] = {
    [kBTHIDDeviceReleaseNumber] = "Device Release Number",
    [kBTHIDParserVersion] = "Parser Version",
    [kBTHIDDeviceSubclass] = "Device Subclass",
    [kBTHIDCountryCode] = "Country Code",
    [kBTHIDVirtualCable] = "Virtual Cable",
    [kBTHIDReconnectInitiate] = "Reconnect Initiate",
    [kBTHIDDescriptorList] = "Descriptor List",
    [kBTHIDLANGIDBaseList] = "Language ID Base List",
    [kBTHIDSDPDisable] = "SDP Disable",
    [kBTHIDBatteryPower] = "Battery Power",
    [kBTHIDRemoteWake] = "Remote Wake",
    [kBTHIDProfileVersion] = "Profile Version",
    [kBTHIDSupervisionTimeout] = "Supervision Timeout",
    [kBTHIDNormallyConnectable] = "Normally Connectable",
    [kBTHIDBootDevice] = "Boot Device",
    [kBTSSRHostMaxLatency] = "SSR Host Max. Latency",
    [kBTSSRHostMinTimeout] = "SSR Host Min. Timeout"
};

enum BTHIDPMessageType {
    kBTHIDMessageTypeHandshake = 0x0,
    kBTHIDMessageTypeHIDControl = 0x1,
    kBTHIDMessageTypeReserved1 = 0x2,
    kBTHIDMessageTypeReserved2 = 0x3,
    kBTHIDMessageTypeGetReport = 0x4,
    kBTHIDMessageTypeSetReport = 0x5,
    kBTHIDMessageTypeGetProtocol = 0x6,
    kBTHIDMessageTypeSetProtocol = 0x7,
    kBTHIDMessageTypeGetIDLE = 0x8,
    kBTHIDMessageTypeSetIDLE = 0x9,
    kBTHIDMessageTypeDATA = 0xA,
    kBTHIDMessageTypeDATC = 0xB
};

enum BTHIDReportType {
    kBTHIDReportTypeOther = 0x0,
    kBTHIDReportTypeInput = 0x1,
    kBTHIDReportTypeOutput = 0x2,
    kBTHIDReportTypeFeaute = 0x3
};

enum BTHIDProtocolMode {
    kBTHIDBootProtocol = 0x0,
    kBTHIDReportProtocol = 0x1
};

enum BTHIDDescriptorType {
    kBTHIDTypeKeyboard =    0x0000,
    kBTHIDTypeGamePad =     0x0001
};

enum BTHIDItemType {
    kBTHIDItemTypeData = 0,
    kBTHIDItemTypeConstant = 1
};

/* Main Items */
enum BTHIDReportMainItemType {
    kBTHIDReportMainItemTypeInput =             0x80,
    kBTHIDReportMainItemTypeOutput =            0x90,
    kBTHIDReportMainItemTypeFeature =           0xB0,
    kBTHIDReportMainItemTypeCollection =        0xA0,
    kBTHIDReportMainItemTypeEndCollection =     0xC0
};

/* Global Item Types */
enum BTHIDReportGlobalItemType {
    kBTHIDReportGlobalItemTypeUsagePage =       0x04,
    kBTHIDReportGlobalItemTypeLogicalMinimum =  0x14,
    kBTHIDReportGlobalItemTypeLogicalMaximum =  0x24,
    kBTHIDReportGlobalItemTypePhysicalMinimum = 0x34,
    kBTHIDReportGlobalItemTypePhysicalMaximum = 0x44,
    kBTHIDReportGlobalItemTypeUnitExponent =    0x54,
    kBTHIDReportGlobalItemTypeUnit =            0x64,
    kBTHIDReportGlobalItemTypeReportSize =      0x74,
    kBTHIDReportGlobalItemTypeReportID =        0x84,
    kBTHIDReportGlobalItemTypeReportCount =     0x94
};

/* Local Item Types */
enum BTHIDReportLocalItemType {
    kBTHIDReportLocalItemTypeUsage =            0x08,
    kBTHIDReportLocalItemTypeUsageMinimum =     0x18,
    kBTHIDReportLocalItemTypeUsageMaximum =     0x28
};

/* IOF Types */
enum BTHIDReportIOFType {
    kBTHIDReportIOFArray =                      0x0000,
    kBTHIDReportIOFConstArray =                 0x0001,
    kBTHIDReportIOFVariable =                   0x0002,
    kBTHIDReportIOFConstVar =                   0x0003,
    kBTHIDReportIOFVariableBuffer =             0x0102
};

/* Collection types */
enum BTHIDReportCollectionType {
    kBTHIDReportCollectionPhysical =            0x00,   /* Group of axes */
    kBTHIDReportCollectionApplication =         0x01,   /* Mouse, keyboard */
    kBTHIDReportCollectionLogical =             0x02,   /* Logical, interrelated data */
    kBTHIDReportCollectionReport =              0x03,   /* Report */
    kBTHIDReportCollectionNamedArray =          0x04,   /* Named array */
    kBTHIDReportCollectionUsageSwitch =         0x05,   /* Usage Switch */
    kBTHIDReportCollectionUsageModifier =       0x06    /* Usage Modifier */
    
};

/* Unit Constants */
enum BTHIDReportUnitConstantType {
    kBTHIDReportEngLinTime =                    0x1003,
    kBTHIDReportEngRotAngularPos =              0x14,
    kBTHIDReportUnitNone =                      0x00
};

/* Usage Page Constants */
enum BTHIDUsagePageConstantType {
    kBTHIDUsagePageGenericDesktopID =           0x01,
    kBTHIDUsagePageSimulationID =               0x02,
    kBTHIDUsagePagePhysicalInterface =          0x0F,
    kBTHIDUsagePageOrdinalID =                  0x0A
};

/* Generic Desktop Page */
enum BTHIDGenericDesktopConstantType {
    kBTHIDPointerID =                           0x01,
    kBTHIDJoystickID =                          0x04,
    kBTHIDGamePadID =                           0x05,
    kBTHIDAxisXID =                             0x30,
    kBTHIDAxisYID =                             0x31,
    kBTHIDAxisZID =                             0x32,
    kBTHIDRotateXID =                           0x33,
    kBTHIDRotateYID =                           0x34,
    kBTHIDRotateZID =                           0x35,
    kBTHIDByteCount =                           0x3B
};

/* Simulation Control Constants */
enum BTHIDSimulationControlConstantType {
    kBTHIDThrottleID =                          0xBB
};

/* Button Constants */
enum BTHIDButtonConstantType {
    kBTHIDNoButtonID =                          0x00,
    kBTHIDButtonOneID =                         0x01,
    kBTHIDButtonFourID =                        0x04
};

/* Ordinal Constants */
enum BTHIDOrdinalConstantType {
    kBTInstanceOne =                            0x01,
    kBTInstanceTwo =                            0x02
};

enum BTHIDPIDUsageConstantType {
    kBTHIDUsagePIDUndefined =                   0x00,
    kBTHIDUsagePIDPhysicalInterfaceDevice =     0x01,
    kBTHIDUsagePIDNormal =                      0x20,
    kBTHIDUsagePIDSetEffectReport =             0x21,
    kBTHIDUsagePIDEffectBlockIndex =            0x23,
    
};

/* Usage By Page */

typedef uint16_t BTHIDProtocolHdr;

/* A bluetooth HID packet */
struct __attribute__((packed)) BTHIDPacket  {
    BTHIDProtocolHdr header;
    uint8_t padding0;
    uint8_t modifier;
    uint8_t padding1;
    uint8_t keycode;
    uint8_t padding2[8];
};

inline static const char* BTHIDDescriptor(enum BTHIDDescriptorType descType){
    switch (descType) {
            
        case kBTHIDTypeKeyboard:
            return "Keyboard";
            break;
            
        case kBTHIDTypeGamePad:
            return "Gamepad";
            
        default:
            return "Unknown HID Descriptor type";
    }
}
