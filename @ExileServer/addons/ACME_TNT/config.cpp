class CfgPatches {
	class ACME_TNT {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFunctions {
	class acmetnt {
		class main {
			file = "\x\addons\ACME_TNT\init";
			class init {
				postInit = 1;
			};
		};
	};
};

