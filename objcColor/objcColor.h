//
//  objcColor.h
//  objcColor
//
//  Created by FTET on 16/8/5.
//  Copyright © 2016年 vilyever. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for objcColor.
FOUNDATION_EXPORT double objcColorVersionNumber;

//! Project version string for objcColor.
FOUNDATION_EXPORT const unsigned char objcColorVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <objcColor/PublicHeader.h>

#import <objcColor/UIColor+VDHex.h>
#import <objcColor/UIColor+VDChange.h>

#define VDColorTransparent [UIColor vd_colorWithAlphaHexValue:0x00000000]

#pragma mark Pink
#define VDColorPink [UIColor vd_colorWithAlphaHexValue:0xFFFFC0CB]
#define VDColorLightPink [UIColor vd_colorWithAlphaHexValue:0xFFFFB6C1]
#define VDColorHotPink [UIColor vd_colorWithAlphaHexValue:0xFFFF69B4]
#define VDColorDeepPink [UIColor vd_colorWithAlphaHexValue:0xFFFF1493]
#define VDColorPaleVioletRed [UIColor vd_colorWithAlphaHexValue:0xFFDB7093]
#define VDColorMediumVioletRed [UIColor vd_colorWithAlphaHexValue:0xFFC71585]

#pragma mark Purple
#define VDColorLavender [UIColor vd_colorWithAlphaHexValue:0xFFE6E6FA]
#define VDColorThistle [UIColor vd_colorWithAlphaHexValue:0xFFD8BFD8]
#define VDColorPlum [UIColor vd_colorWithAlphaHexValue:0xFFDDA0DD]
#define VDColorOrchid [UIColor vd_colorWithAlphaHexValue:0xFFDA70D6]
#define VDColorViolet [UIColor vd_colorWithAlphaHexValue:0xFFEE82EE]
#define VDColorFuchsia [UIColor vd_colorWithAlphaHexValue:0xFFFF00FF]
#define VDColorMagenta [UIColor vd_colorWithAlphaHexValue:0xFFFF00FF]
#define VDColorMediumOrchid [UIColor vd_colorWithAlphaHexValue:0xFFBA55D3]
#define VDColorDarkOrchid [UIColor vd_colorWithAlphaHexValue:0xFF9932CC]
#define VDColorDarkViolet [UIColor vd_colorWithAlphaHexValue:0xFF9400D3]
#define VDColorBlueViolet [UIColor vd_colorWithAlphaHexValue:0xFF8A2BE2]
#define VDColorDarkMagenta [UIColor vd_colorWithAlphaHexValue:0xFF8B008B]
#define VDColorPurple [UIColor vd_colorWithAlphaHexValue:0xFF800080]
#define VDColorMediumPurple [UIColor vd_colorWithAlphaHexValue:0xFF9370DB]
#define VDColorMediumSlateBlue [UIColor vd_colorWithAlphaHexValue:0xFF7B68EE]
#define VDColorSlateBlue [UIColor vd_colorWithAlphaHexValue:0xFF6A5ACD]
#define VDColorDarkSlateBlue [UIColor vd_colorWithAlphaHexValue:0xFF483D8B]
#define VDColorRebeccaPurple [UIColor vd_colorWithAlphaHexValue:0xFF663399]
#define VDColorIndigo [UIColor vd_colorWithAlphaHexValue:0xFF4B0082]

#pragma mark Red
#define VDColorLightSalmon [UIColor vd_colorWithAlphaHexValue:0xFFFFA07A]
#define VDColorSalmon [UIColor vd_colorWithAlphaHexValue:0xFFFA8072]
#define VDColorDarkSalmon [UIColor vd_colorWithAlphaHexValue:0xFFE9967A]
#define VDColorLightCoral [UIColor vd_colorWithAlphaHexValue:0xFFF08080]
#define VDColorIndianRed [UIColor vd_colorWithAlphaHexValue:0xFFCD5C5C]
#define VDColorCrimson [UIColor vd_colorWithAlphaHexValue:0xFFDC143C]
#define VDColorRed [UIColor vd_colorWithAlphaHexValue:0xFFFF0000]
#define VDColorFireBrick [UIColor vd_colorWithAlphaHexValue:0xFFB22222]
#define VDColorDarkRed [UIColor vd_colorWithAlphaHexValue:0xFF8B0000]

#pragma mark Orange
#define VDColorOrange [UIColor vd_colorWithAlphaHexValue:0xFFFFA500]
#define VDColorDarkOrange [UIColor vd_colorWithAlphaHexValue:0xFFFF8C00]
#define VDColorCoral [UIColor vd_colorWithAlphaHexValue:0xFFFF7F50]
#define VDColorTomato [UIColor vd_colorWithAlphaHexValue:0xFFFF6347]
#define VDColorOrangeRed [UIColor vd_colorWithAlphaHexValue:0xFFFF4500]

#pragma mark Yellow
#define VDColorGold [UIColor vd_colorWithAlphaHexValue:0xFFFFD700]
#define VDColorYellow [UIColor vd_colorWithAlphaHexValue:0xFFFFFF00]
#define VDColorLightYellow [UIColor vd_colorWithAlphaHexValue:0xFFFFFFE0]
#define VDColorLemonChiffon [UIColor vd_colorWithAlphaHexValue:0xFFFFFACD]
#define VDColorLightGoldenRodYellow [UIColor vd_colorWithAlphaHexValue:0xFFFAFAD2]
#define VDColorPapayaWhip [UIColor vd_colorWithAlphaHexValue:0xFFFFEFD5]
#define VDColorMoccasin [UIColor vd_colorWithAlphaHexValue:0xFFFFE4B5]
#define VDColorPeachPuff [UIColor vd_colorWithAlphaHexValue:0xFFFFDAB9]
#define VDColorPaleGoldenRod [UIColor vd_colorWithAlphaHexValue:0xFFEEE8AA]
#define VDColorKhaki [UIColor vd_colorWithAlphaHexValue:0xFFF0E68C]
#define VDColorDarkKhaki [UIColor vd_colorWithAlphaHexValue:0xFFBDB76B]

