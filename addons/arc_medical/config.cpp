class CfgPatches {
    class arc_medical {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.58;
        requiredAddons[] = {"ace_medical"};
        author[]= {"Turd Ferguson"};
        authorUrl = "https://github.com/ARCOMM/ARC_Medical";
    };
};


class ACE_Medical_Actions {
    class Advanced {
        class fieldDressing;
        class BloodIV: fieldDressing {
            allowSelfTreatment = 1;
        };
        class SurgicalKit: fieldDressing {
            allowSelfTreatment = 1;
        };
        class PersonalAidKit: fieldDressing {
            allowSelfTreatment = 1;
        };
    };
    class Treatment {
        class Bandaging {
            class FieldDressing {
                effectiveness = 5;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
                class Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class AbrasionMinor: Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class AbrasionMedium: Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class AbrasionLarge: Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class Avulsions: Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class AvulsionsMinor: Avulsions {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                 };
                class AvulsionsMedium: Avulsions {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class AvulsionsLarge: Avulsions {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class Contusion: Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class ContusionMinor: Contusion {};
                class ContusionMedium: Contusion {};
                class ContusionLarge: Contusion {};

                class CrushWound: Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class CrushWoundMinor: CrushWound {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class CrushWoundMedium: CrushWound {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class CrushWoundLarge: CrushWound {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class Cut: Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class CutMinor: Cut {
                effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class CutMedium: Cut {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class CutLarge: Cut {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class Laceration: Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class LacerationMinor: Laceration {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class LacerationMedium: Laceration {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class LacerationLarge: Laceration {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class velocityWound: Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class velocityWoundMinor: velocityWound {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class velocityWoundMedium: velocityWound {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class velocityWoundLarge: velocityWound {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class punctureWound: Abrasion {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class punctureWoundMinor: punctureWound {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class punctureWoundMedium: punctureWound {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class punctureWoundLarge: punctureWound {
                    effectiveness = 5;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
            };
            class PackingBandage: fieldDressing {
                class Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class AbrasionMinor: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.9;
                    reopeningMinDelay = 5;
                    reopeningMaxDelay = 10;
                };
                class AbrasionMedium: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.9;
                    reopeningMinDelay = 5;
                    reopeningMaxDelay = 10;
                };
                class AbrasionLarge: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.9;
                    reopeningMinDelay = 5;
                    reopeningMaxDelay = 10;
                };

                class Avulsions: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.3;
                    reopeningMinDelay = 120;
                    reopeningMaxDelay = 200;
                };
                class AvulsionsMinor: Avulsions {
                    effectiveness = 0;
                    reopeningChance = 0.2;
                    reopeningMinDelay = 500;
                    reopeningMaxDelay = 1000;
                };
                class AvulsionsMedium: Avulsions {
                    effectiveness = 0;
                    reopeningChance = 0.4;
                    reopeningMinDelay = 250;
                    reopeningMaxDelay = 750;
                };
                class AvulsionsLarge: Avulsions {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                    reopeningMinDelay = 120;
                    reopeningMaxDelay = 200;
                };

                class Contusion: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class ContusionMinor: Contusion {};
                class ContusionMedium: Contusion {};
                class ContusionLarge: Contusion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class CrushWound: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.2;
                    reopeningMinDelay = 120;
                    reopeningMaxDelay = 200;
                };
                class CrushWoundMinor: CrushWound {
                    effectiveness = 0;
                    reopeningChance = 0.4;
                    reopeningMinDelay = 500;
                    reopeningMaxDelay = 1000;
                };
                class CrushWoundMedium: CrushWound {
                    effectiveness = 0;
                    reopeningChance = 0.6;
                    reopeningMinDelay = 280;
                    reopeningMaxDelay = 320;
                };
                class CrushWoundLarge: CrushWound {
                    effectiveness = 0;
                    reopeningChance = 0.8;
                    reopeningMinDelay = 120;
                    reopeningMaxDelay = 200;
                };

                class Cut: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.4;
                    reopeningMinDelay = 10000;
                    reopeningMaxDelay = 20000;
                };
                class CutMinor: Cut {
                    effectiveness = 0;
                    reopeningChance = 0.1;
                    reopeningMinDelay = 20000;
                    reopeningMaxDelay = 30000;
                };
                class CutMedium: Cut {
                    effectiveness = 0;
                    reopeningChance = 0.4;
                    reopeningMinDelay = 2000;
                    reopeningMaxDelay = 3000;
                };
                class CutLarge: Cut {
                    effectiveness = 0;
                    reopeningChance = 0.6;
                    reopeningMinDelay = 300;
                    reopeningMaxDelay = 2060;
                };

                class Laceration: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                    reopeningMinDelay = 120;
                    reopeningMaxDelay = 260;
                };
                class LacerationMinor: Laceration {
                    effectiveness = 0;
                    reopeningChance = 0.1;
                    reopeningMinDelay = 500;
                    reopeningMaxDelay = 700;
                };
                class LacerationMedium: Laceration {
                    effectiveness = 0;
                    reopeningChance = 0.3;
                    reopeningMinDelay = 300;
                    reopeningMaxDelay = 600;
                };
                class LacerationLarge: Laceration {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                    reopeningMinDelay = 220;
                    reopeningMaxDelay = 360;
                };
                class velocityWound: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                    reopeningMinDelay = 20;
                    reopeningMaxDelay = 300;
                };
                class velocityWoundMinor: velocityWound {
                    effectiveness = 0;
                    reopeningChance = 0.7;
                    reopeningMinDelay = 800;
                    reopeningMaxDelay = 1000;
                };
                class velocityWoundMedium: velocityWound {
                    effectiveness = 0;
                    reopeningChance = 0.6;
                    reopeningMinDelay = 500;
                    reopeningMaxDelay = 800;
                };
                class velocityWoundLarge: velocityWound {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                    reopeningMinDelay = 300;
                    reopeningMaxDelay = 500;
                };
                class punctureWound: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                    reopeningMinDelay = 20;
                    reopeningMaxDelay = 300;
                };
                class punctureWoundMinor: punctureWound {};
                class punctureWoundMedium: punctureWound {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                };
                class punctureWoundLarge: punctureWound {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                    reopeningMinDelay = 20;
                    reopeningMaxDelay = 300;
                };
            };

            class ElasticBandage: fieldDressing {
                class Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class AbrasionMinor: Abrasion {};
                class AbrasionMedium: Abrasion {
                    effectiveness = 0;
                };
                class AbrasionLarge: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                };

                class Avulsions: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.4;
                    reopeningMinDelay = 120;
                    reopeningMaxDelay = 200;
                };
                class AvulsionsMinor: Avulsions {
                    effectiveness = 0;
                    reopeningChance = 0.2;
                };
                class AvulsionsMedium: Avulsions {
                    effectiveness = 0;
                    reopeningChance = 0.4;
                };
                class AvulsionsLarge: Avulsions {
                    effectiveness = 0;
                    reopeningChance = 0.4;
                    reopeningMinDelay = 120;
                    reopeningMaxDelay = 200;
                };

                class Contusion: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class ContusionMinor: Contusion {};
                class ContusionMedium: Contusion {};
                class ContusionLarge: Contusion {};

                class CrushWound: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class CrushWoundMinor: CrushWound {};
                class CrushWoundMedium: CrushWound {};
                class CrushWoundLarge: CrushWound {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class Cut: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.2;
                    reopeningMinDelay = 10;
                    reopeningMaxDelay = 400;
                };
                class CutMinor: Cut {};
                class CutMedium: Cut {
                    effectiveness = 0;
                    reopeningChance = 0.3;
                };
                class CutLarge: Cut {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                    reopeningMinDelay = 10;
                    reopeningMaxDelay = 400;
                };

                class Laceration: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.3;
                    reopeningMinDelay = 120;
                    reopeningMaxDelay = 260;
                };
                class LacerationMinor: Laceration {};
                class LacerationMedium: Laceration {
                    effectiveness = 0;
                };
                class LacerationLarge: Laceration {
                    effectiveness = 0;
                    reopeningChance = 0.3;
                    reopeningMinDelay = 120;
                    reopeningMaxDelay = 260;
                };

