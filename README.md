# ACME_TNT
Terrible Nuke Territory - This script bombs randomized or static locations on your map. 

First of all ---> CREDITS
****************************************************************************************************************
                                                                                                               
 This is an adaption from "mmmyum's animated air raid dayz"
 So all credits for this goes to mmmyum                                                                        
                                                                                                               
   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   * 
                                                                                                                
 Special thanks to:                                                                                            
                    $p4rkY ---------- for beeing my Mentor                                                     
                    adR1 ------------ for beeing testing and translation guy                                   
                    Eichi ----------- for helping with the TraderZone detection                                
                    My wife --------- for making awesome coffee                                                
                    Saecco Minuto --- cause thats the reason why my wife could make such awesome coffee        
                                                                                                               
****************************************************************************************************************
INSTALLATION

This step is very hard, so if you are not familiar with scripting or setting up a arma 3 server with exile, I advise you to not install this on your server.....!

Just joking...

Step 1
Download the File, put the "ACME_TNT.pbo" into "@ExileServer\addons"

Step 2
If you like to have sounds of hooting sirens, put the Folder "Sounds" to your mission.pbo (for example Exile.Altis.pbo) Otherwise skip Step 3 and go to ACME_TNT.pbo\server\ACME_TNT.sqf and set line 69 (_ambientSound) to false.

Step 3
Open your discription.ext and add the following lines to it. If you have already an existing CfgSound, merge it to that one...
```
            class CfgSounds
            {
                sounds[] =
                {
                drop,siren1,siren2,siren3
                };
                class drop
                {
                name="drop";
                sound[]={\Sounds\drop.ogg,db+10,1};
                titles[] = {};
                };
                class siren1
                {
                name="siren1";
                sound[]={\Sounds\siren1.ogg,db+10,1};
                titles[] = {};
                };
                class siren2
                {
                name="siren2";
                sound[]={\Sounds\siren2.ogg,db+10,1};
                titles[] = {};
                };
                    class siren3
                {
                name="siren3";
                sound[]={\Sounds\siren3.ogg,db+10,1};
                titles[] = {};
                };
            };
            ```
Done.... Thats it...

To edit settings open ACME_TNT\server\ACME_TNT.sqf
Look to the lines below "Start Setup - change settings below to your wishes"

Hope you have fun with it
