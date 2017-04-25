class cfgMission {

    scoreboardDurationCurrent = 7;
    scoreboardDurationAlltime = 10;
    scoreboardSaveTag = "XIV_WITA_SCOREBOARD";

    locationDistance[] = {50,100};
    heliDistance[] = {20,80};
    locationTypeWeight[] = {
        "VILLAGE", 0.5,
        "CITY", 0.2,
        "CAPITAL", 0.1,
        "OTHER", 0.2
    };

    bluforSpawnDistanceVariance = 350;
    bluforBaseAreaSize = 200;
    bluforMoneyStartFactor = 1;
    bluforMoneyGainFactor = 1;
    bluforSpawnDistances[] = {
        2000,
        3000,
        4000
    };

    timeBeforeFirstTrack = 30;
    agentMarkerInterval = 120;
    agentMarkerIntervalVariance = 60;
    agentMarkerVariance = 100;
    agentMarkerFadeout = 180;
    agentMarkerIntervalBase = 1.1;
    agentMarkerVarianceBase = 10;
    agentMarkerFadeoutBase = 10;

    indepStartVehicles[] = {
        "I_Quadbike_01_F"
    };

    cacheAmountFactor = 1;
    cacheMinDist = 3000;
    cacheIndepStartDist = 2000;
    cacheMarkerVarianceIndep = 0;
    cacheMarkerVarianceBlufor = 300;

    class civVehicles {

        carLocationAmountFactor = 0.3;
        carLocationMinDist = 30;

        carRoadAmountFactor = 0.03;
        carRoadMinDist = 300;

        carTypes[] = {
            "C_Offroad_01_F"
        };

        heliAirportAmountFactor = 1;
        heliFuelFixValue = 0.03;
        heliTypes[] = {
            "C_Heli_Light_01_civil_F"
        };

        boatCoastAmountFactor = 1;
        boatTypes[] = {
            "C_Boat_Civil_01_F"
        };
    };
};