#pragma mark Green
#define VDColorGreenYellow [UIColor vd_colorWithAlphaHexValue:0xFFADFF2F]
#define VDColorChartreuse [UIColor vd_colorWithAlphaHexValue:0xFF7FFF00]
#define VDColorLawnGreen [UIColor vd_colorWithAlphaHexValue:0xFF7CFC00]
#define VDColorLime [UIColor vd_colorWithAlphaHexValue:0xFF00FF00]
#define VDColorLimeGreen [UIColor vd_colorWithAlphaHexValue:0xFF32CD32]
#define VDColorPaleGreen [UIColor vd_colorWithAlphaHexValue:0xFF98FB98]
#define VDColorLightGreen [UIColor vd_colorWithAlphaHexValue:0xFF90EE90]
#define VDColorMediumSpringGreen [UIColor vd_colorWithAlphaHexValue:0xFF00FA9A]
#define VDColorSpringGreen [UIColor vd_colorWithAlphaHexValue:0xFF00FF7F]
#define VDColorMediumSeaGreen [UIColor vd_colorWithAlphaHexValue:0xFF3CB371]
#define VDColorSeaGreen [UIColor vd_colorWithAlphaHexValue:0xFF2E8B57]
#define VDColorForestGreen [UIColor vd_colorWithAlphaHexValue:0xFF228B22]
#define VDColorGreen [UIColor vd_colorWithAlphaHexValue:0xFF008000]
#define VDColorDarkGreen [UIColor vd_colorWithAlphaHexValue:0xFF006400]
#define VDColorYellowGreen [UIColor vd_colorWithAlphaHexValue:0xFF9ACD32]
#define VDColorOliveDrab [UIColor vd_colorWithAlphaHexValue:0xFF6B8E23]
#define VDColorDarkOliveGreen [UIColor vd_colorWithAlphaHexValue:0xFF556B2F]
#define VDColorMediumAquaMarine [UIColor vd_colorWithAlphaHexValue:0xFF66CDAA]
#define VDColorDarkSeaGreen [UIColor vd_colorWithAlphaHexValue:0xFF8FBC8F]
#define VDColorLightSeaGreen [UIColor vd_colorWithAlphaHexValue:0xFF20B2AA]
#define VDColorDarkCyan [UIColor vd_colorWithAlphaHexValue:0xFF008B8B]
#define VDColorTeal [UIColor vd_colorWithAlphaHexValue:0xFF008080]

#pragma mark Cyan
#define VDColorAqua [UIColor vd_colorWithAlphaHexValue:0xFF00FFFF]
#define VDColorCyan [UIColor vd_colorWithAlphaHexValue:0xFF00FFFF]
#define VDColorLightCyan [UIColor vd_colorWithAlphaHexValue:0xFFE0FFFF]
#define VDColorPaleTurquoise [UIColor vd_colorWithAlphaHexValue:0xFFAFEEEE]
#define VDColorAquamarine [UIColor vd_colorWithAlphaHexValue:0xFF7FFFD4]
#define VDColorTurquoise [UIColor vd_colorWithAlphaHexValue:0xFF40E0D0]
#define VDColorMediumTurquoise [UIColor vd_colorWithAlphaHexValue:0xFF48D1CC]
#define VDColorDarkTurquoise [UIColor vd_colorWithAlphaHexValue:0xFF00CED1]

#pragma mark Blue
#define VDColorCadetBlue [UIColor vd_colorWithAlphaHexValue:0xFF5F9EA0]
#define VDColorSteelBlue [UIColor vd_colorWithAlphaHexValue:0xFF4682B4]
#define VDColorLightSteelBlue [UIColor vd_colorWithAlphaHexValue:0xFFB0C4DE]
#define VDColorLightBlue [UIColor vd_colorWithAlphaHexValue:0xFFADD8E6]
#define VDColorPowderBlue [UIColor vd_colorWithAlphaHexValue:0xFFB0E0E6]
#define VDColorLightSkyBlue [UIColor vd_colorWithAlphaHexValue:0xFF87CEFA]
#define VDColorSkyBlue [UIColor vd_colorWithAlphaHexValue:0xFF87CEEB]
#define VDColorCornflowerBlue [UIColor vd_colorWithAlphaHexValue:0xFF6495ED]
#define VDColorDeepSkyBlue [UIColor vd_colorWithAlphaHexValue:0xFF00BFFF]
#define VDColorDodgerBlue [UIColor vd_colorWithAlphaHexValue:0xFF1E90FF]
#define VDColorRoyalBlue [UIColor vd_colorWithAlphaHexValue:0xFF4169E1]
#define VDColorBlue [UIColor vd_colorWithAlphaHexValue:0xFF0000FF]
#define VDColorMediumBlue [UIColor vd_colorWithAlphaHexValue:0xFF0000CD]
#define VDColorDarkBlue [UIColor vd_colorWithAlphaHexValue:0xFF00008B]
#define VDColorNavy [UIColor vd_colorWithAlphaHexValue:0xFF000080]
#define VDColorMidnightBlue [UIColor vd_colorWithAlphaHexValue:0xFF191970]

#pragma mark Brown
#define VDColorCornsilk [UIColor vd_colorWithAlphaHexValue:0xFFFFF8DC]
#define VDColorBlanchedAlmond [UIColor vd_colorWithAlphaHexValue:0xFFFFEBCD]
#define VDColorBisque [UIColor vd_colorWithAlphaHexValue:0xFFFFE4C4]
#define VDColorNavajoWhite [UIColor vd_colorWithAlphaHexValue:0xFFFFDEAD]
#define VDColorWheat [UIColor vd_colorWithAlphaHexValue:0xFFF5DEB3]
#define VDColorBurlyWood [UIColor vd_colorWithAlphaHexValue:0xFFDEB887]
#define VDColorTan [UIColor vd_colorWithAlphaHexValue:0xFFD2B48C]
#define VDColorRosyBrown [UIColor vd_colorWithAlphaHexValue:0xFFBC8F8F]
#define VDColorSandyBrown [UIColor vd_colorWithAlphaHexValue:0xFFF4A460]
#define VDColorGoldenRod [UIColor vd_colorWithAlphaHexValue:0xFFDAA520]
#define VDColorDarkGoldenRod [UIColor vd_colorWithAlphaHexValue:0xFFB8860B]
#define VDColorPeru [UIColor vd_colorWithAlphaHexValue:0xFFCD853F]
#define VDColorChocolate [UIColor vd_colorWithAlphaHexValue:0xFFD2691E]
#define VDColorOlive [UIColor vd_colorWithAlphaHexValue:0xFF808000]
#define VDColorSaddleBrown [UIColor vd_colorWithAlphaHexValue:0xFF8B4513]
#define VDColorSienna [UIColor vd_colorWithAlphaHexValue:0xFFA0522D]
#define VDColorBrown [UIColor vd_colorWithAlphaHexValue:0xFFA52A2A]
#define VDColorMaroon [UIColor vd_colorWithAlphaHexValue:0xFF800000]

