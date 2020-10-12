// note: sides are 0 = Red, 1 = Blue, 2 = Green, 3 = Civilian



class CfgPatches
{
    class spagistan_c_troops
    {
        name = "Spagistan Mod infantry configuration";
        author = "Spagistan Mod Authors";
        url = "https://spagistan.com/";
        version = "0";
        requiredAddons[] =
        {
            "rhssaf_c_troops",
            "rhs_c_weapons",
            "po_factions_me"
        };
        units[] =
        {
            "spagistan_soldier_spagistan_army_rifleman",
            "spagistan_soldier_spagistan_army_at",
            "spagistan_soldier_spagistan_army_grenadier",
            "spagistan_soldier_spagistan_army_arifleman",
            "spagistan_soldier_spagistan_army_corporal",
            "spagistan_soldier_spagistan_army_sergeant",
            "spagistan_soldier_garmsar_boys_rifleman_akm",
            "spagistan_soldier_garmsar_boys_rifleman_m70",
            "spagistan_soldier_garmsar_boys_rifleman_le",
            "spagistan_soldier_garmsar_boys_rifleman_aks74",
            "spagistan_soldier_garmsar_boys_rifleman_aks74u",
            "spagistan_soldier_garmsar_boys_rifleman_pm63",
            "spagistan_soldier_garmsar_boys_rifleman_kar98k",
            "spagistan_soldier_garmsar_boys_rifleman_m38",
            "spagistan_soldier_garmsar_boys_rifleman_vz58",
            "spagistan_soldier_garmsar_boys_at",
            "spagistan_soldier_garmsar_boys_grenadier",
            "spagistan_soldier_garmsar_boys_arifleman",
            "spagistan_soldier_garmsar_boys_life_scout",
            "spagistan_soldier_garmsar_boys_eagle_scout"
        };
        weapons[] = {};
    };
};
// who knows if these are necessary but RHS has them and, again, game modding is cargo cult bulshit
class CfgVehicles
{
    // base class for Spagistan Armed Forces faction
    class rhssaf_soldier_m10_base;
    class dummy_rhssaf_soldier_m10_base: rhssaf_soldier_m10_base
    {
        class EventHandlers;
    };
    class spagistan_soldier_spagistan_army_base: dummy_rhssaf_soldier_m10_base
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        identityTypes[] =
        {
            "Head_African",
            "Head_Asian",
            "Head_Greek",
            "Head_Russian",
            "Head_Tanoan",
            "Head_Euro"
        };
        side = 1;
        faction = "spagistan_faction_spagistan_army";
        displayName = "Rifleman";
        genericNames = "SpagistaniMen";
        vehicleClass = "spagistan_vehclass_spagistan_infantry";
        editorSubcategory = "spagistan_EdSubcat_spagistan_infantry";        
        weapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "Throw",
            "Put"
        };
        Items[] =
        {
            "FirstAidKit"
        };
        RespawnItems[] =
        {
           "FirstAidKit"
        };
        magazines[] =
        {
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
        respawnMagazines[] =
        {
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
        linkedItems[] =
        {
            "spagistan_helmet_m97_spagpat",
            "spagistan_vest_md12_spagpat",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] =
        {
            "spagistan_helmet_m97_spagpat",
            "spagistan_vest_md12_spagpat",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        headgearList[] = 
        {
            "spagistan_helmet_m97_spagpat",
            "spagistan_helmet_m97_spagpat_black_ess",
            "spagistan_helmet_m97_spagpat_black_ess_bare",
            "spagistan_helmet_m97_veil_spagpat"
        };
        class EventHandlers: Eventhandlers
        {
            init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
        };
    };
    
    // This one's (currently) just a dummy class for the uniform.
    class spagistan_soldier_m10_spagpat: spagistan_soldier_spagistan_army_base
    {
        scope = 1;
        // inherits model info from grandparent rhssaf_soldier_m10_base
        uniformClass = "spagistan_uniform_m10_spagpat";
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_uniform_m10_spagpat_co.paa"
        };
    };

    class spagistan_soldier_m10_spagpat_summer: spagistan_soldier_spagistan_army_base
    {
        scope = 1;
        uniformClass = "spagistan_uniform_m10_spagpat_summer";
        model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_uniform_m10_spagpat_summer_co.paa"
        };
    };

    // classes scoped for use
    class spagistan_soldier_spagistan_army_rifleman: spagistan_soldier_m10_spagpat_summer
    {
        
        displayName = "Rifleman";
        scope = 2;
        scopeCurator = 2;
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] =
                {
                    "veh_infantry_s"
                };
                speechPlural[] =
                {
                    "veh_infantry_p"
                };
            };
        };
        textSingular = "infantry";
        textPlural = "infantry";
        nameSound = "veh_infantry_s";
    };
    class spagistan_soldier_spagistan_army_at: spagistan_soldier_spagistan_army_rifleman
    {
        displayName = "Rifleman (AT)";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] =
                {
                    "veh_infantry_AT_s"
                };
                speechPlural[] =
                {
                    "veh_infantry_AT_p"
                };
            };
        };
        textSingular = "AT soldier";
        textPlural = "AT soldiers";
        nameSound = "veh_infantry_AT_s";
        icon = "iconManAT";
        cost = 180000;
        threat[] = {1,0.69999999,0.30000001};
        weapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "rhs_weap_rpg26",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "rhs_weap_rpg26",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white",
            "rhs_rpg26_mag"
        };
        respawnMagazines[] =
        {
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white",
            "rhs_rpg26_mag"
        };
    };
    class spagistan_soldier_spagistan_army_grenadier: spagistan_soldier_spagistan_army_rifleman
    {
        displayName = "Grenadier";
        cost = 130000;
        threat[] = {1,0.30000001,0.1};
        weapons[] =
        {
            "rhs_weap_ak74m_gp25_dtk",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "rhs_weap_ak74m_gp25_dtk",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
        };
        respawnMagazines[] =
        {
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
        };
    };
    class spagistan_soldier_spagistan_army_arifleman: spagistan_soldier_spagistan_army_rifleman
    {
        displayName = "Automatic Rifleman";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[]=
                {
                    "veh_infantry_MG_s"
                };
                speechPlural[]=
                {
                    "veh_infantry_MG_p"
                };
            };
        };
        textSingular = "machinegunner";
        textPlural = "machinegunners";
        nameSound = "veh_infantry_MG_s";
        cost = 125000;
        threat[] = {1,0.1,0.30000001};
        icon = "iconManMG";
        weapons[] =
        {
            "rhs_weap_pkp",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "rhs_weap_pkp",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "rhs_100Rnd_762x54mmR_7BZ3",
            "rhs_100Rnd_762x54mmR_7BZ3",
            "rhs_100Rnd_762x54mmR_7BZ3",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
        respawnMagazines[] =
        {
            "rhs_100Rnd_762x54mmR_7BZ3",
            "rhs_100Rnd_762x54mmR_7BZ3",
            "rhs_100Rnd_762x54mmR_7BZ3",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
        backpack = "spagistan_kitbag_spagpat";
    };
    class spagistan_soldier_spagistan_army_corporal: spagistan_soldier_spagistan_army_rifleman
    {
        displayName = "Team Leader";
        cost = 350000;
        camouflage = 1.4;
        sensitivity = 3.3;
        icon = "iconManLeader";
        weapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "rhs_weap_makarov_pm",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "rhs_weap_makarov_pm",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_mag_9x18_8_57N181S",
            "rhs_mag_9x18_8_57N181S",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
        respawnMagazines[] =
        {
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_mag_9x18_8_57N181S",
            "rhs_mag_9x18_8_57N181S",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
    };
    class spagistan_soldier_spagistan_army_sergeant: spagistan_soldier_spagistan_army_corporal
    {
        displayName = "Squad Leader";
        cost = 500000;
        icon = "iconManLeader";        
        backpack = "spagistan_TFAR_mr3000";
    };

    // base class for Garmsar Boys' Academy faction
    class LOP_AM_Infantry_Rifleman;
    class LOP_AM_Infantry_Rifleman_2;
    class LOP_AM_Infantry_Rifleman_3;
    class LOP_AM_Infantry_Rifleman_4;
    class LOP_AM_Infantry_Rifleman_5;
    class LOP_AM_Infantry_Rifleman_6;
    class LOP_AM_Infantry_Rifleman_7;
    class LOP_AM_Infantry_Rifleman_8;
    class LOP_AM_Infantry_Rifleman_9;
    class LOP_AM_Infantry_AT;
    class LOP_AM_Infantry_GL;
    class LOP_AM_Infantry_AR;
    class LOP_AM_Infantry_TL;
    class LOP_AM_Infantry_SL;

    #define GARMSAR_BOYS \
    dlc = "spagistan"; \
    author = "Spagistan Mod Authors"; \
    scope = 2; \
    side = 1; \
    faction = "spagistan_faction_garmsar_boys"; \
    genericNames = "SpagistaniMen"; \
    linkedItems[] = \
    { \
        "spagistan_helmet_m97_spagpat", \
        "ItemMap", \
        "ItemCompass" \
    }; \
    headgearList[] = \
        { \
        "spagistan_helmet_m97_spagpat", \
        "spagistan_helmet_m97_spagpat_black_ess", \
        "spagistan_helmet_m97_spagpat_black_ess_bare" \
        }; \
    class EventHandlers \
    { \
        init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; \
    };

    class spagistan_soldier_garmsar_boys_rifleman_akm: LOP_AM_Infantry_Rifleman
    {
        GARMSAR_BOYS
        displayName = "Rifleman (AKM)";
        uniformClass = "spagistan_uniform_am_fatigue_04_3";
    };
    class spagistan_soldier_garmsar_boys_rifleman_m70: LOP_AM_Infantry_Rifleman_2
    {
        GARMSAR_BOYS
        displayName = "Rifleman (M70)";
        uniformClass = "spagistan_uniform_am_fatigue_02_3";
    };
    class spagistan_soldier_garmsar_boys_rifleman_le: LOP_AM_Infantry_Rifleman_3
    {
        GARMSAR_BOYS
        displayName = "Rifleman (Lee Enfield)";
        uniformClass = "spagistan_uniform_am_fatigue_04_3";
        
    };
    class spagistan_soldier_garmsar_boys_rifleman_aks74: LOP_AM_Infantry_Rifleman_4
    {
        GARMSAR_BOYS
        displayName = "Rifleman (AKS-74)";
        uniformClass = "spagistan_uniform_am_fatigue_04_3";
    };
    class spagistan_soldier_garmsar_boys_rifleman_aks74u: LOP_AM_Infantry_Rifleman_5
    {
        GARMSAR_BOYS
        displayName = "Rifleman (AKS-74U)";
        uniformClass = "spagistan_uniform_am_fatigue_04_3";
    };
    class spagistan_soldier_garmsar_boys_rifleman_pm63: LOP_AM_Infantry_Rifleman_6
    {
        GARMSAR_BOYS
        displayName = "Rifleman (PM-63)";
        uniformClass = "spagistan_uniform_am_fatigue_04_3";
    };
    class spagistan_soldier_garmsar_boys_rifleman_kar98k: LOP_AM_Infantry_Rifleman_7
    {
        GARMSAR_BOYS
        displayName = "Rifleman (Kar 98k)";
        uniformClass = "spagistan_uniform_am_fatigue_04_3";
    };
    class spagistan_soldier_garmsar_boys_rifleman_m38: LOP_AM_Infantry_Rifleman_8
    {
        GARMSAR_BOYS
        displayName = "Rifleman (M38)";
        uniformClass = "spagistan_uniform_am_fatigue_04_3";
    };
    class spagistan_soldier_garmsar_boys_rifleman_vz58: LOP_AM_Infantry_Rifleman_9
    {
        GARMSAR_BOYS
        displayName = "Rifleman (Vz.58)";
        uniformClass = "spagistan_uniform_am_fatigue_04_3";
    };
    class spagistan_soldier_garmsar_boys_at: LOP_AM_Infantry_AT
    {
        GARMSAR_BOYS
        displayName = "Rifleman (RPG-7)";
        uniformClass = "spagistan_uniform_am_fatigue_03_2";
    };
    class spagistan_soldier_garmsar_boys_grenadier: LOP_AM_Infantry_GL
    {
        GARMSAR_BOYS
        displayName = "Grenadier";
        uniformClass = "spagistan_uniform_am_fatigue_03_3";
    };
    class spagistan_soldier_garmsar_boys_arifleman: LOP_AM_Infantry_AR
    {
        GARMSAR_BOYS
        displayName = "Automatic Rifleman";
        uniformClass = "spagistan_uniform_am_fatigue_04";
        magazines[]=
        {
            "rhs_100Rnd_762x54mmR",
            "rhs_100Rnd_762x54mmR",
            "rhs_mag_rdg2_white",
            "rhs_mag_rdg2_black",
            "rhs_mag_rgd5",
            "rhs_mag_rgd5"
        };
        respawnMagazines[]=
        {
            "rhs_100Rnd_762x54mmR",
            "rhs_100Rnd_762x54mmR",
            "rhs_mag_rdg2_white",
            "rhs_mag_rdg2_black",
            "rhs_mag_rgd5",
            "rhs_mag_rgd5"
        };
    };
    class spagistan_soldier_garmsar_boys_life_scout: LOP_AM_Infantry_TL
    {
        GARMSAR_BOYS
        displayName = "Life Scout";
        uniformClass = "spagistan_uniform_am_fatigue_01";
    };
    class spagistan_soldier_garmsar_boys_eagle_scout: LOP_AM_Infantry_SL
    {
        displayName = "Eagle Scout";
        headgearList[] = {"spagistan_beret_green_spagistan"};
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        scope = 2;
        side = 1;
        faction = "spagistan_faction_garmsar_boys";
        genericNames = "SpagistaniMen";
        uniformClass = "spagistan_uniform_am_fatigue_02";
        linkedItems[]=
		{
			"spagistan_beret_green_spagistan",
			"ItemMap",
			"ItemCompass",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"spagistan_beret_green_spagistan",
			"ItemMap",
			"ItemCompass",
			"ItemRadio"
		};
    };
};

class CfgGroups
{
    class West
    {
        class spagistan_faction_spagistan_army 
        {
            name = "Spagistan Armed Forces";
            class spagistan_group_spagistan_army_infantry
            {
                name = "Infantry";
                aliveCategory = "Infantry";
                class spagistan_group_spagistan_army_infantry_squad
                {
                    name = "Rifle Squad";
                    faction = "spagistan_faction_spagistan_army";
                    side = 1;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_sergeant";
                        rank = "SERGEANT";
                        position[]={0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_corporal";
                        rank = "CORPORAL";
                        position[] = {0,20,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_arifleman";
                        rank = "PRIVATE";
                        position[] = {5,15,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_grenadier";
                        rank = "PRIVATE";
                        position[] = {-5,15,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_at";
                        rank = "PRIVATE";
                        position[] = {-10,10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_corporal";
                        rank = "CORPORAL";
                        position[] = {0,-10,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_arifleman";
                        rank = "PRIVATE";
                        position[] = {-5,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_grenadier";
                        rank = "PRIVATE";
                        position[] = {5,-15,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_at";
                        rank = "PRIVATE";
                        position[] = {10,-20,0};
                    };
                };
            };
        };
        class spagistan_faction_garmsar_boys
        {
            name = "Garmsar Boys' Academy";
            class spgistan_group_garmsar_boys_infantry
            {
                name = "Infantry";
                aliveCategory = "Infantry";
                class spagistan_group_garmsar_boys_infantry_squad
                {
                    name = "Rifle Squad";
                    faction = "spagistan_faction_garmsar_boys";
                    side = 1;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_garmsar_boys_eagle_scout";
                        rank = "SERGEANT";
                        position[]={0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_garmsar_boys_life_scout";
                        rank = "CORPORAL";
                        position[] = {0,20,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_garmsar_boys_arifleman";
                        rank = "PRIVATE";
                        position[] = {5,15,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_garmsar_boys_grenadier";
                        rank = "PRIVATE";
                        position[] = {-5,15,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_garmsar_boys_at";
                        rank = "PRIVATE";
                        position[] = {-10,10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_garmsar_boys_life_scout";
                        rank = "CORPORAL";
                        position[] = {0,-10,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_garmsar_boys_arifleman";
                        rank = "PRIVATE";
                        position[] = {-5,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_garmsar_boys_grenadier";
                        rank = "PRIVATE";
                        position[] = {5,-15,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_garmsar_boys_at";
                        rank = "PRIVATE";
                        position[] = {10,-20,0};
                    };
                };
            };
        };
    };
};