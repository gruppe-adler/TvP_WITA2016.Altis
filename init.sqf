enableSaving [false, false];
enableSentences false;
setviewdistance 3500;

["BLU_F", "ger_heer_w"] call GRAD_Loadout_fnc_FactionSetLoadout;
["IND_F", "agent"] call GRAD_Loadout_fnc_FactionSetLoadout;

[] execVM "dynamicSimulation.sqf";