#pragma mark White
#define VDColorWhite [UIColor vd_colorWithAlphaHexValue:0xFFFFFFFF]
#define VDColorSnow [UIColor vd_colorWithAlphaHexValue:0xFFFFFAFA]
#define VDColorHoneyDew [UIColor vd_colorWithAlphaHexValue:0xFFF0FFF0]
#define VDColorMintCream [UIColor vd_colorWithAlphaHexValue:0xFFF5FFFA]
#define VDColorAzure [UIColor vd_colorWithAlphaHexValue:0xFFF0FFFF]
#define VDColorAliceBlue [UIColor vd_colorWithAlphaHexValue:0xFFF0F8FF]
#define VDColorGhostWhite [UIColor vd_colorWithAlphaHexValue:0xFFF8F8FF]
#define VDColorWhiteSmoke [UIColor vd_colorWithAlphaHexValue:0xFFF5F5F5]
#define VDColorSeaShell [UIColor vd_colorWithAlphaHexValue:0xFFFFF5EE]
#define VDColorBeige [UIColor vd_colorWithAlphaHexValue:0xFFF5F5DC]
#define VDColorOldLace [UIColor vd_colorWithAlphaHexValue:0xFFFDF5E6]
#define VDColorFloralWhite [UIColor vd_colorWithAlphaHexValue:0xFFFFFAF0]
#define VDColorIvory [UIColor vd_colorWithAlphaHexValue:0xFFFFFFF0]
#define VDColorAntiqueWhite [UIColor vd_colorWithAlphaHexValue:0xFFFAEBD7]
#define VDColorLinen [UIColor vd_colorWithAlphaHexValue:0xFFFAF0E6]
#define VDColorLavenderBlush [UIColor vd_colorWithAlphaHexValue:0xFFFFF0F5]
#define VDColorMistyRose [UIColor vd_colorWithAlphaHexValue:0xFFFFE4E1]

#pragma mark Grey
#define VDColorGainsboro [UIColor vd_colorWithAlphaHexValue:0xFFDCDCDC]
#define VDColorLightGray [UIColor vd_colorWithAlphaHexValue:0xFFD3D3D3]
#define VDColorSilver [UIColor vd_colorWithAlphaHexValue:0xFFC0C0C0]
#define VDColorDarkGray [UIColor vd_colorWithAlphaHexValue:0xFFA9A9A9]
#define VDColorDimGray [UIColor vd_colorWithAlphaHexValue:0xFF696969]
#define VDColorGray [UIColor vd_colorWithAlphaHexValue:0xFF808080]
#define VDColorLightSlateGray [UIColor vd_colorWithAlphaHexValue:0xFF778899]
#define VDColorSlateGray [UIColor vd_colorWithAlphaHexValue:0xFF708090]
#define VDColorDarkSlateGray [UIColor vd_colorWithAlphaHexValue:0xFF2F4F4F]
#define VDColorBlack [UIColor vd_colorWithAlphaHexValue:0xFF000000]

#pragma mark MaterialRed
#define VDColorMaterialRed [UIColor vd_colorWithAlphaHexValue:0xFFF44336]
#define VDColorMaterialRed50 [UIColor vd_colorWithAlphaHexValue:0xFFFFEBEE]
#define VDColorMaterialRed100 [UIColor vd_colorWithAlphaHexValue:0xFFFFCDD2]
#define VDColorMaterialRed200 [UIColor vd_colorWithAlphaHexValue:0xFFEF9A9A]
#define VDColorMaterialRed300 [UIColor vd_colorWithAlphaHexValue:0xFFE57373]
#define VDColorMaterialRed400 [UIColor vd_colorWithAlphaHexValue:0xFFEF5350]
#define VDColorMaterialRed500 [UIColor vd_colorWithAlphaHexValue:0xFFF44336]
#define VDColorMaterialRed600 [UIColor vd_colorWithAlphaHexValue:0xFFE53935]
#define VDColorMaterialRed700 [UIColor vd_colorWithAlphaHexValue:0xFFD32F2F]
#define VDColorMaterialRed800 [UIColor vd_colorWithAlphaHexValue:0xFFC62828]
#define VDColorMaterialRed900 [UIColor vd_colorWithAlphaHexValue:0xFFB71C1C]
#define VDColorMaterialRedA100 [UIColor vd_colorWithAlphaHexValue:0xFFFF8A80]
#define VDColorMaterialRedA200 [UIColor vd_colorWithAlphaHexValue:0xFFFF5252]
#define VDColorMaterialRedA400 [UIColor vd_colorWithAlphaHexValue:0xFFFF1744]
#define VDColorMaterialRedA700 [UIColor vd_colorWithAlphaHexValue:0xFFD50000]

