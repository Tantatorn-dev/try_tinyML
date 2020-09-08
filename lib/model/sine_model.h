#pragma once

unsigned char sine_model[] = {
        0x18, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x00, 0x00, 0x0e, 0x00,
        0x18, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00,
        0x0e, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x10, 0x0a, 0x00, 0x00,
        0xb8, 0x05, 0x00, 0x00, 0xa0, 0x05, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
        0x0b, 0x00, 0x00, 0x00, 0x90, 0x05, 0x00, 0x00, 0x7c, 0x05, 0x00, 0x00,
        0x24, 0x05, 0x00, 0x00, 0xd4, 0x04, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00,
        0x74, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
        0x14, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
        0x54, 0xf6, 0xff, 0xff, 0x58, 0xf6, 0xff, 0xff, 0x5c, 0xf6, 0xff, 0xff,
        0x60, 0xf6, 0xff, 0xff, 0xc2, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
        0x40, 0x00, 0x00, 0x00, 0xd0, 0x37, 0xed, 0xbd, 0xb6, 0x38, 0xf9, 0x3e,
        0xc6, 0x9d, 0x00, 0x3f, 0x1a, 0xb0, 0x05, 0xbe, 0xc6, 0x49, 0xd9, 0xbe,
        0x55, 0x62, 0x8b, 0xbe, 0xfa, 0xa9, 0x86, 0x3e, 0xc4, 0x4d, 0x9c, 0x3e,
        0x85, 0x7c, 0x8d, 0xbe, 0x44, 0xf3, 0x2c, 0xbe, 0xb5, 0x07, 0x56, 0x3e,
        0xb3, 0x84, 0x49, 0x3e, 0x60, 0x35, 0xa8, 0xbc, 0x60, 0xbc, 0xcf, 0xbe,
        0x23, 0x52, 0xff, 0x3e, 0xc6, 0xaf, 0x39, 0xbe, 0x0e, 0xfb, 0xff, 0xff,
        0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x36, 0xec, 0xe2, 0x3d, 0x87, 0xea, 0x53, 0xbf, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0xef, 0xfb, 0x3e,
        0x5a, 0x6f, 0x2b, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x1b, 0x1f, 0x12, 0xbf, 0xb4, 0xef, 0xec, 0xbd, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x2e, 0x32, 0x8f, 0xbf, 0x00, 0x00, 0x00, 0x00,
        0x5a, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
        0xdd, 0xec, 0x8d, 0xbe, 0x42, 0xef, 0x55, 0x3d, 0xdd, 0xdd, 0x18, 0x3e,
        0x6b, 0x54, 0xaa, 0x3e, 0xa5, 0xa5, 0xa6, 0x3e, 0xf4, 0x12, 0xe7, 0xbd,
        0x06, 0x6a, 0x4b, 0xbe, 0xf7, 0x32, 0x14, 0x3e, 0xa4, 0xe2, 0xb0, 0xbe,
        0x0c, 0x83, 0xe1, 0x3d, 0x88, 0xf6, 0xf1, 0x3e, 0x6b, 0x71, 0x0e, 0x3c,
        0xde, 0xed, 0x77, 0x3e, 0x92, 0x91, 0x23, 0x3e, 0x08, 0xb4, 0x1b, 0xbe,
        0x9d, 0x9b, 0xa8, 0xbe, 0x77, 0x35, 0x9e, 0xbe, 0x42, 0x29, 0x20, 0xbf,
        0x07, 0x20, 0x45, 0x3e, 0x3e, 0x92, 0xc3, 0xbe, 0x36, 0xca, 0x10, 0xbe,
        0xef, 0x96, 0xc0, 0xbe, 0x8c, 0xa8, 0xcf, 0x3d, 0xe5, 0xbe, 0xfc, 0x3d,
        0x44, 0x5a, 0xf8, 0x3d, 0x92, 0x68, 0xd4, 0xbe, 0x3d, 0x18, 0x8f, 0x3e,
        0xae, 0x9a, 0x45, 0x3d, 0x1b, 0x8b, 0xb8, 0xbe, 0x40, 0x3d, 0x8c, 0xbd,
        0x2f, 0x90, 0x2d, 0xbf, 0x8a, 0x81, 0x1a, 0x3e, 0x04, 0x8f, 0x5c, 0xbe,
        0x4c, 0xb8, 0xe1, 0xbd, 0x62, 0x66, 0x59, 0xbe, 0xe6, 0xb4, 0xb4, 0xbe,
        0xe6, 0x74, 0x3f, 0x3e, 0xfc, 0x40, 0xaf, 0x3d, 0x25, 0x72, 0x50, 0x3e,
        0x47, 0xec, 0xcc, 0x3e, 0x86, 0x9e, 0x70, 0x3e, 0x2a, 0x3b, 0x67, 0x3e,
        0xad, 0xf5, 0xcf, 0xbc, 0x30, 0x4d, 0x0d, 0x3e, 0xfc, 0xb9, 0xd0, 0x3d,
        0xcf, 0xa8, 0xc0, 0xbe, 0x7c, 0x8e, 0xe8, 0x3e, 0x18, 0x76, 0x14, 0xbe,
        0x76, 0x3f, 0x84, 0xbe, 0x4c, 0xd6, 0x46, 0x3d, 0x49, 0x07, 0xca, 0x3e,
        0x90, 0x87, 0xa0, 0xbd, 0xa5, 0x7d, 0xdd, 0xbe, 0xe5, 0x4a, 0xa5, 0x3e,
        0x0d, 0x6e, 0xff, 0xbd, 0xbc, 0x53, 0xb3, 0xbe, 0x57, 0x58, 0x92, 0x3e,
        0x29, 0x9e, 0x91, 0x3e, 0x24, 0x25, 0xd5, 0x3e, 0xe5, 0x06, 0x07, 0xbe,
        0x2a, 0xd4, 0xb8, 0xbe, 0xcc, 0xe4, 0x02, 0xbe, 0x68, 0x7b, 0x95, 0x3e,
        0xc1, 0x45, 0xcc, 0xbe, 0x4b, 0xb3, 0x82, 0x3e, 0x25, 0xae, 0x00, 0xbf,
        0x29, 0xdc, 0xb4, 0xbe, 0xfe, 0x09, 0x60, 0x3e, 0x0f, 0x43, 0xc7, 0x3e,
        0xc4, 0xf8, 0xcd, 0xbd, 0x1d, 0x74, 0xc1, 0xbe, 0xf4, 0xc8, 0x5c, 0x3e,
        0xe6, 0xaf, 0x0b, 0x3e, 0x98, 0x01, 0xa6, 0xbd, 0x96, 0xb4, 0x90, 0xbe,
        0x78, 0x41, 0xc3, 0xbe, 0xfd, 0x30, 0xc1, 0x3e, 0x15, 0x7f, 0xcb, 0x3e,
        0xb3, 0x97, 0x0a, 0x3e, 0x97, 0x4d, 0xa9, 0x3e, 0x2f, 0x97, 0xa5, 0x3e,
        0x24, 0x1c, 0xea, 0x3d, 0x6a, 0x7e, 0x39, 0x3e, 0x83, 0x3b, 0x61, 0xbe,
        0xd8, 0x55, 0x6d, 0x3d, 0xe1, 0x22, 0xd9, 0x3e, 0xc0, 0x09, 0x88, 0xbe,
        0x42, 0x55, 0xdb, 0xbe, 0xfa, 0x71, 0x73, 0x3e, 0x0d, 0x35, 0x88, 0xbe,
        0xf1, 0x67, 0xc9, 0x3e, 0xa0, 0x1f, 0x76, 0xbc, 0x81, 0xe0, 0xa0, 0x3e,
        0xc0, 0x11, 0x1c, 0x3d, 0x04, 0x30, 0x6a, 0xbe, 0x2a, 0x9c, 0x4c, 0x3e,
        0x1f, 0x99, 0xad, 0x3e, 0x3f, 0xe9, 0x5a, 0x3d, 0xee, 0xaa, 0xce, 0x3e,
        0xd1, 0x44, 0xc6, 0x3e, 0x9b, 0xaa, 0x57, 0xbe, 0x43, 0x1f, 0x8f, 0xbe,
        0x34, 0x8a, 0x9a, 0xbd, 0xbd, 0x92, 0x6e, 0x3e, 0xc1, 0xc1, 0x3c, 0xbe,
        0x1f, 0x30, 0x43, 0xbe, 0x45, 0xe6, 0xb5, 0xbc, 0xce, 0xa5, 0x93, 0xbe,
        0x56, 0xea, 0x1a, 0xbe, 0x47, 0x05, 0xab, 0x3e, 0xc0, 0xd0, 0xcd, 0x3e,
        0x25, 0x60, 0x8d, 0x3e, 0xb6, 0xf2, 0x50, 0x3e, 0x93, 0x4c, 0x09, 0x3d,
        0xca, 0x36, 0x9d, 0x3e, 0xcf, 0xd3, 0xa0, 0xbe, 0xfa, 0x86, 0x00, 0x3e,
        0xe0, 0xfb, 0x8c, 0xbd, 0xb2, 0x8a, 0xbf, 0x3e, 0xc3, 0x70, 0xa9, 0xbe,
        0x21, 0x43, 0x84, 0x3e, 0x5a, 0x16, 0x16, 0x3e, 0xc4, 0x0b, 0x28, 0x3d,
        0xb9, 0x09, 0x51, 0xbe, 0xda, 0xcc, 0x04, 0xbe, 0xd9, 0x4b, 0x8a, 0x3e,
        0x8f, 0x22, 0x93, 0x3d, 0x72, 0xfe, 0x2d, 0xbe, 0x8e, 0x0d, 0x13, 0xbe,
        0xa1, 0x47, 0xe4, 0xbe, 0x03, 0x52, 0xe0, 0x3e, 0xd2, 0xdc, 0x5c, 0xbe,
        0x63, 0xab, 0x83, 0x3e, 0x14, 0x07, 0x92, 0x3d, 0xe8, 0xa4, 0x7e, 0x3d,
        0x16, 0xc6, 0x92, 0x3e, 0xd4, 0x76, 0x95, 0xbe, 0xf0, 0xdc, 0xc4, 0xbd,
        0xec, 0x5e, 0x74, 0x3e, 0x0c, 0x08, 0xc7, 0x3e, 0x66, 0xc0, 0x9c, 0xbe,
        0x6c, 0xf6, 0xdd, 0xbd, 0x77, 0x7e, 0x74, 0x3e, 0xc0, 0xfb, 0xdd, 0x3b,
        0x7e, 0x00, 0x08, 0xbe, 0xa0, 0x2e, 0x9f, 0xbc, 0xe0, 0xc5, 0xbf, 0x3c,
        0x22, 0xcc, 0x95, 0xbe, 0x00, 0x90, 0x80, 0x3a, 0x48, 0x39, 0x5c, 0xbd,
        0x02, 0x1c, 0x06, 0xbe, 0x60, 0x32, 0xdd, 0xbc, 0x9c, 0xfb, 0x99, 0xbe,
        0xb0, 0xc2, 0x0d, 0xbd, 0x28, 0x33, 0x42, 0xbd, 0x90, 0x1f, 0x82, 0xbd,
        0x09, 0xd4, 0xd9, 0x3e, 0xa4, 0x79, 0xf0, 0x3d, 0xe6, 0x5b, 0x21, 0xbe,
        0x6d, 0xa2, 0xbe, 0xbe, 0xae, 0x26, 0xc9, 0xbe, 0x76, 0x50, 0xeb, 0x3d,
        0x5e, 0x01, 0x86, 0x3e, 0x67, 0xbd, 0xdc, 0x3e, 0x78, 0x38, 0x8a, 0xbe,
        0x74, 0xc3, 0xec, 0x3d, 0x70, 0xc9, 0xd0, 0x3e, 0xc3, 0xfe, 0x5a, 0xbd,
        0xd8, 0x69, 0x31, 0xbd, 0x3b, 0xdb, 0x7f, 0xbe, 0x12, 0x35, 0x58, 0xbe,
        0xb0, 0x3a, 0x81, 0x3e, 0xcc, 0xa0, 0x17, 0xbe, 0x32, 0xad, 0x48, 0x3e,
        0x1f, 0x35, 0x8d, 0x3e, 0xec, 0xfe, 0xd4, 0x3d, 0xef, 0x33, 0x7b, 0xbe,
        0xce, 0x81, 0x9e, 0xbe, 0x02, 0x7a, 0x5a, 0x3e, 0xa7, 0xb6, 0xd5, 0xbe,
        0xae, 0x04, 0x0c, 0x3e, 0x95, 0x40, 0xd1, 0x3e, 0x87, 0xfe, 0x1b, 0x3e,
        0x61, 0xf3, 0x82, 0xbe, 0x00, 0xcd, 0x3c, 0xbd, 0x03, 0x7d, 0x8b, 0x3e,
        0x20, 0xfd, 0xcb, 0x3c, 0x80, 0x33, 0x99, 0xbc, 0x09, 0xad, 0x68, 0xbe,
        0x7a, 0xff, 0x75, 0x3e, 0x11, 0xba, 0x6d, 0xbe, 0x30, 0xe3, 0x31, 0x3d,
        0x00, 0xfa, 0xc1, 0xbd, 0x9f, 0x38, 0xa3, 0xbe, 0x97, 0x88, 0x28, 0xbe,
        0x37, 0x72, 0x3c, 0xbe, 0x58, 0xc6, 0x86, 0xbd, 0x62, 0xdf, 0x70, 0x3e,
        0xb5, 0xef, 0xb8, 0x3c, 0x16, 0x67, 0x87, 0x3e, 0xce, 0x77, 0xb4, 0xbe,
        0x20, 0x52, 0x64, 0x3d, 0xa8, 0xcc, 0xbc, 0xbd, 0x17, 0x62, 0x49, 0xbb,
        0x42, 0x13, 0x49, 0x3e, 0xa6, 0x0a, 0x14, 0x3e, 0x95, 0xc9, 0x37, 0xbe,
        0x8c, 0x10, 0xb2, 0xbe, 0xe1, 0x11, 0x6f, 0xbe, 0x46, 0x45, 0x73, 0x3e,
        0xf0, 0x26, 0xbc, 0xbe, 0xc0, 0x4f, 0x88, 0xbb, 0x39, 0x0a, 0xbb, 0x3e,
        0x0f, 0x32, 0x88, 0x3e, 0xf0, 0x81, 0x99, 0x3e, 0x3f, 0xd5, 0x8c, 0xbe,
        0x10, 0x59, 0x4f, 0xbd, 0x63, 0x85, 0xb6, 0x3e, 0x6a, 0xe4, 0x98, 0xbf,
        0x6b, 0x1a, 0xa8, 0xbe, 0xc8, 0x77, 0xb5, 0xbe, 0x80, 0xea, 0x3f, 0xbd,
        0x6d, 0x91, 0xac, 0xbe, 0xd2, 0xdd, 0x63, 0xbe, 0x41, 0xcb, 0x59, 0xbe,
        0xb6, 0x0f, 0x94, 0xbe, 0x45, 0x12, 0x89, 0x3e, 0x4f, 0x6f, 0xb8, 0x3e,
        0x08, 0xa5, 0x02, 0xbd, 0x12, 0x74, 0xa8, 0xbe, 0x56, 0x2f, 0xa6, 0xbe,
        0x9e, 0xd8, 0x11, 0xbd, 0x3e, 0xdd, 0x67, 0x3e, 0x3e, 0xa8, 0x1a, 0x3e,
        0x81, 0x8c, 0x9c, 0x3e, 0x9f, 0x5b, 0x96, 0x3d, 0x9c, 0x65, 0xca, 0x3d,
        0xb4, 0x3c, 0xd2, 0xbe, 0x91, 0x2a, 0x45, 0x3e, 0x63, 0x53, 0x9c, 0x3e,
        0x99, 0x85, 0x42, 0xbe, 0xfc, 0xaf, 0x04, 0xbe, 0x12, 0xd7, 0x88, 0xbe,
        0xfa, 0xc2, 0xc5, 0xbe, 0x71, 0x2f, 0x96, 0x3e, 0xe5, 0x0b, 0x93, 0x3e,
        0xb8, 0x85, 0xf4, 0x3d, 0x37, 0x48, 0xcd, 0xbe, 0xa1, 0xc8, 0x63, 0xbe,
        0x5a, 0xa0, 0x3c, 0x3e, 0x4d, 0x84, 0x1e, 0x3b, 0x79, 0x40, 0x50, 0x3e,
        0xcb, 0xb1, 0xd0, 0x3e, 0xe1, 0x10, 0xcd, 0x3e, 0x7f, 0x3c, 0xcd, 0x3e,
        0xb8, 0xda, 0x37, 0xbe, 0x66, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
        0x40, 0x00, 0x00, 0x00, 0x9c, 0x4f, 0xd6, 0xbe, 0x7d, 0xdb, 0xf3, 0x3e,
        0x6b, 0x2b, 0xaa, 0xbe, 0xc1, 0x26, 0x26, 0xbf, 0xee, 0x03, 0x1f, 0x3f,
        0x00, 0x00, 0x00, 0x00, 0x37, 0xab, 0xa7, 0xbe, 0xd0, 0x10, 0x5b, 0x3e,
        0xe5, 0xbc, 0xca, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x94, 0x4a, 0x48, 0x3e,
        0xc3, 0x7d, 0x2f, 0xbd, 0x27, 0xef, 0x9b, 0xbd, 0x32, 0x58, 0x48, 0x3f,
        0xfc, 0x3b, 0xda, 0xbb, 0x18, 0xfd, 0x60, 0xbd, 0xb2, 0xff, 0xff, 0xff,
        0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xa8, 0xde, 0x92, 0x39,
        0x4a, 0x26, 0x8b, 0xbf, 0xb9, 0x79, 0x8c, 0x3e, 0xc1, 0xb8, 0x1e, 0x40,
        0xde, 0x0b, 0x9d, 0xbf, 0x0e, 0xe2, 0x61, 0xbe, 0xdc, 0x1b, 0xb1, 0x3e,
        0x47, 0x15, 0x60, 0xbe, 0x8c, 0x3c, 0x06, 0x3f, 0xfc, 0x69, 0xcf, 0x3e,
        0xd0, 0x07, 0x15, 0xbf, 0xa7, 0x92, 0x25, 0x3e, 0xf6, 0xf8, 0xbc, 0x3e,
        0x31, 0xe1, 0xd4, 0x3f, 0x3f, 0xf6, 0x02, 0x3f, 0x78, 0xf2, 0x02, 0x3d,
        0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xaf, 0x96, 0x93, 0xbe,
        0xb8, 0xfb, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x54, 0x4f, 0x43, 0x4f,
        0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x14, 0x00,
        0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
        0xf0, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
        0x48, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xce, 0xff, 0xff, 0xff,
        0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x1c, 0xfc, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
        0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
        0x14, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00,
        0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1c, 0x00, 0x00, 0x00,
        0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xba, 0xff, 0xff, 0xff,
        0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
        0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00,
        0x08, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x08, 0x24, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
        0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00,
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x10, 0x03, 0x00, 0x00, 0xa4, 0x02, 0x00, 0x00,
        0x40, 0x02, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0xac, 0x01, 0x00, 0x00,
        0x48, 0x01, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00,
        0x50, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x26, 0xfd, 0xff, 0xff,
        0x3c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x18, 0xfd, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00,
        0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
        0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61, 0x74,
        0x4d, 0x75, 0x6c, 0x5f, 0x62, 0x69, 0x61, 0x73, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6e, 0xfd, 0xff, 0xff,
        0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x60, 0xfd, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00,
        0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
        0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61, 0x74,
        0x4d, 0x75, 0x6c, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69,
        0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x74, 0x72, 0x61, 0x6e, 0x73,
        0x70, 0x6f, 0x73, 0x65, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xce, 0xfd, 0xff, 0xff,
        0x34, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0xc0, 0xfd, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00,
        0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
        0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x52, 0x65, 0x6c,
        0x75, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x10, 0x00, 0x00, 0x00, 0x12, 0xfe, 0xff, 0xff, 0x3c, 0x00, 0x00, 0x00,
        0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
        0x04, 0xfe, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
        0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e,
        0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x5f,
        0x62, 0x69, 0x61, 0x73, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x10, 0x00, 0x00, 0x00, 0x5a, 0xfe, 0xff, 0xff, 0x50, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
        0x4c, 0xfe, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
        0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e,
        0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x2f,
        0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65,
        0x4f, 0x70, 0x2f, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x70, 0x6f, 0x73, 0x65,
        0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
        0x10, 0x00, 0x00, 0x00, 0xba, 0xfe, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
        0xac, 0xfe, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
        0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e,
        0x73, 0x65, 0x5f, 0x32, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x00, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
        0xfe, 0xfe, 0xff, 0xff, 0x3c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
        0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf0, 0xfe, 0xff, 0xff,
        0x20, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
        0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32,
        0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x5f, 0x62, 0x69, 0x61, 0x73,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
        0x46, 0xff, 0xff, 0xff, 0x50, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
        0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x38, 0xff, 0xff, 0xff,
        0x34, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
        0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32,
        0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x2f, 0x52, 0x65, 0x61, 0x64,
        0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x74,
        0x72, 0x61, 0x6e, 0x73, 0x70, 0x6f, 0x73, 0x65, 0x00, 0x00, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xa6, 0xff, 0xff, 0xff, 0x48, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
        0x2c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00,
        0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x43,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
        0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x5f, 0x69, 0x6e, 0x70, 0x75,
        0x74, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x04, 0x00,
        0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00,
        0x28, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
        0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
        0x08, 0x00, 0x00, 0x00, 0x49, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79,
        0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x0a, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x03, 0x00, 0x00, 0x00
};
unsigned int sine_model_len = 2640;