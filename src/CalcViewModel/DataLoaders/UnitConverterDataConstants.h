﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

namespace CalculatorApp
{
    namespace ViewModel
    {
        private enum UnitConverterUnits
        {
            UnitStart = 0,
            Area_Acre = UnitStart + 1,
            Area_Hectare = UnitStart + 2,
            Area_SquareCentimeter = UnitStart + 3,
            Area_SquareFoot = UnitStart + 4,
            Area_SquareInch = UnitStart + 5,
            Area_SquareKilometer = UnitStart + 6,
            Area_SquareMeter = UnitStart + 7,
            Area_SquareMile = UnitStart + 8,
            Area_SquareMillimeter = UnitStart + 9,
            Area_SquareYard = UnitStart + 10,
            Data_Bit = UnitStart + 11,
            Data_Byte = UnitStart + 12,
            Data_Gigabit = UnitStart + 13,
            Data_Gigabyte = UnitStart + 14,
            Data_Kilobit = UnitStart + 15,
            Data_Kilobyte = UnitStart + 16,
            Data_Megabit = UnitStart + 17,
            Data_Megabyte = UnitStart + 18,
            Data_Petabit = UnitStart + 19,
            Data_Petabyte = UnitStart + 20,
            Data_Terabit = UnitStart + 21,
            Data_Terabyte = UnitStart + 22,
            Energy_BritishThermalUnit = UnitStart + 23,
            Energy_Calorie = UnitStart + 24,
            Energy_ElectronVolt = UnitStart + 25,
            Energy_FootPound = UnitStart + 26,
            Energy_Joule = UnitStart + 27,
            Energy_Kilocalorie = UnitStart + 28,
            Energy_Kilojoule = UnitStart + 29,
            Length_Centimeter = UnitStart + 30,
            Length_Foot = UnitStart + 31,
            Length_Inch = UnitStart + 32,
            Length_Kilometer = UnitStart + 33,
            Length_Meter = UnitStart + 34,
            Length_Micron = UnitStart + 35,
            Length_Mile = UnitStart + 36,
            Length_Millimeter = UnitStart + 37,
            Length_Nanometer = UnitStart + 38,
            Length_NauticalMile = UnitStart + 39,
            Length_Yard = UnitStart + 40,
            Power_BritishThermalUnitPerMinute = UnitStart + 41,
            Power_FootPoundPerMinute = UnitStart + 42,
            Power_Horsepower = UnitStart + 43,
            Power_Kilowatt = UnitStart + 44,
            Power_Watt = UnitStart + 45,
            Temperature_DegreesCelsius = UnitStart + 46,
            Temperature_DegreesFahrenheit = UnitStart + 47,
            Temperature_Kelvin = UnitStart + 48,
            Time_Day = UnitStart + 49,
            Time_Hour = UnitStart + 50,
            Time_Microsecond = UnitStart + 51,
            Time_Millisecond = UnitStart + 52,
            Time_Minute = UnitStart + 53,
            Time_Second = UnitStart + 54,
            Time_Week = UnitStart + 55,
            Time_Year = UnitStart + 56,
            Speed_CentimetersPerSecond = UnitStart + 57,
            Speed_FeetPerSecond = UnitStart + 58,
            Speed_KilometersPerHour = UnitStart + 59,
            Speed_Knot = UnitStart + 60,
            Speed_Mach = UnitStart + 61,
            Speed_MetersPerSecond = UnitStart + 62,
            Speed_MilesPerHour = UnitStart + 63,
            Volume_CubicCentimeter = UnitStart + 64,
            Volume_CubicFoot = UnitStart + 65,
            Volume_CubicInch = UnitStart + 66,
            Volume_CubicMeter = UnitStart + 67,
            Volume_CubicYard = UnitStart + 68,
            Volume_CupUS = UnitStart + 69,
            Volume_FluidOunceUK = UnitStart + 70,
            Volume_FluidOunceUS = UnitStart + 71,
            Volume_GallonUK = UnitStart + 72,
            Volume_GallonUS = UnitStart + 73,
            Volume_Liter = UnitStart + 74,
            Volume_Milliliter = UnitStart + 75,
            Volume_PintUK = UnitStart + 76,
            Volume_PintUS = UnitStart + 77,
            Volume_TablespoonUS = UnitStart + 78,
            Volume_TeaspoonUS = UnitStart + 79,
            Volume_QuartUK = UnitStart + 80,
            Volume_QuartUS = UnitStart + 81,
            Weight_Carat = UnitStart + 82,
            Weight_Centigram = UnitStart + 83,
            Weight_Decigram = UnitStart + 84,
            Weight_Decagram = UnitStart + 85,
            Weight_Gram = UnitStart + 86,
            Weight_Hectogram = UnitStart + 87,
            Weight_Kilogram = UnitStart + 88,
            Weight_LongTon = UnitStart + 89,
            Weight_Milligram = UnitStart + 90,
            Weight_Ounce = UnitStart + 91,
            Weight_Pound = UnitStart + 92,
            Weight_ShortTon = UnitStart + 93,
            Weight_Stone = UnitStart + 94,
            Weight_Tonne = UnitStart + 95,
            Area_SoccerField = UnitStart + 99,
            Data_FloppyDisk = UnitStart + 100,
            Data_CD = UnitStart + 101,
            Data_DVD = UnitStart + 102,
            Energy_Battery = UnitStart + 103,
            Length_Paperclip = UnitStart + 105,
            Length_JumboJet = UnitStart + 107,
            Power_LightBulb = UnitStart + 108,
            Power_Horse = UnitStart + 109,
            Volume_Bathtub = UnitStart + 111,
            Weight_Snowflake = UnitStart + 113,
            Weight_Elephant = UnitStart + 114,
            Volume_TeaspoonUK = UnitStart + 115,
            Volume_TablespoonUK = UnitStart + 116,
            Area_Hand = UnitStart + 118,
            Speed_Turtle = UnitStart + 121,
            Speed_Jet = UnitStart + 122,
            Volume_CoffeeCup = UnitStart + 124,
            Weight_Whale = UnitStart + 123,
            Volume_SwimmingPool = UnitStart + 125,
            Speed_Horse = UnitStart + 126,
            Area_Paper = UnitStart + 127,
            Area_Castle = UnitStart + 128,
            Energy_Banana = UnitStart + 129,
            Energy_SliceOfCake = UnitStart + 130,
            Length_Hand = UnitStart + 131,
            Power_TrainEngine = UnitStart + 132,
            Weight_SoccerBall = UnitStart + 133,
            Angle_Degree = UnitStart + 134,
            Angle_Radian = UnitStart + 135,
            Angle_Gradian = UnitStart + 136,
            Pressure_Atmosphere = UnitStart + 137,
            Pressure_Bar = UnitStart + 138,
            Pressure_KiloPascal = UnitStart + 139,
            Pressure_MillimeterOfMercury = UnitStart + 140,
            Pressure_Pascal = UnitStart + 141,
            Pressure_PSI = UnitStart + 142,
            Data_Exabits = UnitStart + 143,
            Data_Exabytes = UnitStart + 144,
            Data_Exbibits = UnitStart + 145,
            Data_Exbibytes = UnitStart + 146,
            Data_Gibibits = UnitStart + 147,
            Data_Gibibytes = UnitStart + 148,
            Data_Kibibits = UnitStart + 149,
            Data_Kibibytes = UnitStart + 150,
            Data_Mebibits = UnitStart + 151,
            Data_Mebibytes = UnitStart + 152,
            Data_Pebibits = UnitStart + 153,
            Data_Pebibytes = UnitStart + 154,
            Data_Tebibits = UnitStart + 155,
            Data_Tebibytes = UnitStart + 156,
            Data_Yobibits = UnitStart + 157,
            Data_Yobibytes = UnitStart + 158,
            Data_Yottabit = UnitStart + 159,
            Data_Yottabyte = UnitStart + 160,
            Data_Zebibits = UnitStart + 161,
            Data_Zebibytes = UnitStart + 162,
            Data_Zetabits = UnitStart + 163,
            Data_Zetabytes = UnitStart + 164,
            UnitEnd = Data_Zetabytes
        };
    }
}