#pragma mark MaterialPink
#define VDColorMaterialPink [UIColor vd_colorWithAlphaHexValue:0xFFE91E63]
#define VDColorMaterialPink50 [UIColor vd_colorWithAlphaHexValue:0xFFFCE4EC]
#define VDColorMaterialPink100 [UIColor vd_colorWithAlphaHexValue:0xFFF8BBD0]
#define VDColorMaterialPink200 [UIColor vd_colorWithAlphaHexValue:0xFFF48FB1]
#define VDColorMaterialPink300 [UIColor vd_colorWithAlphaHexValue:0xFFF06292]
#define VDColorMaterialPink400 [UIColor vd_colorWithAlphaHexValue:0xFFEC407A]
#define VDColorMaterialPink500 [UIColor vd_colorWithAlphaHexValue:0xFFE91E63]
#define VDColorMaterialPink600 [UIColor vd_colorWithAlphaHexValue:0xFFD81B60]
#define VDColorMaterialPink700 [UIColor vd_colorWithAlphaHexValue:0xFFC2185B]
#define VDColorMaterialPink800 [UIColor vd_colorWithAlphaHexValue:0xFFAD1457]
#define VDColorMaterialPink900 [UIColor vd_colorWithAlphaHexValue:0xFF880E4F]
#define VDColorMaterialPinkA100 [UIColor vd_colorWithAlphaHexValue:0xFFFF80AB]
#define VDColorMaterialPinkA200 [UIColor vd_colorWithAlphaHexValue:0xFFFF4081]
#define VDColorMaterialPinkA400 [UIColor vd_colorWithAlphaHexValue:0xFFF50057]
#define VDColorMaterialPinkA700 [UIColor vd_colorWithAlphaHexValue:0xFFC51162]

#pragma mark MaterialPurple
#define VDColorMaterialPurple [UIColor vd_colorWithAlphaHexValue:0xFF9C27B0]
#define VDColorMaterialPurple50 [UIColor vd_colorWithAlphaHexValue:0xFFF3E5F5]
#define VDColorMaterialPurple100 [UIColor vd_colorWithAlphaHexValue:0xFFE1BEE7]
#define VDColorMaterialPurple200 [UIColor vd_colorWithAlphaHexValue:0xFFCE93D8]
#define VDColorMaterialPurple300 [UIColor vd_colorWithAlphaHexValue:0xFFBA68C8]
#define VDColorMaterialPurple400 [UIColor vd_colorWithAlphaHexValue:0xFFAB47BC]
#define VDColorMaterialPurple500 [UIColor vd_colorWithAlphaHexValue:0xFF9C27B0]
#define VDColorMaterialPurple600 [UIColor vd_colorWithAlphaHexValue:0xFF8E24AA]
#define VDColorMaterialPurple700 [UIColor vd_colorWithAlphaHexValue:0xFF7B1FA2]
#define VDColorMaterialPurple800 [UIColor vd_colorWithAlphaHexValue:0xFF6A1B9A]
#define VDColorMaterialPurple900 [UIColor vd_colorWithAlphaHexValue:0xFF4A148C]
#define VDColorMaterialPurpleA100 [UIColor vd_colorWithAlphaHexValue:0xFFEA80FC]
#define VDColorMaterialPurpleA200 [UIColor vd_colorWithAlphaHexValue:0xFFE040FB]
#define VDColorMaterialPurpleA400 [UIColor vd_colorWithAlphaHexValue:0xFFD500F9]
#define VDColorMaterialPurpleA700 [UIColor vd_colorWithAlphaHexValue:0xFFAA00FF]

#pragma mark MaterialDeepPurple
#define VDColorMaterialDeepPurple [UIColor vd_colorWithAlphaHexValue:0xFF673AB7]
#define VDColorMaterialDeepPurple50 [UIColor vd_colorWithAlphaHexValue:0xFFEDE7F6]
#define VDColorMaterialDeepPurple100 [UIColor vd_colorWithAlphaHexValue:0xFFD1C4E9]
#define VDColorMaterialDeepPurple200 [UIColor vd_colorWithAlphaHexValue:0xFFB39DDB]
#define VDColorMaterialDeepPurple300 [UIColor vd_colorWithAlphaHexValue:0xFF9575CD]
#define VDColorMaterialDeepPurple400 [UIColor vd_colorWithAlphaHexValue:0xFF7E57C2]
#define VDColorMaterialDeepPurple500 [UIColor vd_colorWithAlphaHexValue:0xFF673AB7]
#define VDColorMaterialDeepPurple600 [UIColor vd_colorWithAlphaHexValue:0xFF5E35B1]
#define VDColorMaterialDeepPurple700 [UIColor vd_colorWithAlphaHexValue:0xFF512DA8]
#define VDColorMaterialDeepPurple800 [UIColor vd_colorWithAlphaHexValue:0xFF4527A0]
#define VDColorMaterialDeepPurple900 [UIColor vd_colorWithAlphaHexValue:0xFF311B92]
#define VDColorMaterialDeepPurpleA100 [UIColor vd_colorWithAlphaHexValue:0xFFB388FF]
#define VDColorMaterialDeepPurpleA200 [UIColor vd_colorWithAlphaHexValue:0xFF7C4DFF]
#define VDColorMaterialDeepPurpleA400 [UIColor vd_colorWithAlphaHexValue:0xFF651FFF]
#define VDColorMaterialDeepPurpleA700 [UIColor vd_colorWithAlphaHexValue:0xFF6200EA]

#pragma mark MaterialIndigo
#define VDColorMaterialIndigo [UIColor vd_colorWithAlphaHexValue:0xFF3F51B5]
#define VDColorMaterialIndigo50 [UIColor vd_colorWithAlphaHexValue:0xFFE8EAF6]
#define VDColorMaterialIndigo100 [UIColor vd_colorWithAlphaHexValue:0xFFC5CAE9]
#define VDColorMaterialIndigo200 [UIColor vd_colorWithAlphaHexValue:0xFF9FA8DA]
#define VDColorMaterialIndigo300 [UIColor vd_colorWithAlphaHexValue:0xFF7986CB]
#define VDColorMaterialIndigo400 [UIColor vd_colorWithAlphaHexValue:0xFF5C6BC0]
#define VDColorMaterialIndigo500 [UIColor vd_colorWithAlphaHexValue:0xFF3F51B5]
#define VDColorMaterialIndigo600 [UIColor vd_colorWithAlphaHexValue:0xFF3949AB]
#define VDColorMaterialIndigo700 [UIColor vd_colorWithAlphaHexValue:0xFF303F9F]
#define VDColorMaterialIndigo800 [UIColor vd_colorWithAlphaHexValue:0xFF283593]
#define VDColorMaterialIndigo900 [UIColor vd_colorWithAlphaHexValue:0xFF1A237E]
#define VDColorMaterialIndigoA100 [UIColor vd_colorWithAlphaHexValue:0xFF8C9EFF]
#define VDColorMaterialIndigoA200 [UIColor vd_colorWithAlphaHexValue:0xFF536DFE]
#define VDColorMaterialIndigoA400 [UIColor vd_colorWithAlphaHexValue:0xFF3D5AFE]
#define VDColorMaterialIndigoA700 [UIColor vd_colorWithAlphaHexValue:0xFF304FFE]