                class velocityWound: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                    reopeningMinDelay = 20;
                    reopeningMaxDelay = 300;
                };
                class velocityWoundMinor: velocityWound {};
                class velocityWoundMedium: velocityWound {
                    effectiveness = 0;
                };
                class velocityWoundLarge: velocityWound {
                    effectiveness = 0;
                    reopeningChance = 0.7;
                    reopeningMinDelay = 20;
                    reopeningMaxDelay = 300;
                };

                class punctureWound: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.3;
                    reopeningMinDelay = 20;
                    reopeningMaxDelay = 300;
                };
                class punctureWoundMinor: punctureWound {};
                class punctureWoundMedium: punctureWound {
                    effectiveness = 0;
                    reopeningChance = 0.5;
                };
                class punctureWoundLarge: punctureWound {
                    effectiveness = 0;
                    reopeningChance = 0.7;
                    reopeningMinDelay = 20;
                    reopeningMaxDelay = 300;
                };
            };
            class QuikClot: fieldDressing {
                class Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class AbrasionMinor: Abrasion {};
                class AbrasionMedium: Abrasion {};
                class AbrasionLarge: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class Avulsions: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.1;
                    reopeningMinDelay = 300;
                    reopeningMaxDelay = 350;
                };
                class AvulsionsMinor: Avulsions {};
                class AvulsionsMedium: Avulsions {
                    effectiveness = 0;
                };
                class AvulsionsLarge: Avulsions {
                    effectiveness = 0;
                    reopeningChance = 0.1;
                    reopeningMinDelay = 300;
                    reopeningMaxDelay = 350;
                };

