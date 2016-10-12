#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_VMIX 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 12	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_VMIX};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 1264 814\" width=\"70%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"1184\" height=\"780\" x=40 y=17 style=\"fill:url(#grad1);\" /><rect width=\"1184\" height=\"10\" x=40 y=85 style=\"fill:rgb(0,0,100);\" /><rect width=\"1184\" height=\"10\" x=40 y=729 style=\"fill:rgb(0,0,100);\" /><rect width=\"90\" height=\"814\" x=0 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /><rect width=\"90\" height=\"814\" x=1174 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 13732, GZIP size: 4526 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x5B, 0xFB, 0x73, 0x9B, 0xC8, 0x93, 0xFF, 0xFD, 0xFE, 
	0x0A, 0x42, 0xEA, 0x6C, 0x71, 0x42, 0x32, 0x20, 0x21, 0xC9, 
	0x60, 0xEC, 0xAF, 0xE3, 0x24, 0x65, 0xD7, 0xE5, 0xE1, 0x5A, 
	0x65, 0x37, 0x57, 0xA7, 0x52, 0xA5, 0x10, 0x8C, 0x2C, 0x12, 
	0x0C, 0xBA, 0x61, 0x2C, 0xDB, 0x67, 0xFB, 0x7F, 0xBF, 0xEE, 
	0x19, 0x1E, 0x03, 0x42, 0x8E, 0x93, 0xDD, 0x73, 0x6A, 0x05, 
	0xF3, 0xEA, 0xFE, 0xF4, 0x93, 0x99, 0x86, 0xDD, 0xF8, 0x54, 
	0x39, 0xFF, 0x1A, 0x78, 0xB3, 0x99, 0xA9, 0x5B, 0xE6, 0x44, 
	0xB7, 0xAD, 0xA1, 0xAE, 0x9A, 0xAA, 0x6E, 0xCD, 0x75, 0xE8, 
	0x19, 0x8C, 0x4D, 0xD1, 0x63, 0x15, 0x3D, 0xB6, 0x65, 0x8B, 
	0x9E, 0x41, 0xD1, 0x33, 0x1A, 0x1F, 0x8A, 0x9E, 0x61, 0xD1, 
	0x33, 0x19, 0x58, 0xA2, 0xC7, 0x2E, 0x7A, 0x4C, 0xC3, 0x1E, 
	0x88, 0xAE, 0xB3, 0x3F, 0xBF, 0x3C, 0x9E, 0xFE, 0xF9, 0xE5, 
	0x73, 0x31, 0x82, 0x3C, 0x07, 0x96, 0xA5, 0xAB, 0xA7, 0x32, 
	0x4F, 0xDE, 0xF3, 0x46, 0xF4, 0x0C, 0xF5, 0xD1, 0xC8, 0x16, 
	0x3D, 0xD3, 0x0F, 0x17, 0x6F, 0xDF, 0xFD, 0x01, 0xDD, 0x06, 
	0xF4, 0x0F, 0x90, 0xAC, 0x31, 0xD1, 0xAD, 0x89, 0xAD, 0xAB, 
	0x6F, 0xA3, 0x6C, 0x1D, 0xFB, 0xF7, 0xAA, 0x3E, 0xC8, 0x87, 
	0x0E, 0xED, 0x62, 0x04, 0x84, 0x19, 0x97, 0xF3, 0xCB, 0x5E, 
	0x8B, 0xF7, 0xCE, 0xDD, 0x7F, 0xDB, 0x80, 0x02, 0x42, 0xB2, 
	0xF9, 0x90, 0x31, 0xAE, 0x03, 0xF5, 0xAF, 0x8F, 0xD1, 0x9D, 
	0xAA, 0x9B, 0x08, 0x05, 0xE6, 0x4D, 0xEF, 0x33, 0x46, 0xAE, 
	0x55, 0x69, 0xE2, 0xFB, 0x9B, 0x04, 0xB5, 0x35, 0x33, 0x61, 
	0xEE, 0x69, 0xC0, 0xA2, 0x0D, 0x51, 0xA6, 0x34, 0x50, 0x85, 
	0x94, 0x86, 0xAE, 0x5E, 0x24, 0xEB, 0x1B, 0xA6, 0xC2, 0x72, 
	0x55, 0xD5, 0xD5, 0xF3, 0x34, 0x0E, 0x95, 0xB7, 0xE9, 0x6D, 
	0x02, 0xF7, 0x5F, 0xD2, 0xAB, 0xAB, 0x98, 0xC0, 0xCD, 0xD9, 
	0x7D, 0x00, 0xD7, 0x79, 0xB9, 0xE2, 0x3D, 0x4D, 0x91, 0x83, 
	0xCE, 0x49, 0x5E, 0x52, 0xB2, 0x89, 0xC8, 0xED, 0x33, 0x34, 
	0x7F, 0xB2, 0x7C, 0x73, 0x00, 0xA8, 0x7E, 0x77, 0xF9, 0xE7, 
	0x0D, 0xA1, 0xA0, 0x46, 0xB1, 0x00, 0xA7, 0x0C, 0xCB, 0x3E, 
	0x69, 0x49, 0x45, 0xAF, 0x94, 0xE9, 0x02, 0x25, 0xFC, 0x8C, 
	0x8B, 0xD4, 0xCF, 0xCB, 0x25, 0xFC, 0xFE, 0x77, 0x0A, 0x64, 
	0x4B, 0x71, 0x4A, 0x06, 0x67, 0x62, 0x21, 0xDE, 0xBE, 0xF7, 
	0x43, 0x52, 0xF0, 0x98, 0xB2, 0x7B, 0x04, 0x25, 0x8D, 0x7C, 
	0x49, 0xDF, 0xC4, 0x7E, 0xF0, 0x83, 0x4F, 0x06, 0xCB, 0x7F, 
	0xA1, 0x7E, 0x92, 0x45, 0x2C, 0x4A, 0x13, 0xE5, 0x32, 0xCD, 
	0xB0, 0x77, 0x5C, 0xEB, 0xFC, 0xC3, 0x67, 0x4D, 0x62, 0xDC, 
	0xBB, 0x6C, 0xB0, 0xA1, 0x79, 0x60, 0x1A, 0x6C, 0xA5, 0x64, 
	0x24, 0x48, 0x93, 0xB0, 0x42, 0xB2, 0xF2, 0x93, 0x2B, 0xA2, 
	0xFC, 0xE5, 0xC7, 0x37, 0xA4, 0x45, 0x55, 0x06, 0xB4, 0xB1, 
	0x19, 0x92, 0x3B, 0x2E, 0xE9, 0x45, 0x02, 0x0A, 0x55, 0xDF, 
	0x92, 0x00, 0x5A, 0x30, 0xB3, 0x20, 0x92, 0xDE, 0x24, 0x4C, 
	0xD8, 0xF7, 0xA7, 0x14, 0x4A, 0x5D, 0x4D, 0x99, 0x4F, 0x51, 
	0x51, 0x97, 0xFE, 0x4D, 0x26, 0xDA, 0xE9, 0xBA, 0xFB, 0x07, 
	0xC9, 0x08, 0x2B, 0xC1, 0x4D, 0x19, 0x25, 0x3E, 0xE8, 0x4F, 
	0x5A, 0xF5, 0x39, 0x29, 0x75, 0x5B, 0x79, 0x55, 0x31, 0xFF, 
	0x0F, 0x90, 0x8D, 0x86, 0xBF, 0x32, 0x1F, 0xA3, 0x45, 0x99, 
	0x12, 0x76, 0xB3, 0xE6, 0xD0, 0x07, 0x00, 0x75, 0xCA, 0x15, 
	0xC4, 0x95, 0x0B, 0x3A, 0x83, 0x68, 0x86, 0x5F, 0x0B, 0xF1, 
	0xAD, 0x09, 0x09, 0x1B, 0x4B, 0x79, 0x53, 0x44, 0xC8, 0x2A, 
	0x5A, 0x32, 0xE5, 0x03, 0xD9, 0x90, 0x58, 0xE5, 0x42, 0x83, 
	0xB5, 0x44, 0xEB, 0xA7, 0x31, 0xA0, 0xFC, 0xB9, 0x2E, 0x6F, 
	0x2B, 0x78, 0x36, 0xD7, 0x10, 0x37, 0xA7, 0xA1, 0x1F, 0x16, 
	0x8D, 0xDF, 0x27, 0xF6, 0x91, 0x5C, 0xA7, 0xF4, 0x1E, 0x75, 
	0x03, 0x29, 0x06, 0x93, 0x8A, 0x7A, 0x86, 0x96, 0x04, 0x8A, 
	0xE8, 0x1D, 0xBF, 0x4C, 0x55, 0xAC, 0xB8, 0x24, 0x34, 0x8B, 
	0x32, 0x61, 0xB0, 0x71, 0x31, 0x61, 0x37, 0x27, 0x90, 0x84, 
	0xBB, 0xA2, 0x08, 0xB6, 0xB2, 0xF9, 0x25, 0x7D, 0xE1, 0xD8, 
	0x29, 0x3A, 0xEE, 0x36, 0x67, 0x1E, 0x2C, 0xB1, 0x7F, 0xC5, 
	0x55, 0x35, 0x1A, 0xE4, 0x0D, 0x9C, 0x08, 0x96, 0x6D, 0x97, 
	0x2B, 0xA7, 0x72, 0x91, 0x40, 0x54, 0x97, 0x39, 0xC1, 0xBC, 
	0xCE, 0xF0, 0xD7, 0xC8, 0x2F, 0xE2, 0x6A, 0xE7, 0x57, 0x13, 
	0x7F, 0xAC, 0x4C, 0xA0, 0xE1, 0x4C, 0xC0, 0x1D, 0x16, 0x10, 
	0x9B, 0x4A, 0xC9, 0x4D, 0x22, 0xC8, 0x67, 0xA9, 0x5F, 0x22, 
	0xA2, 0xB0, 0x14, 0x1E, 0x2C, 0x67, 0xAF, 0xD5, 0x3C, 0x5C, 
	0x8C, 0x22, 0x99, 0x2A, 0x17, 0xC9, 0x32, 0x97, 0x4D, 0xFD, 
	0x94, 0x2A, 0x98, 0x43, 0xD3, 0x24, 0x6F, 0x7F, 0xF5, 0x23, 
	0xA6, 0x60, 0xBC, 0x66, 0x45, 0xB8, 0x82, 0xFC, 0xF9, 0xEA, 
	0xB3, 0x9B, 0x8C, 0xA5, 0xD7, 0xCA, 0xB9, 0x9F, 0x84, 0x31, 
	0xA1, 0x45, 0x16, 0xB9, 0x48, 0x7C, 0x4C, 0xC2, 0xB9, 0x8B, 
	0x88, 0xD8, 0x49, 0xD7, 0x0A, 0xAC, 0x4D, 0x48, 0x20, 0x72, 
	0x8D, 0x35, 0xD1, 0xD5, 0xCE, 0xA5, 0x9F, 0x90, 0x58, 0x79, 
	0x43, 0xA3, 0xAB, 0x15, 0x4B, 0x48, 0x96, 0x69, 0x88, 0xAB, 
	0x1C, 0xFD, 0x10, 0x5D, 0x47, 0x2C, 0xE3, 0x78, 0xB5, 0x02, 
	0xB0, 0x18, 0x79, 0x1F, 0x25, 0x04, 0xB2, 0x0B, 0xA6, 0x0A, 
	0x69, 0xB4, 0x78, 0x1E, 0x6C, 0xFC, 0x18, 0x1E, 0x1C, 0x99, 
	0x37, 0x83, 0xF6, 0x12, 0x1E, 0x0C, 0x3C, 0x17, 0x5D, 0xBD, 
	0x7B, 0x73, 0xD1, 0x21, 0xDA, 0x03, 0x85, 0xE8, 0xA2, 0x89, 
	0x12, 0xA6, 0xC1, 0xCD, 0x35, 0x49, 0x58, 0xFF, 0x8A, 0xB0, 
	0x77, 0x31, 0xC1, 0xDB, 0x37, 0xF7, 0x17, 0x21, 0xCC, 0x78, 
	0x2A, 0x97, 0x40, 0xEC, 0x9F, 0x76, 0x88, 0xCE, 0xB4, 0x87, 
	0x65, 0x4A, 0x3B, 0x48, 0x39, 0x51, 0xA2, 0x44, 0x61, 0x1A, 
	0xE9, 0xE3, 0x10, 0x63, 0x34, 0x5A, 0xDC, 0x30, 0xD2, 0x49, 
	0x74, 0x36, 0x4B, 0xE6, 0x9A, 0x9B, 0x93, 0x26, 0x35, 0x0A, 
	0x1F, 0x04, 0x85, 0x7C, 0x2C, 0x27, 0xF9, 0x90, 0x26, 0x41, 
	0x1C, 0x05, 0x3F, 0x9C, 0x7D, 0x0E, 0x4B, 0x5D, 0x26, 0xFB, 
	0x5D, 0xD6, 0xDD, 0x57, 0xB5, 0x7E, 0x16, 0xD0, 0x34, 0x8E, 
	0x2F, 0x12, 0x96, 0xFE, 0x05, 0x19, 0xBA, 0xA3, 0xB9, 0xFB, 
	0x7A, 0x70, 0x43, 0xB3, 0x94, 0x3A, 0xEA, 0x3A, 0x8D, 0x12, 
	0x06, 0x3A, 0x7E, 0x92, 0x20, 0xAE, 0x7D, 0xE8, 0xFB, 0x28, 
	0xC9, 0x55, 0x30, 0x58, 0x46, 0x71, 0xEC, 0xA8, 0xAF, 0x43, 
	0xFE, 0xA7, 0xEA, 0x19, 0xA3, 0xE9, 0x0F, 0x02, 0x1D, 0x86, 
	0x61, 0x80, 0x5F, 0x88, 0x66, 0xEF, 0x36, 0x0A, 0xD9, 0x4A, 
	0x75, 0x60, 0x1F, 0xB1, 0x45, 0x73, 0xBA, 0x9B, 0x66, 0xC0, 
	0xFF, 0x24, 0x9A, 0xA3, 0xD1, 0x68, 0x9B, 0xA6, 0x59, 0xA3, 
	0x19, 0xD0, 0x77, 0xDB, 0x7A, 0x28, 0x6D, 0x10, 0x40, 0x5E, 
	0x65, 0x24, 0x37, 0x03, 0x30, 0x86, 0x89, 0xF2, 0xD2, 0xE9, 
	0x8B, 0xD7, 0x7E, 0x9A, 0x76, 0xD4, 0x15, 0x63, 0x6B, 0xE7, 
	0xE0, 0xE0, 0xF6, 0xF6, 0xB6, 0x7F, 0x3B, 0xE8, 0xA7, 0xF4, 
	0xEA, 0xC0, 0x02, 0xA1, 0x0F, 0xB2, 0x0D, 0x04, 0x64, 0x83, 
	0xB4, 0x8F, 0x94, 0xB5, 0x07, 0xFF, 0xAC, 0x23, 0xCC, 0x10, 
	0x30, 0x1A, 0x47, 0xD7, 0x57, 0xAA, 0xA6, 0xCB, 0x6E, 0x00, 
	0xC3, 0x9C, 0x3D, 0xE9, 0xFB, 0xEB, 0x35, 0x49, 0xC2, 0xB3, 
	0x55, 0x14, 0x87, 0x1D, 0x99, 0x4E, 0xC6, 0x3E, 0xF9, 0xD7, 
	0xEF, 0xE3, 0x30, 0xAB, 0xBC, 0x85, 0xF4, 0x23, 0xF0, 0x75, 
	0x7A, 0xFE, 0xE5, 0xE3, 0x07, 0x0F, 0x22, 0xF1, 0xBB, 0x67, 
	0xB8, 0xDF, 0x8F, 0x4C, 0xF8, 0xE9, 0x76, 0x35, 0x76, 0xFC, 
	0x7D, 0x6F, 0xAF, 0xC3, 0xC9, 0xA2, 0x5E, 0xD4, 0x48, 0x3C, 
	0xD8, 0x1F, 0xA2, 0xD0, 0x51, 0x39, 0xA9, 0x6F, 0x6A, 0xF7, 
	0xBB, 0x9E, 0xF8, 0xD7, 0x44, 0x6E, 0x67, 0xF8, 0x00, 0x75, 
	0x54, 0xAE, 0x5F, 0x07, 0x44, 0x5A, 0xDF, 0xB9, 0xAA, 0xBE, 
	0xC1, 0x07, 0xA5, 0x93, 0x61, 0x32, 0xCE, 0x66, 0xDF, 0xE7, 
	0x27, 0xE5, 0x9D, 0xA3, 0x82, 0xFE, 0x41, 0x8E, 0x0A, 0x46, 
	0xD7, 0x53, 0x8F, 0x16, 0xF4, 0xE0, 0x58, 0x95, 0x80, 0xD3, 
	0x0F, 0x8B, 0x58, 0x32, 0x34, 0xE9, 0x53, 0x7C, 0x8E, 0x04, 
	0xA4, 0xA3, 0x3E, 0x82, 0x45, 0x61, 0x7A, 0x6D, 0xF6, 0x2D, 
	0x9D, 0xBE, 0x11, 0x12, 0x06, 0x9E, 0x50, 0x58, 0xF6, 0x66, 
	0xA5, 0x76, 0x49, 0x57, 0x05, 0x80, 0x4C, 0xD3, 0x83, 0xBA, 
	0xCC, 0x41, 0x9F, 0x43, 0xEE, 0x73, 0xC4, 0xDE, 0x47, 0x9F, 
	0xAD, 0xFA, 0xCB, 0x38, 0x05, 0xDD, 0x98, 0x68, 0x0E, 0x0E, 
	0xB4, 0x1F, 0x93, 0xE4, 0x8A, 0xAD, 0x7A, 0xA6, 0xD6, 0x55, 
	0xFF, 0x5D, 0x75, 0x79, 0x88, 0x79, 0x5C, 0x27, 0xAB, 0xA1, 
	0xAA, 0xB9, 0xB5, 0x49, 0xC7, 0x26, 0x28, 0x2D, 0x91, 0x58, 
	0xD4, 0x47, 0x8D, 0x42, 0x76, 0x36, 0xAF, 0xEE, 0x1C, 0xC3, 
	0xF3, 0xD8, 0x09, 0x24, 0x34, 0x7A, 0xED, 0xC7, 0xE0, 0x94, 
	0xFC, 0xA9, 0xA5, 0x00, 0x58, 0x50, 0x8F, 0xA6, 0x83, 0x05, 
	0x02, 0x3D, 0xE1, 0xD7, 0xA4, 0x6E, 0x89, 0x22, 0x3C, 0xD5, 
	0x30, 0x06, 0x91, 0xB9, 0x88, 0x3A, 0xAC, 0xEA, 0x02, 0x26, 
	0x55, 0x67, 0xF7, 0x6B, 0xB0, 0x03, 0x44, 0x3E, 0x83, 0x0C, 
	0x99, 0x5B, 0x40, 0xED, 0x41, 0x7F, 0xC4, 0xD0, 0x40, 0x6F, 
	0x49, 0x4C, 0xF0, 0x39, 0xA9, 0x06, 0xB1, 0x9F, 0x65, 0xC0, 
	0x94, 0x84, 0x8C, 0xDB, 0xE2, 0x19, 0x36, 0xC1, 0xFA, 0xFE, 
	0x85, 0x7C, 0xCE, 0x2E, 0x4B, 0x46, 0x67, 0xE9, 0xFA, 0xFE, 
	0xD7, 0xD8, 0x44, 0x49, 0xF6, 0x42, 0x36, 0x17, 0x9F, 0xA6, 
	0x25, 0x9F, 0x8B, 0x24, 0x23, 0x7C, 0x6B, 0x54, 0x70, 0x02, 
	0x32, 0x4A, 0xCE, 0xCD, 0x2D, 0x32, 0x23, 0xF5, 0x0C, 0x3D, 
	0x02, 0x27, 0x8F, 0x8E, 0xA6, 0xFF, 0xF9, 0xED, 0xE3, 0xE9, 
	0x7F, 0x9D, 0x9E, 0x7D, 0xB9, 0xF8, 0xFC, 0x69, 0xEA, 0x46, 
	0xE0, 0xEF, 0xD1, 0xB2, 0xC3, 0x55, 0xCD, 0x41, 0x65, 0x6B, 
	0x3F, 0xC9, 0x7D, 0x7D, 0x09, 0xBB, 0x37, 0xC4, 0xD2, 0xE3, 
	0x58, 0xE0, 0x37, 0xCA, 0xF1, 0x6F, 0x4F, 0x05, 0x58, 0x2D, 
	0x53, 0xC1, 0xBA, 0xD1, 0xDE, 0x1E, 0xDA, 0xF8, 0xF1, 0xF1, 
	0xFC, 0xEB, 0x66, 0x46, 0xE6, 0x7B, 0x7B, 0xE2, 0x0A, 0xB6, 
	0x97, 0x6E, 0x67, 0x11, 0xB4, 0x8C, 0x57, 0x5E, 0xC7, 0xB4, 
	0x6B, 0x9D, 0x33, 0x63, 0xAE, 0x69, 0x21, 0x7D, 0x9F, 0x4C, 
	0xD1, 0xAD, 0xF5, 0x48, 0x73, 0x49, 0x9C, 0x11, 0x05, 0xF0, 
	0xBE, 0xA2, 0x10, 0x14, 0x9E, 0xC9, 0x3D, 0xD2, 0xF7, 0x8A, 
	0x24, 0xDD, 0x84, 0xAB, 0xB9, 0x00, 0xD6, 0xDF, 0xE5, 0x3A, 
	0x9C, 0xAE, 0xA4, 0x6C, 0xF8, 0x8D, 0x9E, 0x51, 0x79, 0x17, 
	0xF5, 0xF9, 0x24, 0xE5, 0x3D, 0xEE, 0x13, 0xF5, 0xC7, 0x8F, 
	0x57, 0xA6, 0xBD, 0xFF, 0xB9, 0x21, 0xF4, 0x7E, 0x0A, 0xAE, 
	0x16, 0xB0, 0x94, 0x9E, 0xC6, 0x71, 0x47, 0x85, 0xC8, 0xC8, 
	0xC0, 0xA9, 0xC1, 0x10, 0x2E, 0x3D, 0x4A, 0xF2, 0xB0, 0x70, 
	0x29, 0xE8, 0x3F, 0x99, 0xD1, 0x79, 0x1E, 0x8B, 0x9B, 0x28, 
	0x8B, 0x16, 0x51, 0x1C, 0xB1, 0x7B, 0x4F, 0xE5, 0xF7, 0xB0, 
	0xF9, 0x70, 0xA3, 0x8C, 0x06, 0x1E, 0xD1, 0xBF, 0xE3, 0x85, 
	0x55, 0x00, 0x84, 0xB7, 0x70, 0x00, 0x42, 0x69, 0x8F, 0x8F, 
	0x1D, 0x71, 0x03, 0x4F, 0x56, 0x4D, 0x2F, 0x15, 0xE9, 0xE1, 
	0x1D, 0xD2, 0xC8, 0x55, 0xCE, 0x6F, 0x67, 0x48, 0x6D, 0x7E, 
	0xD2, 0x68, 0x3B, 0xB3, 0xB9, 0x5E, 0x66, 0x11, 0xF7, 0xFF, 
	0x47, 0xAC, 0x55, 0x14, 0x86, 0x24, 0x51, 0x2B, 0x39, 0x78, 
	0x0C, 0x4B, 0x62, 0x40, 0x1A, 0xA9, 0xB0, 0xA3, 0x24, 0x25, 
	0x22, 0x59, 0xF6, 0x88, 0x75, 0xB4, 0x87, 0x5B, 0x1A, 0x31, 
	0x72, 0x36, 0x9D, 0x76, 0x2A, 0xB0, 0xA4, 0xF0, 0x06, 0x98, 
	0x0A, 0xB8, 0x18, 0xE0, 0x62, 0x47, 0x70, 0x56, 0x2F, 0x90, 
	0x31, 0x40, 0xF6, 0x20, 0xA4, 0x7A, 0x30, 0x1D, 0xD8, 0xAF, 
	0xE0, 0xE6, 0x1B, 0x76, 0x2E, 0x16, 0xDC, 0xDB, 0x70, 0x8F, 
	0x1B, 0xA7, 0x01, 0xDC, 0x8F, 0x87, 0x3A, 0xFC, 0x37, 0xD7, 
	0x87, 0xD2, 0x1C, 0xDB, 0x99, 0x4D, 0x0C, 0x7D, 0x02, 0x77, 
	0x23, 0x67, 0x36, 0x82, 0x7D, 0x1D, 0xDC, 0x8D, 0x61, 0x1C, 
	0x6E, 0xCD, 0xA1, 0x81, 0x47, 0x1C, 0x67, 0x06, 0x99, 0x5F, 
	0x37, 0x0F, 0xB1, 0x81, 0xD4, 0x0F, 0x61, 0x2B, 0x8A, 0xFB, 
	0x22, 0xD3, 0xE6, 0xD3, 0xE0, 0x06, 0x56, 0x5A, 0x7C, 0x2E, 
	0x2C, 0x1C, 0xF2, 0xA1, 0xC3, 0x7C, 0xC8, 0xC2, 0xD5, 0xC0, 
	0x16, 0x0F, 0xE3, 0x16, 0x2C, 0x86, 0xD3, 0x85, 0x85, 0x08, 
	0x2C, 0x80, 0x66, 0x03, 0x04, 0xDE, 0x3F, 0xE0, 0xFD, 0x36, 
	0x47, 0x0C, 0xD0, 0x46, 0x63, 0x5B, 0xF4, 0xDB, 0xBC, 0x1F, 
	0x9A, 0x70, 0xCF, 0xC1, 0xC1, 0xA4, 0x09, 0xDC, 0x03, 0x17, 
	0x38, 0xBD, 0x8F, 0x90, 0x91, 0x35, 0x01, 0xFA, 0x7C, 0x21, 
	0x70, 0xB4, 0x07, 0x03, 0x90, 0x13, 0x39, 0x0E, 0x47, 0xFA, 
	0x18, 0x66, 0x0E, 0x80, 0xA3, 0x05, 0x3B, 0xC1, 0xF1, 0x64, 
	0x0C, 0x0D, 0x60, 0x09, 0x37, 0x00, 0x03, 0x8E, 0xF4, 0x03, 
	0x54, 0xC7, 0xD0, 0x02, 0x15, 0xE0, 0x12, 0x60, 0x6A, 0x1B, 
	0x13, 0x90, 0xD7, 0x82, 0xC6, 0x04, 0x47, 0x00, 0x19, 0x0A, 
	0x34, 0x38, 0x44, 0xE1, 0x41, 0x61, 0x48, 0x14, 0x34, 0x89, 
	0x7D, 0x36, 0xDC, 0x0F, 0x51, 0x0E, 0xC4, 0x68, 0x23, 0x07, 
	0x68, 0x0C, 0x79, 0x03, 0xE8, 0x0C, 0xC6, 0x63, 0xE8, 0xC4, 
	0x06, 0x20, 0x9E, 0xD8, 0x70, 0x9E, 0x1A, 0x01, 0xBB, 0x11, 
	0xAC, 0x01, 0x82, 0xC0, 0x01, 0x64, 0x1F, 0x99, 0xA2, 0x61, 
	0x59, 0xC0, 0x6E, 0x0C, 0x23, 0x87, 0xB9, 0xD6, 0xB1, 0x1F, 
	0xD4, 0x8E, 0x8A, 0x1E, 0xA3, 0xE9, 0xAC, 0x11, 0xAF, 0x57, 
	0x4C, 0x90, 0xA1, 0x39, 0x82, 0xF9, 0x80, 0x75, 0x02, 0x93, 
	0x26, 0x63, 0x4B, 0x1F, 0x4E, 0x46, 0x73, 0x98, 0x09, 0x2B, 
	0x10, 0x16, 0x2E, 0x39, 0x34, 0x79, 0x03, 0x6E, 0xF8, 0x5A, 
	0x63, 0xFE, 0xE4, 0x66, 0xB7, 0x11, 0x0B, 0x56, 0xE0, 0x79, 
	0x01, 0xE6, 0x9E, 0xE1, 0x5C, 0x7B, 0x08, 0xC9, 0xD2, 0xBF, 
	0x89, 0x99, 0x03, 0xE9, 0x26, 0x99, 0x95, 0xFD, 0xF3, 0x99, 
	0x39, 0xD7, 0x44, 0x46, 0xE5, 0x3B, 0x1F, 0x95, 0xE2, 0x8E, 
	0x59, 0x7F, 0xB8, 0x73, 0xF2, 0x29, 0xE6, 0xBC, 0x57, 0x9B, 
	0x6E, 0xCC, 0x0F, 0x2C, 0xFD, 0xBE, 0x18, 0xB5, 0x1A, 0xA3, 
	0x26, 0x8E, 0xD2, 0x3B, 0x07, 0x4E, 0xBD, 0xF4, 0x1E, 0x7F, 
	0xC5, 0xFE, 0xA1, 0x41, 0x41, 0x5F, 0x11, 0xDC, 0x82, 0x3B, 
	0x8D, 0xA5, 0x4F, 0x79, 0x42, 0x94, 0xE1, 0x04, 0x11, 0xC5, 
	0x52, 0x85, 0xFE, 0x10, 0x48, 0x88, 0xF4, 0x40, 0x02, 0xA0, 
	0xD3, 0x26, 0xF9, 0x03, 0x0B, 0xF6, 0x82, 0xB9, 0x02, 0x70, 
	0xCF, 0xC5, 0xB7, 0xC5, 0xF9, 0xD6, 0x95, 0xE2, 0x96, 0x0C, 
	0xB3, 0x49, 0xA9, 0x97, 0xC0, 0x07, 0x96, 0xE0, 0xEA, 0xF5, 
	0x99, 0xD3, 0xCE, 0x4E, 0x75, 0x74, 0x1A, 0xEC, 0x7A, 0x03, 
	0x43, 0x6B, 0xE8, 0xA4, 0xA9, 0xE1, 0x9E, 0xCD, 0xA7, 0xFC, 
	0x54, 0x31, 0x40, 0x6A, 0x87, 0x6E, 0x80, 0x02, 0x3E, 0x82, 
	0x00, 0xBB, 0xBB, 0x80, 0x2D, 0xE8, 0x0F, 0x97, 0xC3, 0x86, 
	0x18, 0x13, 0x57, 0x2B, 0xBF, 0x0E, 0x5F, 0x2E, 0x46, 0x53, 
	0x69, 0x83, 0x9A, 0x04, 0x23, 0xAB, 0x6F, 0xE7, 0x18, 0xB1, 
	0xA2, 0x91, 0x83, 0x32, 0x2D, 0xBB, 0x0D, 0x85, 0x99, 0x73, 
	0x1F, 0xE4, 0x57, 0xFB, 0xE5, 0x28, 0x38, 0x1F, 0x89, 0x71, 
	0xB7, 0xE9, 0x4E, 0x03, 0x90, 0xBC, 0x00, 0x62, 0xD9, 0x25, 
	0x10, 0xA3, 0x55, 0x1D, 0xE3, 0x97, 0x33, 0xB6, 0xC0, 0x06, 
	0xCF, 0xF1, 0x1D, 0xF6, 0xC6, 0x93, 0x52, 0x05, 0x43, 0xAB, 
	0x52, 0x81, 0x3D, 0x6E, 0xE3, 0x7C, 0xB8, 0x83, 0xF3, 0x8B, 
	0xFC, 0xD7, 0x1C, 0x4F, 0x72, 0x9A, 0xFA, 0xDF, 0xA1, 0x62, 
	0x8C, 0xFE, 0x01, 0x2A, 0x83, 0x61, 0x9B, 0x78, 0x93, 0xBF, 
	0x23, 0xDE, 0xE1, 0xA4, 0x85, 0xE4, 0x60, 0x17, 0xC9, 0x16, 
	0x5B, 0xD9, 0x35, 0x53, 0xF5, 0xCC, 0xD2, 0x23, 0xAA, 0x70, 
	0x19, 0x94, 0x0E, 0xB1, 0x43, 0xF8, 0x6D, 0xB2, 0x5D, 0xDB, 
	0xC0, 0x78, 0x7B, 0x39, 0x65, 0x19, 0xBE, 0xBD, 0x2B, 0x61, 
	0xB4, 0x6A, 0xA4, 0x6B, 0x82, 0xB7, 0x35, 0xB4, 0x32, 0xF9, 
	0x65, 0xC0, 0x3D, 0x7C, 0x18, 0xCB, 0x70, 0x0F, 0xED, 0x96, 
	0x94, 0x62, 0x49, 0xE1, 0x7A, 0xF8, 0x5B, 0x3C, 0xBA, 0x66, 
	0x2D, 0x24, 0x7B, 0x63, 0xA3, 0x85, 0x8D, 0x39, 0xAE, 0xD8, 
	0x0C, 0x5B, 0x35, 0x64, 0xFE, 0xB6, 0xCF, 0x70, 0x75, 0xFD, 
	0x96, 0x86, 0xCC, 0x86, 0x86, 0x50, 0x19, 0xFF, 0xB8, 0x8A, 
	0x26, 0xF5, 0x8C, 0x65, 0xD9, 0x3B, 0xD8, 0xFC, 0x5C, 0x45, 
	0xBF, 0x90, 0xAE, 0xCD, 0x66, 0x10, 0x1C, 0xF2, 0xE7, 0x89, 
	0x8D, 0x1C, 0xED, 0xD2, 0x69, 0x2B, 0xAF, 0x9D, 0x0C, 0x7F, 
	0x5D, 0x79, 0xF5, 0x94, 0xD8, 0x1B, 0x8F, 0xFA, 0xF6, 0x16, 
	0x0F, 0x4B, 0x4E, 0x85, 0x83, 0x36, 0xA1, 0x46, 0x2F, 0x17, 
	0x6A, 0xD8, 0x30, 0xD7, 0xD8, 0xDC, 0xE2, 0x87, 0xBB, 0xB3, 
	0x52, 0x89, 0xD6, 0x6F, 0x24, 0xB8, 0xEE, 0xC0, 0xAA, 0xC7, 
	0x5E, 0x6F, 0x62, 0xBD, 0xC0, 0xB9, 0x5E, 0x46, 0xAB, 0x5B, 
	0xA7, 0x25, 0xEB, 0xE1, 0xF0, 0x17, 0xB6, 0x14, 0xE3, 0x7A, 
	0xC0, 0x59, 0xC3, 0xF2, 0xD9, 0x6B, 0x97, 0xDA, 0x1E, 0x96, 
	0x9E, 0xFA, 0x54, 0x1C, 0x0E, 0x02, 0x2F, 0x5F, 0x33, 0x80, 
	0x93, 0xC9, 0x1A, 0xCE, 0x23, 0x58, 0x48, 0xD1, 0xF2, 0x83, 
	0x71, 0x79, 0x44, 0x88, 0x8A, 0x23, 0x42, 0xB1, 0xA7, 0x62, 
	0xE4, 0xAE, 0x01, 0xA0, 0xE6, 0xCF, 0xC3, 0x41, 0x77, 0x64, 
	0xFC, 0x47, 0xD4, 0x83, 0x9F, 0x82, 0x06, 0xEC, 0x5D, 0xF8, 
	0xAA, 0x9E, 0x9F, 0x04, 0xAB, 0x94, 0xC2, 0xA1, 0xFC, 0x1A, 
	0x8E, 0x3D, 0xA8, 0x9E, 0xBC, 0x48, 0x27, 0xEA, 0x7C, 0xCB, 
	0x34, 0x61, 0xBD, 0x5B, 0x0E, 0x17, 0xA6, 0x2C, 0xD2, 0x38, 
	0x2C, 0x3A, 0xB3, 0xE8, 0x7F, 0x09, 0x74, 0x0D, 0x6C, 0x38, 
	0x75, 0xBA, 0xB4, 0x8F, 0xB4, 0xCE, 0xA0, 0x1F, 0xCE, 0x60, 
	0x5E, 0x00, 0x27, 0xE3, 0xCA, 0x06, 0x94, 0x0B, 0xF8, 0x3C, 
	0xDA, 0xED, 0x0D, 0x69, 0x77, 0xF8, 0xEC, 0xF6, 0xEB, 0xA4, 
	0xD1, 0x6E, 0x6E, 0xBB, 0x60, 0x6F, 0xD6, 0x05, 0xC3, 0x6E, 
	0xCB, 0x92, 0xC3, 0xB6, 0x0C, 0xA9, 0xFC, 0x58, 0xD4, 0x38, 
	0x9B, 0x15, 0xC8, 0xD1, 0xFA, 0x0E, 0x3A, 0xB9, 0xA5, 0x7B, 
	0x29, 0x0D, 0x09, 0x6A, 0x49, 0x4C, 0xD9, 0x96, 0x99, 0x75, 
	0xCD, 0x86, 0xC8, 0x6E, 0x21, 0x32, 0x48, 0x1C, 0x46, 0x9B, 
	0xB2, 0x64, 0x01, 0x47, 0xF9, 0x27, 0x7E, 0xEE, 0x27, 0x3A, 
	0xD5, 0xF2, 0xFA, 0x80, 0xA8, 0x58, 0x0D, 0xE0, 0x6C, 0x8F, 
	0xA5, 0x0E, 0xA9, 0x44, 0xB5, 0x7F, 0x84, 0x35, 0x0C, 0x85, 
	0x1F, 0x52, 0xBD, 0x4A, 0x02, 0xD8, 0x38, 0xAD, 0xEF, 0x5C, 
	0xC9, 0x38, 0x4E, 0xC2, 0x2B, 0x54, 0x2E, 0x56, 0xEB, 0xA3, 
	0xC0, 0x8F, 0x7B, 0x7E, 0x1C, 0x5D, 0x25, 0x0E, 0x4B, 0xD7, 
	0xAE, 0x7A, 0xFC, 0x7A, 0xBF, 0xDB, 0x01, 0x7C, 0x5A, 0x77, 
	0x5F, 0xD9, 0x4B, 0x16, 0xD9, 0xDA, 0x55, 0x8E, 0x0E, 0x90, 
	0xEC, 0xB1, 0x72, 0x04, 0xC0, 0x94, 0x28, 0xF4, 0xD4, 0x78, 
	0x11, 0x87, 0xDF, 0x44, 0x09, 0x59, 0xE1, 0x55, 0x1A, 0xEC, 
	0x52, 0x8F, 0xF7, 0xBB, 0xBC, 0xC0, 0x57, 0xFA, 0xA4, 0xD6, 
	0x55, 0x8F, 0x0E, 0x60, 0xCD, 0xB1, 0xAA, 0xA7, 0x49, 0x1C, 
	0x25, 0x44, 0xB8, 0x61, 0xE6, 0x6D, 0x95, 0x21, 0x81, 0x20, 
	0xD6, 0xF4, 0xF2, 0x22, 0x64, 0xD1, 0x12, 0x75, 0x0B, 0x61, 
	0x7F, 0x51, 0xB5, 0x28, 0x49, 0x17, 0xE5, 0xC9, 0x65, 0x9C, 
	0xFA, 0xCC, 0xE1, 0x05, 0x7D, 0xF5, 0x29, 0xAF, 0x8F, 0x64, 
	0x9A, 0x9E, 0xD5, 0x2B, 0xE6, 0x6A, 0x9A, 0xFC, 0x20, 0xF7, 
	0xF8, 0x96, 0x4B, 0xE5, 0xA7, 0xE9, 0x7D, 0x2E, 0x00, 0xAF, 
	0x92, 0xEC, 0x6B, 0x92, 0xFE, 0x38, 0x7C, 0xB6, 0x8A, 0xB2, 
	0x3E, 0x67, 0xA7, 0xB9, 0xAA, 0xF6, 0x04, 0x24, 0xA9, 0xEE, 
	0x57, 0x07, 0xF2, 0x18, 0x82, 0x2B, 0x3E, 0xAA, 0x15, 0x03, 
	0xDD, 0xB8, 0x88, 0x30, 0x5F, 0x36, 0x60, 0x59, 0xC0, 0x5A, 
	0x9E, 0xA9, 0x3A, 0x2F, 0xB6, 0x62, 0xF9, 0x92, 0xF1, 0xF2, 
	0x65, 0x2C, 0xC0, 0x22, 0x65, 0x51, 0x0F, 0x60, 0x7A, 0x9C, 
	0xF3, 0xE2, 0x14, 0x16, 0x54, 0x26, 0x10, 0xC4, 0x94, 0x57, 
	0x6B, 0xE4, 0x82, 0x00, 0x47, 0x00, 0xC1, 0x1E, 0x0A, 0x96, 
	0x19, 0x2F, 0x62, 0x54, 0x55, 0xDD, 0x9B, 0x6B, 0xB5, 0x2A, 
	0xE9, 0x42, 0xE3, 0x49, 0xD3, 0xD3, 0xA6, 0x77, 0x65, 0xEC, 
	0x2D, 0x2A, 0x0D, 0x25, 0x43, 0xA9, 0x4C, 0xE3, 0x38, 0xE6, 
	0xA2, 0x00, 0x8C, 0x50, 0x4F, 0xC8, 0xAD, 0xF2, 0x79, 0x8D, 
	0xD5, 0x89, 0x8E, 0xA8, 0x63, 0x66, 0x8E, 0x02, 0xB8, 0xF5, 
	0x58, 0x37, 0xF4, 0x9A, 0xF4, 0x9E, 0x17, 0x9F, 0x98, 0x8E, 
	0xA1, 0xB5, 0xD4, 0x4F, 0xAB, 0x42, 0x75, 0x5A, 0x5F, 0xC3, 
	0xCB, 0x6E, 0x44, 0x0F, 0xF3, 0x6B, 0x0A, 0x62, 0x6C, 0x59, 
	0x2C, 0xE0, 0xEF, 0x66, 0x79, 0x9C, 0x15, 0x54, 0x84, 0xF1, 
	0x00, 0xF6, 0x3E, 0xE4, 0xC1, 0x9A, 0x99, 0x5C, 0x59, 0x35, 
	0xD1, 0x1A, 0x5F, 0xA3, 0x02, 0xED, 0x32, 0x52, 0x64, 0x5D, 
	0x32, 0x1A, 0x17, 0x52, 0xCB, 0xB1, 0xA3, 0x62, 0x6C, 0xE2, 
	0xCB, 0x10, 0x42, 0x95, 0x8B, 0x4B, 0x7C, 0x2B, 0xCA, 0xA2, 
	0xE4, 0x2A, 0x53, 0x05, 0x42, 0x7F, 0xBB, 0xB6, 0x7D, 0x7C, 
	0x71, 0xE9, 0x40, 0x68, 0x2C, 0x8E, 0x45, 0x99, 0x5B, 0x47, 
	0x15, 0x0E, 0x2B, 0x0D, 0xB6, 0x14, 0xDB, 0x91, 0xF5, 0xC5, 
	0x25, 0x5A, 0x3F, 0x37, 0x8D, 0xD4, 0x51, 0x2B, 0xB7, 0xDB, 
	0x72, 0xB5, 0x1D, 0x27, 0x9D, 0x2D, 0xAF, 0x20, 0x4D, 0xCD, 
	0xE2, 0xF9, 0x56, 0x91, 0x7D, 0x70, 0x1C, 0x9F, 0xA8, 0x4A, 
	0x5F, 0x01, 0xC9, 0x54, 0xB7, 0xF1, 0x26, 0xA0, 0x28, 0xC1, 
	0xE7, 0x3F, 0xC7, 0xD3, 0x9B, 0x45, 0x42, 0x98, 0xF2, 0xD1, 
	0xCF, 0x7E, 0x38, 0xBF, 0x04, 0x3C, 0xE3, 0x0B, 0x25, 0xE0, 
	0x52, 0xC7, 0xCF, 0x81, 0x9B, 0x2F, 0x03, 0x8E, 0x16, 0x14, 
	0xE5, 0x2D, 0xF1, 0x25, 0x86, 0x5C, 0xE1, 0x82, 0x3C, 0x27, 
	0x3A, 0x31, 0xFA, 0x8D, 0xF9, 0xB1, 0x07, 0xCE, 0x25, 0x77, 
	0x1C, 0x79, 0xE6, 0xB0, 0x16, 0x81, 0x3C, 0x3B, 0xCA, 0xE6, 
	0xAD, 0x66, 0xC3, 0xD3, 0x2E, 0x37, 0xA9, 0x9C, 0x4E, 0x65, 
	0x71, 0x61, 0xEE, 0xBB, 0x44, 0xCA, 0x47, 0x55, 0x5B, 0x64, 
	0xA4, 0x60, 0x45, 0x82, 0x1F, 0x8B, 0xF4, 0x0E, 0xD3, 0x5A, 
	0x5E, 0x7D, 0x15, 0x9E, 0x09, 0x13, 0x2F, 0x2E, 0x17, 0x65, 
	0x62, 0xD9, 0x2A, 0x16, 0x8A, 0xDC, 0xC2, 0x97, 0x93, 0xF0, 
	0x64, 0x3F, 0xAF, 0x88, 0xEE, 0x3B, 0xFB, 0xA2, 0x88, 0xB8, 
	0x0F, 0x9E, 0x8C, 0x79, 0xA1, 0x98, 0x81, 0xA0, 0x51, 0x81, 
	0x58, 0x5C, 0x2E, 0x6F, 0xB1, 0x7C, 0x22, 0xE3, 0xDF, 0x34, 
	0xA3, 0xBA, 0x02, 0x51, 0xD8, 0x26, 0x14, 0xDF, 0xC5, 0x38, 
	0x4A, 0xC4, 0xB3, 0x70, 0x6F, 0x11, 0xA7, 0xC1, 0x0F, 0x57, 
	0xA9, 0x80, 0x61, 0x64, 0x77, 0x76, 0x30, 0x3B, 0x51, 0xB3, 
	0x55, 0x7A, 0x0B, 0x56, 0xCA, 0x0B, 0x9D, 0x90, 0xD4, 0x39, 
	0x4A, 0x61, 0x12, 0x31, 0x0D, 0xED, 0x63, 0x7A, 0x92, 0x8E, 
	0xAD, 0xB9, 0xC6, 0x4D, 0x5A, 0xF3, 0x45, 0x65, 0xCB, 0xD5, 
	0x36, 0xDB, 0xAE, 0xC6, 0xD1, 0x7F, 0x2B, 0x4A, 0xDE, 0x71, 
	0x65, 0x81, 0x5A, 0xEF, 0x6E, 0xA7, 0xAB, 0xA0, 0xC7, 0x5D, 
	0x93, 0x7B, 0xDD, 0x66, 0xA7, 0xD7, 0x89, 0x62, 0x53, 0x1D, 
	0x63, 0x67, 0x4A, 0x68, 0xE4, 0xC7, 0x9A, 0x2A, 0x9E, 0xB9, 
	0x1B, 0xB9, 0x44, 0x5E, 0x95, 0xEE, 0x93, 0x62, 0x43, 0xB5, 
	0xA3, 0x54, 0x9F, 0x70, 0xFD, 0xD0, 0xFA, 0x0B, 0x2A, 0xE3, 
	0x95, 0x07, 0xEB, 0x68, 0x3D, 0x3E, 0x57, 0x18, 0x82, 0xAE, 
	0xD8, 0xCC, 0xB5, 0x24, 0x72, 0x12, 0xC7, 0x57, 0x51, 0xF0, 
	0xAD, 0x7C, 0xEB, 0xC5, 0x7F, 0x93, 0x22, 0x0A, 0x77, 0x8C, 
	0x16, 0xB9, 0xD3, 0x51, 0xB1, 0xF0, 0xCC, 0x47, 0xE7, 0x33, 
	0x3E, 0x8C, 0x97, 0x04, 0x2F, 0xC6, 0xDC, 0xEB, 0x3C, 0x33, 
	0xB8, 0x67, 0xDA, 0xDA, 0xA3, 0xF4, 0x24, 0x3C, 0x36, 0x4E, 
	0xCC, 0x11, 0xE4, 0x78, 0x57, 0x2D, 0x9E, 0x5B, 0x41, 0xF1, 
	0x3E, 0x4B, 0x7A, 0x4C, 0xF8, 0xF8, 0xAA, 0xDE, 0x80, 0x7F, 
	0xCF, 0xBE, 0x1C, 0x49, 0xA0, 0x65, 0x8E, 0x6A, 0x1D, 0xE8, 
	0x66, 0x86, 0x63, 0x6A, 0x2D, 0x34, 0x53, 0xAA, 0x74, 0x32, 
	0xFC, 0xBA, 0x04, 0x5F, 0xBA, 0xFF, 0x26, 0x69, 0xFE, 0x74, 
	0xE2, 0x0F, 0xCF, 0xA8, 0x5D, 0xC7, 0x60, 0xBF, 0xDD, 0x2A, 
	0x6E, 0x19, 0x2C, 0x94, 0x10, 0x69, 0x2E, 0xA7, 0x97, 0x72, 
	0xB0, 0xB8, 0x1F, 0xEB, 0xFB, 0x61, 0xD8, 0x91, 0xF1, 0xC3, 
	0xF3, 0x4B, 0x95, 0xDE, 0x5B, 0xF9, 0xDE, 0x0C, 0x14, 0x04, 
	0xDB, 0x17, 0x08, 0x84, 0xAC, 0x91, 0xE8, 0x32, 0x08, 0x8A, 
	0xFA, 0x2E, 0x23, 0xFF, 0xD2, 0x6C, 0x96, 0xCD, 0xE5, 0x9D, 
	0x86, 0x88, 0xBC, 0x7C, 0x00, 0x52, 0x2B, 0xDA, 0x0B, 0x37, 
	0x46, 0x04, 0xEF, 0x1E, 0x1F, 0x0D, 0x1E, 0x88, 0xB5, 0x61, 
	0xE1, 0xAD, 0xA1, 0xF7, 0x53, 0xE5, 0xD5, 0xDF, 0x58, 0x71, 
	0xED, 0x69, 0x65, 0x5C, 0x67, 0x9C, 0x53, 0x7D, 0xDC, 0x9C, 
	0xE7, 0x8F, 0x7F, 0x37, 0xC4, 0x77, 0xCC, 0xDE, 0x4C, 0x9E, 
	0xAB, 0xC7, 0x73, 0x6E, 0xD1, 0x48, 0xB6, 0x68, 0x35, 0x01, 
	0x8E, 0x53, 0x2A, 0x66, 0x9E, 0x3A, 0x5A, 0x48, 0xCF, 0x32, 
	0x0D, 0xB1, 0x5B, 0x02, 0xC3, 0x87, 0x60, 0xC2, 0x90, 0xFE, 
	0x15, 0x4F, 0xBF, 0x8A, 0x08, 0xD4, 0x7D, 0x9E, 0x09, 0xB1, 
	0x7C, 0xAD, 0x47, 0xBB, 0x37, 0x0F, 0x7C, 0x49, 0xE3, 0xB5, 
	0x58, 0xC2, 0x5F, 0x8B, 0x69, 0x72, 0x60, 0xE3, 0xA4, 0x96, 
	0xC0, 0x6E, 0x37, 0xBF, 0xA6, 0x07, 0x1E, 0xED, 0x0B, 0xA3, 
	0x67, 0x33, 0xDA, 0x17, 0xEE, 0x44, 0x42, 0xFE, 0x99, 0xD7, 
	0x5C, 0x44, 0x4C, 0x71, 0x1E, 0xFB, 0x06, 0xAC, 0x9E, 0x7D, 
	0x9D, 0x55, 0x76, 0x17, 0xAF, 0x87, 0x64, 0xFD, 0xCA, 0x83, 
	0xD0, 0xDC, 0x1A, 0xC7, 0x38, 0x06, 0x93, 0x05, 0x68, 0xF8, 
	0x4E, 0x09, 0xB9, 0x2D, 0x29, 0x68, 0x7B, 0x7B, 0xCF, 0x8F, 
	0xD7, 0x03, 0x5D, 0x6F, 0x5A, 0x39, 0x80, 0x1F, 0x57, 0x84, 
	0xD0, 0x8E, 0x9C, 0xD7, 0x49, 0xE0, 0xD0, 0x00, 0x21, 0xB0, 
	0xB7, 0xF7, 0x2A, 0xAA, 0x72, 0xDC, 0xDE, 0x1E, 0x77, 0x80, 
	0x97, 0xBF, 0xB3, 0xE4, 0x64, 0x7E, 0xF6, 0xDE, 0x52, 0xAF, 
	0xDE, 0x56, 0xEA, 0x35, 0xA7, 0x40, 0x4D, 0xE8, 0x88, 0xB5, 
	0x69, 0x5D, 0x31, 0x01, 0xF2, 0x16, 0x04, 0xED, 0x83, 0xFC, 
	0x9A, 0x75, 0xEB, 0x55, 0x2F, 0xAD, 0x6F, 0x1C, 0xA4, 0xDD, 
	0xC9, 0xAE, 0xA0, 0x85, 0x80, 0x0C, 0xEA, 0x51, 0x22, 0xDE, 
	0xA1, 0x26, 0x9E, 0xE5, 0x26, 0x52, 0x10, 0xC3, 0x41, 0xB7, 
	0x58, 0x96, 0x6C, 0xC5, 0x71, 0x84, 0x9A, 0x16, 0xD0, 0xE2, 
	0xF6, 0x2C, 0x05, 0x48, 0x1B, 0x56, 0xA3, 0xCD, 0x5C, 0xB5, 
	0x7B, 0xCA, 0xF3, 0xCF, 0x04, 0x5A, 0x65, 0x7F, 0xAF, 0xCA, 
	0xFA, 0x6E, 0xDB, 0x77, 0x02, 0xC5, 0x29, 0x2B, 0x16, 0xDB, 
	0x8F, 0xD0, 0x3B, 0xA5, 0xD4, 0xBF, 0xEF, 0x47, 0x19, 0xBF, 
	0x6E, 0x4B, 0x04, 0xC7, 0x8E, 0xF0, 0xA4, 0xD9, 0x0B, 0x2A, 
	0x72, 0x9A, 0x7D, 0xFA, 0xC6, 0xEB, 0xA5, 0x3D, 0x13, 0x1F, 
	0x9C, 0x78, 0x6E, 0x86, 0xCD, 0xB7, 0xEA, 0x79, 0xE8, 0x02, 
	0xE9, 0x52, 0x49, 0xCB, 0xC4, 0x78, 0x0E, 0x36, 0x38, 0x3F, 
	0x6A, 0xAE, 0x2D, 0xD4, 0x7A, 0x2E, 0xF6, 0x15, 0x71, 0x23, 
	0xE1, 0xD4, 0x79, 0x9F, 0xCF, 0xF5, 0xF3, 0x9F, 0x3D, 0x49, 
	0x68, 0xA3, 0x85, 0xC1, 0xE7, 0x9D, 0xE7, 0xE7, 0x1C, 0xDC, 
	0x37, 0x70, 0x43, 0x7D, 0xF5, 0x20, 0xEB, 0x6D, 0x81, 0xDD, 
	0x62, 0xB8, 0x03, 0x6D, 0xCF, 0x14, 0x5B, 0xAD, 0x97, 0x4E, 
	0xDE, 0xD6, 0xE2, 0xEE, 0xB9, 0x3C, 0xB3, 0xC2, 0x1E, 0x47, 
	0x5F, 0x63, 0x2D, 0x68, 0xD9, 0x31, 0x8E, 0xD3, 0xBD, 0xBD, 
	0xFC, 0x43, 0xB5, 0xD9, 0x66, 0xDE, 0x50, 0x67, 0x35, 0xF0, 
	0x9C, 0x22, 0xBF, 0x76, 0xAB, 0x79, 0x7F, 0x5B, 0x89, 0x00, 
	0xEC, 0xBC, 0xCB, 0x8D, 0x9D, 0x1E, 0x1B, 0x8F, 0x8F, 0x61, 
	0x8B, 0x26, 0x60, 0x5B, 0xBF, 0xD5, 0x67, 0xCA, 0xD0, 0xDB, 
	0xFD, 0x0A, 0x05, 0xF2, 0x3A, 0x2D, 0x63, 0xE6, 0xDC, 0x49, 
	0xB5, 0x1D, 0x92, 0x9D, 0xFF, 0x53, 0xD2, 0x84, 0x12, 0xBE, 
	0xF4, 0xD8, 0x33, 0x4E, 0x2C, 0xC7, 0xDC, 0xED, 0xB0, 0xE0, 
	0xEE, 0x2F, 0x75, 0xD9, 0xF5, 0x6F, 0xE1, 0x5B, 0x17, 0xF8, 
	0xBA, 0xDD, 0xA7, 0x27, 0x5E, 0x9C, 0x7C, 0x92, 0x3F, 0xB0, 
	0x2A, 0x3E, 0x37, 0x78, 0x28, 0x6A, 0x0A, 0xFC, 0x2B, 0x28, 
	0x39, 0xFB, 0x2D, 0xD2, 0xF0, 0xFE, 0x81, 0x97, 0x8E, 0x96, 
	0xFE, 0x75, 0x14, 0xDF, 0x3B, 0xA7, 0xB8, 0x3D, 0xD6, 0xCF, 
	0x21, 0xD7, 0x10, 0xAC, 0x1D, 0xE9, 0x99, 0x9F, 0x64, 0xBD, 
	0x0C, 0x36, 0xCD, 0x4B, 0xB7, 0x77, 0x4B, 0x16, 0x3F, 0x22, 
	0xD6, 0x5B, 0x53, 0xAC, 0x81, 0x05, 0x69, 0x9C, 0xD2, 0x9E, 
	0x1F, 0x7E, 0xBF, 0xC9, 0x98, 0x43, 0xEE, 0xFC, 0x80, 0xB9, 
	0x4F, 0x58, 0x46, 0xAB, 0xED, 0x7F, 0x57, 0x03, 0xE5, 0x41, 
	0x59, 0xF0, 0x72, 0x99, 0xA3, 0xBC, 0x1E, 0xF0, 0x3F, 0x25, 
	0x4B, 0xE3, 0x28, 0x54, 0x4C, 0xD8, 0xD5, 0x2B, 0x6B, 0xD8, 
	0x4F, 0x41, 0x70, 0x39, 0x36, 0x36, 0xAE, 0x7D, 0x7A, 0x15, 
	0x25, 0x8E, 0x62, 0xD9, 0x8A, 0xA1, 0xC0, 0x7F, 0xAE, 0x82, 
	0x5F, 0xA0, 0x5E, 0xD1, 0xF4, 0x26, 0x09, 0x05, 0x3B, 0xE7, 
	0xF5, 0xE2, 0x10, 0xFF, 0xB9, 0x39, 0xCD, 0x1E, 0xF5, 0xC3, 
	0xE8, 0x26, 0x13, 0xCB, 0xB7, 0xB9, 0xF7, 0xE3, 0x85, 0xF2, 
	0x50, 0x70, 0x07, 0x7E, 0x39, 0x67, 0xFC, 0xC2, 0x10, 0xFE, 
	0x9A, 0x44, 0x06, 0x48, 0x64, 0x8B, 0xA3, 0xF2, 0x9A, 0xF0, 
	0xBF, 0x0A, 0x2B, 0x40, 0xE3, 0xFF, 0x2A, 0xC0, 0x45, 0xC7, 
	0x8E, 0x83, 0x98, 0xA8, 0xAC, 0xF2, 0x12, 0x5C, 0x40, 0xF0, 
	0x9B, 0x4B, 0x58, 0x19, 0x25, 0xA2, 0xB0, 0x08, 0x8B, 0xF1, 
	0x78, 0xD3, 0x82, 0x1D, 0x8F, 0xD7, 0xA8, 0xBC, 0x2D, 0x15, 
	0xF8, 0x61, 0xB0, 0x0C, 0x27, 0xAD, 0xF2, 0x2E, 0xCF, 0x60, 
	0x85, 0xA8, 0x99, 0xC5, 0x64, 0xC9, 0xDC, 0x4A, 0xF5, 0x87, 
	0xFC, 0xAF, 0x4D, 0xF5, 0x56, 0xAB, 0xD8, 0xA5, 0xD4, 0x2D, 
	0x3A, 0x6A, 0x03, 0x1B, 0x53, 0xE0, 0x1C, 0xC4, 0xC4, 0xA7, 
	0x39, 0xE7, 0x27, 0xA5, 0x15, 0xDE, 0x6A, 0x08, 0xF3, 0x4A, 
	0x43, 0x73, 0x6A, 0xDB, 0x13, 0x5F, 0xA3, 0x0B, 0x97, 0xF3, 
	0x7A, 0x2C, 0x5D, 0x83, 0xF9, 0xF8, 0x27, 0x8A, 0x2D, 0x93, 
	0x57, 0x16, 0xCA, 0x5C, 0xD6, 0x42, 0x95, 0x21, 0xCE, 0x93, 
	0x75, 0xAE, 0x94, 0x4A, 0x2F, 0xD8, 0x1A, 0xE0, 0x5F, 0x40, 
	0x0F, 0x3D, 0xAC, 0xD0, 0x82, 0x69, 0xB7, 0xAB, 0xC1, 0x20, 
	0xC3, 0x70, 0x31, 0x74, 0x15, 0xD1, 0xBC, 0x5D, 0x41, 0x44, 
	0xBD, 0xD4, 0xF9, 0xB2, 0x37, 0x37, 0x4C, 0x79, 0x58, 0xA7, 
	0xE2, 0xFF, 0x5E, 0x70, 0x94, 0x65, 0x74, 0x47, 0x42, 0x5C, 
	0x0C, 0xFB, 0x9D, 0x6B, 0x47, 0xE1, 0x30, 0x79, 0x65, 0x33, 
	0xBF, 0x6F, 0x71, 0xBD, 0xE1, 0xD9, 0xE9, 0x7B, 0xDB, 0x28, 
	0xB8, 0x2B, 0x39, 0xFB, 0xD2, 0x11, 0x4D, 0x58, 0xA7, 0x08, 
	0xE4, 0x6D, 0xF2, 0xF2, 0xBE, 0x10, 0xFF, 0xAF, 0x01, 0x5F, 
	0x20, 0x48, 0xD2, 0x04, 0x96, 0xEF, 0xF0, 0xD2, 0x42, 0x3B, 
	0x43, 0xA0, 0xC9, 0x0D, 0x93, 0x7F, 0x28, 0xAC, 0xE4, 0x1F, 
	0x0A, 0x37, 0xC5, 0xC6, 0x89, 0x6D, 0x7E, 0x8B, 0x9F, 0xF3, 
	0x3D, 0x48, 0xB5, 0x07, 0x51, 0x57, 0x00, 0xCB, 0xF5, 0x49, 
	0xC8, 0x1E, 0xA4, 0x82, 0xAE, 0x5B, 0x09, 0x0C, 0xA2, 0x2E, 
	0x97, 0x4B, 0xB7, 0x10, 0xCC, 0x50, 0x2C, 0xB0, 0x90, 0xE5, 
	0xE6, 0x90, 0x8A, 0x66, 0x5B, 0xB8, 0x0A, 0xFF, 0x96, 0x62, 
	0x5B, 0x38, 0x7A, 0x9B, 0x29, 0xF3, 0xB8, 0x69, 0x0B, 0x9B, 
	0xB5, 0xF2, 0x50, 0xA8, 0xBC, 0x58, 0x2F, 0x79, 0x94, 0xD9, 
	0x1E, 0xA1, 0xFF, 0xBA, 0x26, 0x61, 0xE4, 0x2B, 0x3C, 0x1B, 
	0x82, 0x0B, 0xE6, 0xF6, 0x2E, 0xB5, 0x8B, 0xCA, 0x56, 0x5E, 
	0x45, 0xD7, 0xEB, 0x94, 0x32, 0x3F, 0x81, 0xE4, 0xF8, 0xA4, 
	0x8A, 0x33, 0x2A, 0x7E, 0x17, 0xD7, 0x33, 0xC5, 0xF7, 0x71, 
	0xB8, 0x1F, 0xE2, 0xDF, 0x86, 0xB9, 0xFF, 0x07, 0x8E, 0x8E, 
	0x08, 0xDA, 0xA4, 0x35, 0x00, 0x00, 
};

	// Default Controller Configuration (len=123)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x69, 0x0B, 0x0A, 0x61, 0x02, 0x01, 0x00, 0x01, 0x71, 
	0x02, 0x05, 0x00, 0x01, 0x0B, 0x0A, 0x61, 0x02, 0x02, 0x00, 
	0x01, 0x71, 0x02, 0x06, 0x00, 0x01, 0x0B, 0x0A, 0x61, 0x02, 
	0x03, 0x00, 0x01, 0x71, 0x02, 0x07, 0x00, 0x01, 0x0B, 0x0A, 
	0x61, 0x02, 0x04, 0x00, 0x01, 0x71, 0x02, 0x08, 0x00, 0x01, 
	0x07, 0x06, 0x01, 0x06, 0x51, 0x08, 0x02, 0x09, 0x06, 0x05, 
	0x01, 0x04, 0x31, 0x05, 0x02, 0x05, 0x04, 0x4F, 0x00, 0x01, 
	0x01, 0x0B, 0x0A, 0x61, 0x03, 0x01, 0x01, 0x00, 0x71, 0x03, 
	0x01, 0x04, 0x00, 0x03, 0x02, 0x01, 0x07, 0x05, 0x04, 0x0F, 
	0x06, 0x0F, 0x07, 0x05, 0x04, 0x0F, 0x07, 0x11, 0x07, 0x06, 
	0x05, 0x0F, 0x07, 0x31, 0x0C, 0x00, 0xFF, 0xC0, 0xA8, 0x0A, 
	0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x01, 0xC0, 0xA8, 0x0A, 
	0xF0, 0x00, 0x00, 
};

#endif


#define SK_HWEN_STDOLEDDISPLAY 1
#define SK_HWEN_SLIDER 1
SkaarhojBI8 buttons;