#pragma mark MaterialBlue
#define VDColorMaterialBlue [UIColor vd_colorWithAlphaHexValue:0xFF2196F3]
#define VDColorMaterialBlue50 [UIColor vd_colorWithAlphaHexValue:0xFFE3F2FD]
#define VDColorMaterialBlue100 [UIColor vd_colorWithAlphaHexValue:0xFFBBDEFB]
#define VDColorMaterialBlue200 [UIColor vd_colorWithAlphaHexValue:0xFF90CAF9]
#define VDColorMaterialBlue300 [UIColor vd_colorWithAlphaHexValue:0xFF64B5F6]
#define VDColorMaterialBlue400 [UIColor vd_colorWithAlphaHexValue:0xFF42A5F5]
#define VDColorMaterialBlue500 [UIColor vd_colorWithAlphaHexValue:0xFF2196F3]
#define VDColorMaterialBlue600 [UIColor vd_colorWithAlphaHexValue:0xFF1E88E5]
#define VDColorMaterialBlue700 [UIColor vd_colorWithAlphaHexValue:0xFF1976D2]
#define VDColorMaterialBlue800 [UIColor vd_colorWithAlphaHexValue:0xFF1565C0]
#define VDColorMaterialBlue900 [UIColor vd_colorWithAlphaHexValue:0xFF0D47A1]
#define VDColorMaterialBlueA100 [UIColor vd_colorWithAlphaHexValue:0xFF82B1FF]
#define VDColorMaterialBlueA200 [UIColor vd_colorWithAlphaHexValue:0xFF448AFF]
#define VDColorMaterialBlueA400 [UIColor vd_colorWithAlphaHexValue:0xFF2979FF]
#define VDColorMaterialBlueA700 [UIColor vd_colorWithAlphaHexValue:0xFF2962FF]

#pragma mark MaterialLightBlue
#define VDColorMaterialLightBlue [UIColor vd_colorWithAlphaHexValue:0xFF03A9F4]
#define VDColorMaterialLightBlue50 [UIColor vd_colorWithAlphaHexValue:0xFFE1F5FE]
#define VDColorMaterialLightBlue100 [UIColor vd_colorWithAlphaHexValue:0xFFB3E5FC]
#define VDColorMaterialLightBlue200 [UIColor vd_colorWithAlphaHexValue:0xFF81D4FA]
#define VDColorMaterialLightBlue300 [UIColor vd_colorWithAlphaHexValue:0xFF4FC3F7]
#define VDColorMaterialLightBlue400 [UIColor vd_colorWithAlphaHexValue:0xFF29B6F6]
#define VDColorMaterialLightBlue500 [UIColor vd_colorWithAlphaHexValue:0xFF03A9F4]
#define VDColorMaterialLightBlue600 [UIColor vd_colorWithAlphaHexValue:0xFF039BE5]
#define VDColorMaterialLightBlue700 [UIColor vd_colorWithAlphaHexValue:0xFF0288D1]
#define VDColorMaterialLightBlue800 [UIColor vd_colorWithAlphaHexValue:0xFF0277BD]
#define VDColorMaterialLightBlue900 [UIColor vd_colorWithAlphaHexValue:0xFF01579B]
#define VDColorMaterialLightBlueA100 [UIColor vd_colorWithAlphaHexValue:0xFF80D8FF]
#define VDColorMaterialLightBlueA200 [UIColor vd_colorWithAlphaHexValue:0xFF40C4FF]
#define VDColorMaterialLightBlueA400 [UIColor vd_colorWithAlphaHexValue:0xFF00B0FF]
#define VDColorMaterialLightBlueA700 [UIColor vd_colorWithAlphaHexValue:0xFF0091EA]

#pragma mark MaterialCyan
#define VDColorMaterialCyan [UIColor vd_colorWithAlphaHexValue:0xFF00BCD4]
#define VDColorMaterialCyan50 [UIColor vd_colorWithAlphaHexValue:0xFFE0F7FA]
#define VDColorMaterialCyan100 [UIColor vd_colorWithAlphaHexValue:0xFFB2EBF2]
#define VDColorMaterialCyan200 [UIColor vd_colorWithAlphaHexValue:0xFF80DEEA]
#define VDColorMaterialCyan300 [UIColor vd_colorWithAlphaHexValue:0xFF4DD0E1]
#define VDColorMaterialCyan400 [UIColor vd_colorWithAlphaHexValue:0xFF26C6DA]
#define VDColorMaterialCyan500 [UIColor vd_colorWithAlphaHexValue:0xFF00BCD4]
#define VDColorMaterialCyan600 [UIColor vd_colorWithAlphaHexValue:0xFF00ACC1]
#define VDColorMaterialCyan700 [UIColor vd_colorWithAlphaHexValue:0xFF0097A7]
#define VDColorMaterialCyan800 [UIColor vd_colorWithAlphaHexValue:0xFF00838F]
#define VDColorMaterialCyan900 [UIColor vd_colorWithAlphaHexValue:0xFF006064]
#define VDColorMaterialCyanA100 [UIColor vd_colorWithAlphaHexValue:0xFF84FFFF]
#define VDColorMaterialCyanA200 [UIColor vd_colorWithAlphaHexValue:0xFF18FFFF]
#define VDColorMaterialCyanA400 [UIColor vd_colorWithAlphaHexValue:0xFF00E5FF]
#define VDColorMaterialCyanA700 [UIColor vd_colorWithAlphaHexValue:0xFF00B8D4]