                class Contusion: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class ContusionMinor: Contusion {};
                class ContusionMedium: Contusion {};
                class ContusionLarge: Contusion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class CrushWound: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class CrushWoundMinor: CrushWound {};
                class CrushWoundMedium: CrushWound {
                    effectiveness = 0;
                    reopeningChance = 0.05;
                };
                class CrushWoundLarge: CrushWound {
                    effectiveness = 0;
                    reopeningChance = 0.1;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class Cut: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 100;
                    reopeningMaxDelay = 400;
                };
                class CutMinor: Cut {};
                class CutMedium: Cut {
                    effectiveness = 0;
                    reopeningChance = 0;
                };
                class CutLarge: Cut {
                    effectiveness = 0;
                    reopeningChance = 0.2;
                    reopeningMinDelay = 100;
                    reopeningMaxDelay = 400;
                };

                class Laceration: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };
                class LacerationMinor: Laceration {};
                class LacerationMedium: Laceration {
                    effectiveness = 0;
                };
                class LacerationLarge: Laceration {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 0;
                    reopeningMaxDelay = 0;
                };

                class velocityWound: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0;
                    reopeningMinDelay = 200;
                    reopeningMaxDelay = 300;
                };
                class velocityWoundMinor: velocityWound {};
                class velocityWoundMedium: velocityWound {
                    effectiveness = 0;
                };
                class velocityWoundLarge: velocityWound {
                    effectiveness = 0;
                    reopeningChance = 0.1;
                    reopeningMinDelay = 200;
                    reopeningMaxDelay = 300;
                };

                class punctureWound: Abrasion {
                    effectiveness = 0;
                    reopeningChance = 0.05;
                    reopeningMinDelay = 200;
                    reopeningMaxDelay = 300;
                };
                class punctureWoundMinor: punctureWound {};
                class punctureWoundMedium: punctureWound {
                    effectiveness = 0;
                    reopeningChance = 0.1;
                };
                class punctureWoundLarge: punctureWound {
                    effectiveness = 0;
                    reopeningChance = 0.15;
                    reopeningMinDelay = 200;
                    reopeningMaxDelay = 300;
                };
            };
        };
    };
};