#pragma mark MaterialTeal
#define VDColorMaterialTeal [UIColor vd_colorWithAlphaHexValue:0xFF009688]
#define VDColorMaterialTeal50 [UIColor vd_colorWithAlphaHexValue:0xFFE0F2F1]
#define VDColorMaterialTeal100 [UIColor vd_colorWithAlphaHexValue:0xFFB2DFDB]
#define VDColorMaterialTeal200 [UIColor vd_colorWithAlphaHexValue:0xFF80CBC4]
#define VDColorMaterialTeal300 [UIColor vd_colorWithAlphaHexValue:0xFF4DB6AC]
#define VDColorMaterialTeal400 [UIColor vd_colorWithAlphaHexValue:0xFF26A69A]
#define VDColorMaterialTeal500 [UIColor vd_colorWithAlphaHexValue:0xFF009688]
#define VDColorMaterialTeal600 [UIColor vd_colorWithAlphaHexValue:0xFF00897B]
#define VDColorMaterialTeal700 [UIColor vd_colorWithAlphaHexValue:0xFF00796B]
#define VDColorMaterialTeal800 [UIColor vd_colorWithAlphaHexValue:0xFF00695C]
#define VDColorMaterialTeal900 [UIColor vd_colorWithAlphaHexValue:0xFF004D40]
#define VDColorMaterialTealA100 [UIColor vd_colorWithAlphaHexValue:0xFFA7FFEB]
#define VDColorMaterialTealA200 [UIColor vd_colorWithAlphaHexValue:0xFF64FFDA]
#define VDColorMaterialTealA400 [UIColor vd_colorWithAlphaHexValue:0xFF1DE9B6]
#define VDColorMaterialTealA700 [UIColor vd_colorWithAlphaHexValue:0xFF00BFA5]

#pragma mark MaterialGreen
#define VDColorMaterialGreen [UIColor vd_colorWithAlphaHexValue:0xFF4CAF50]
#define VDColorMaterialGreen50 [UIColor vd_colorWithAlphaHexValue:0xFFE8F5E9]
#define VDColorMaterialGreen100 [UIColor vd_colorWithAlphaHexValue:0xFFC8E6C9]
#define VDColorMaterialGreen200 [UIColor vd_colorWithAlphaHexValue:0xFFA5D6A7]
#define VDColorMaterialGreen300 [UIColor vd_colorWithAlphaHexValue:0xFF81C784]
#define VDColorMaterialGreen400 [UIColor vd_colorWithAlphaHexValue:0xFF66BB6A]
#define VDColorMaterialGreen500 [UIColor vd_colorWithAlphaHexValue:0xFF4CAF50]
#define VDColorMaterialGreen600 [UIColor vd_colorWithAlphaHexValue:0xFF43A047]
#define VDColorMaterialGreen700 [UIColor vd_colorWithAlphaHexValue:0xFF388E3C]
#define VDColorMaterialGreen800 [UIColor vd_colorWithAlphaHexValue:0xFF2E7D32]
#define VDColorMaterialGreen900 [UIColor vd_colorWithAlphaHexValue:0xFF1B5E20]
#define VDColorMaterialGreenA100 [UIColor vd_colorWithAlphaHexValue:0xFFB9F6CA]
#define VDColorMaterialGreenA200 [UIColor vd_colorWithAlphaHexValue:0xFF69F0AE]
#define VDColorMaterialGreenA400 [UIColor vd_colorWithAlphaHexValue:0xFF00E676]
#define VDColorMaterialGreenA700 [UIColor vd_colorWithAlphaHexValue:0xFF00C853]

#pragma mark MaterialLightGreen
#define VDColorMaterialLightGreen [UIColor vd_colorWithAlphaHexValue:0xFF8BC34A]
#define VDColorMaterialLightGreen50 [UIColor vd_colorWithAlphaHexValue:0xFFF1F8E9]
#define VDColorMaterialLightGreen100 [UIColor vd_colorWithAlphaHexValue:0xFFDCEDC8]
#define VDColorMaterialLightGreen200 [UIColor vd_colorWithAlphaHexValue:0xFFC5E1A5]
#define VDColorMaterialLightGreen300 [UIColor vd_colorWithAlphaHexValue:0xFFAED581]
#define VDColorMaterialLightGreen400 [UIColor vd_colorWithAlphaHexValue:0xFF9CCC65]
#define VDColorMaterialLightGreen500 [UIColor vd_colorWithAlphaHexValue:0xFF8BC34A]
#define VDColorMaterialLightGreen600 [UIColor vd_colorWithAlphaHexValue:0xFF7CB342]
#define VDColorMaterialLightGreen700 [UIColor vd_colorWithAlphaHexValue:0xFF689F38]
#define VDColorMaterialLightGreen800 [UIColor vd_colorWithAlphaHexValue:0xFF558B2F]
#define VDColorMaterialLightGreen900 [UIColor vd_colorWithAlphaHexValue:0xFF33691E]
#define VDColorMaterialLightGreenA100 [UIColor vd_colorWithAlphaHexValue:0xFFCCFF90]
#define VDColorMaterialLightGreenA200 [UIColor vd_colorWithAlphaHexValue:0xFFB2FF59]
#define VDColorMaterialLightGreenA400 [UIColor vd_colorWithAlphaHexValue:0xFF76FF03]
#define VDColorMaterialLightGreenA700 [UIColor vd_colorWithAlphaHexValue:0xFF64DD17]

#pragma mark MaterialLime
#define VDColorMaterialLime [UIColor vd_colorWithAlphaHexValue:0xFFCDDC39]
#define VDColorMaterialLime50 [UIColor vd_colorWithAlphaHexValue:0xFFF9FBE7]
#define VDColorMaterialLime100 [UIColor vd_colorWithAlphaHexValue:0xFFF0F4C3]
#define VDColorMaterialLime200 [UIColor vd_colorWithAlphaHexValue:0xFFE6EE9C]
#define VDColorMaterialLime300 [UIColor vd_colorWithAlphaHexValue:0xFFDCE775]
#define VDColorMaterialLime400 [UIColor vd_colorWithAlphaHexValue:0xFFD4E157]
#define VDColorMaterialLime500 [UIColor vd_colorWithAlphaHexValue:0xFFCDDC39]
#define VDColorMaterialLime600 [UIColor vd_colorWithAlphaHexValue:0xFFC0CA33]
#define VDColorMaterialLime700 [UIColor vd_colorWithAlphaHexValue:0xFFAFB42B]
#define VDColorMaterialLime800 [UIColor vd_colorWithAlphaHexValue:0xFF9E9D24]
#define VDColorMaterialLime900 [UIColor vd_colorWithAlphaHexValue:0xFF827717]
#define VDColorMaterialLimeA100 [UIColor vd_colorWithAlphaHexValue:0xFFF4FF81]
#define VDColorMaterialLimeA200 [UIColor vd_colorWithAlphaHexValue:0xFFEEFF41]
#define VDColorMaterialLimeA400 [UIColor vd_colorWithAlphaHexValue:0xFFC6FF00]
#define VDColorMaterialLimeA700 [UIColor vd_colorWithAlphaHexValue:0xFFAEEA00]

#pragma mark MaterialYellow
#define VDColorMaterialYellow [UIColor vd_colorWithAlphaHexValue:0xFFFFEB3B]
#define VDColorMaterialYellow50 [UIColor vd_colorWithAlphaHexValue:0xFFFFFDE7]
#define VDColorMaterialYellow100 [UIColor vd_colorWithAlphaHexValue:0xFFFFF9C4]
#define VDColorMaterialYellow200 [UIColor vd_colorWithAlphaHexValue:0xFFFFF59D]
#define VDColorMaterialYellow300 [UIColor vd_colorWithAlphaHexValue:0xFFFFF176]
#define VDColorMaterialYellow400 [UIColor vd_colorWithAlphaHexValue:0xFFFFEE58]
#define VDColorMaterialYellow500 [UIColor vd_colorWithAlphaHexValue:0xFFFFEB3B]
#define VDColorMaterialYellow600 [UIColor vd_colorWithAlphaHexValue:0xFFFDD835]
#define VDColorMaterialYellow700 [UIColor vd_colorWithAlphaHexValue:0xFFFBC02D]
#define VDColorMaterialYellow800 [UIColor vd_colorWithAlphaHexValue:0xFFF9A825]
#define VDColorMaterialYellow900 [UIColor vd_colorWithAlphaHexValue:0xFFF57F17]
#define VDColorMaterialYellowA100 [UIColor vd_colorWithAlphaHexValue:0xFFFFFF8D]
#define VDColorMaterialYellowA200 [UIColor vd_colorWithAlphaHexValue:0xFFFFFF00]
#define VDColorMaterialYellowA400 [UIColor vd_colorWithAlphaHexValue:0xFFFFEA00]
#define VDColorMaterialYellowA700 [UIColor vd_colorWithAlphaHexValue:0xFFFFD600]

#pragma mark MaterialAmber
#define VDColorMaterialAmber [UIColor vd_colorWithAlphaHexValue:0xFFFFC107]
#define VDColorMaterialAmber50 [UIColor vd_colorWithAlphaHexValue:0xFFFFF8E1]
#define VDColorMaterialAmber100 [UIColor vd_colorWithAlphaHexValue:0xFFFFECB3]
#define VDColorMaterialAmber200 [UIColor vd_colorWithAlphaHexValue:0xFFFFE082]
#define VDColorMaterialAmber300 [UIColor vd_colorWithAlphaHexValue:0xFFFFD54F]
#define VDColorMaterialAmber400 [UIColor vd_colorWithAlphaHexValue:0xFFFFCA28]
#define VDColorMaterialAmber500 [UIColor vd_colorWithAlphaHexValue:0xFFFFC107]
#define VDColorMaterialAmber600 [UIColor vd_colorWithAlphaHexValue:0xFFFFB300]
#define VDColorMaterialAmber700 [UIColor vd_colorWithAlphaHexValue:0xFFFFA000]
#define VDColorMaterialAmber800 [UIColor vd_colorWithAlphaHexValue:0xFFFF8F00]
#define VDColorMaterialAmber900 [UIColor vd_colorWithAlphaHexValue:0xFFFF6F00]
#define VDColorMaterialAmberA100 [UIColor vd_colorWithAlphaHexValue:0xFFFFE57F]
#define VDColorMaterialAmberA200 [UIColor vd_colorWithAlphaHexValue:0xFFFFD740]
#define VDColorMaterialAmberA400 [UIColor vd_colorWithAlphaHexValue:0xFFFFC400]
#define VDColorMaterialAmberA700 [UIColor vd_colorWithAlphaHexValue:0xFFFFAB00]

#pragma mark MaterialOrange
#define VDColorMaterialOrange [UIColor vd_colorWithAlphaHexValue:0xFFFF9800]
#define VDColorMaterialOrange50 [UIColor vd_colorWithAlphaHexValue:0xFFFFF3E0]
#define VDColorMaterialOrange100 [UIColor vd_colorWithAlphaHexValue:0xFFFFE0B2]
#define VDColorMaterialOrange200 [UIColor vd_colorWithAlphaHexValue:0xFFFFCC80]
#define VDColorMaterialOrange300 [UIColor vd_colorWithAlphaHexValue:0xFFFFB74D]
#define VDColorMaterialOrange400 [UIColor vd_colorWithAlphaHexValue:0xFFFFA726]
#define VDColorMaterialOrange500 [UIColor vd_colorWithAlphaHexValue:0xFFFF9800]
#define VDColorMaterialOrange600 [UIColor vd_colorWithAlphaHexValue:0xFFFB8C00]
#define VDColorMaterialOrange700 [UIColor vd_colorWithAlphaHexValue:0xFFF57C00]
#define VDColorMaterialOrange800 [UIColor vd_colorWithAlphaHexValue:0xFFEF6C00]
#define VDColorMaterialOrange900 [UIColor vd_colorWithAlphaHexValue:0xFFE65100]
#define VDColorMaterialOrangeA100 [UIColor vd_colorWithAlphaHexValue:0xFFFFD180]
#define VDColorMaterialOrangeA200 [UIColor vd_colorWithAlphaHexValue:0xFFFFAB40]
#define VDColorMaterialOrangeA400 [UIColor vd_colorWithAlphaHexValue:0xFFFF9100]
#define VDColorMaterialOrangeA700 [UIColor vd_colorWithAlphaHexValue:0xFFFF6D00]

#pragma mark MaterialDeepOrange
#define VDColorMaterialDeepOrange [UIColor vd_colorWithAlphaHexValue:0xFFFF5722]
#define VDColorMaterialDeepOrange50 [UIColor vd_colorWithAlphaHexValue:0xFFFBE9E7]
#define VDColorMaterialDeepOrange100 [UIColor vd_colorWithAlphaHexValue:0xFFFFCCBC]
#define VDColorMaterialDeepOrange200 [UIColor vd_colorWithAlphaHexValue:0xFFFFAB91]
#define VDColorMaterialDeepOrange300 [UIColor vd_colorWithAlphaHexValue:0xFFFF8A65]
#define VDColorMaterialDeepOrange400 [UIColor vd_colorWithAlphaHexValue:0xFFFF7043]
#define VDColorMaterialDeepOrange500 [UIColor vd_colorWithAlphaHexValue:0xFFFF5722]
#define VDColorMaterialDeepOrange600 [UIColor vd_colorWithAlphaHexValue:0xFFF4511E]
#define VDColorMaterialDeepOrange700 [UIColor vd_colorWithAlphaHexValue:0xFFE64A19]
#define VDColorMaterialDeepOrange800 [UIColor vd_colorWithAlphaHexValue:0xFFD84315]
#define VDColorMaterialDeepOrange900 [UIColor vd_colorWithAlphaHexValue:0xFFBF360C]
#define VDColorMaterialDeepOrangeA100 [UIColor vd_colorWithAlphaHexValue:0xFFFF9E80]
#define VDColorMaterialDeepOrangeA200 [UIColor vd_colorWithAlphaHexValue:0xFFFF6E40]
#define VDColorMaterialDeepOrangeA400 [UIColor vd_colorWithAlphaHexValue:0xFFFF3D00]
#define VDColorMaterialDeepOrangeA700 [UIColor vd_colorWithAlphaHexValue:0xFFDD2C00]

#pragma mark MaterialBrown
#define VDColorMaterialBrown [UIColor vd_colorWithAlphaHexValue:0xFF795548]
#define VDColorMaterialBrown50 [UIColor vd_colorWithAlphaHexValue:0xFFEFEBE9]
#define VDColorMaterialBrown100 [UIColor vd_colorWithAlphaHexValue:0xFFD7CCC8]
#define VDColorMaterialBrown200 [UIColor vd_colorWithAlphaHexValue:0xFFBCAAA4]
#define VDColorMaterialBrown300 [UIColor vd_colorWithAlphaHexValue:0xFFA1887F]
#define VDColorMaterialBrown400 [UIColor vd_colorWithAlphaHexValue:0xFF8D6E63]
#define VDColorMaterialBrown500 [UIColor vd_colorWithAlphaHexValue:0xFF795548]
#define VDColorMaterialBrown600 [UIColor vd_colorWithAlphaHexValue:0xFF6D4C41]
#define VDColorMaterialBrown700 [UIColor vd_colorWithAlphaHexValue:0xFF5D4037]
#define VDColorMaterialBrown800 [UIColor vd_colorWithAlphaHexValue:0xFF4E342E]
#define VDColorMaterialBrown900 [UIColor vd_colorWithAlphaHexValue:0xFF3E2723]

#pragma mark MaterialGrey
#define VDColorMaterialGrey [UIColor vd_colorWithAlphaHexValue:0xFF9E9E9E]
#define VDColorMaterialGrey50 [UIColor vd_colorWithAlphaHexValue:0xFFFAFAFA]
#define VDColorMaterialGrey100 [UIColor vd_colorWithAlphaHexValue:0xFFF5F5F5]
#define VDColorMaterialGrey200 [UIColor vd_colorWithAlphaHexValue:0xFFEEEEEE]
#define VDColorMaterialGrey300 [UIColor vd_colorWithAlphaHexValue:0xFFE0E0E0]
#define VDColorMaterialGrey400 [UIColor vd_colorWithAlphaHexValue:0xFFBDBDBD]
#define VDColorMaterialGrey500 [UIColor vd_colorWithAlphaHexValue:0xFF9E9E9E]
#define VDColorMaterialGrey600 [UIColor vd_colorWithAlphaHexValue:0xFF757575]
#define VDColorMaterialGrey700 [UIColor vd_colorWithAlphaHexValue:0xFF616161]
#define VDColorMaterialGrey800 [UIColor vd_colorWithAlphaHexValue:0xFF424242]
#define VDColorMaterialGrey900 [UIColor vd_colorWithAlphaHexValue:0xFF212121]

#pragma mark MaterialBlueGrey
#define VDColorMaterialBlueGrey [UIColor vd_colorWithAlphaHexValue:0xFF607D8B]
#define VDColorMaterialBlueGrey50 [UIColor vd_colorWithAlphaHexValue:0xFFECEFF1]
#define VDColorMaterialBlueGrey100 [UIColor vd_colorWithAlphaHexValue:0xFFCFD8DC]
#define VDColorMaterialBlueGrey200 [UIColor vd_colorWithAlphaHexValue:0xFFB0BEC5]
#define VDColorMaterialBlueGrey300 [UIColor vd_colorWithAlphaHexValue:0xFF90A4AE]
#define VDColorMaterialBlueGrey400 [UIColor vd_colorWithAlphaHexValue:0xFF78909C]
#define VDColorMaterialBlueGrey500 [UIColor vd_colorWithAlphaHexValue:0xFF607D8B]
#define VDColorMaterialBlueGrey600 [UIColor vd_colorWithAlphaHexValue:0xFF546E7A]
#define VDColorMaterialBlueGrey700 [UIColor vd_colorWithAlphaHexValue:0xFF455A64]
#define VDColorMaterialBlueGrey800 [UIColor vd_colorWithAlphaHexValue:0xFF37474F]
#define VDColorMaterialBlueGrey900 [UIColor vd_colorWithAlphaHexValue:0xFF263238]
