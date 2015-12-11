class usml_aif
		{
			name="Armed Islamic Front";
			class Infantry
			{
				name = "Infantry";
				aliveCategory="Infantry";
				
				class aif_group_infantry_squad
				{
					name = "Infantry Squad";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_TeamLeader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_support_MG";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_riflemanGL";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "aif_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "aif_riflemanAK103";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "aif_support_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "aif_riflemanM4";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "aif_specialist_Ex";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "aif_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "aif_riflemanGLM4";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				
				
				
				class aif_group_fireteam
				{
					name = "Fire Team";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_TeamLeader";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_support_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_riflemanM4";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "aif_support_AT";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};

				class aif_group_fireteam_MG
				{
					name = "Fire Team MG";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_TeamLeader";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_support_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_support_MG";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "aif_riflemanAK103";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};

				class aif_group_fireteam_AT
				{
					name = "Fire Team AT";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_TeamLeader";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_support_AT";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_support_rpg26";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "aif_rifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};


				class aif_group_fireteam_AA
				{
					name = "Fire Team AA";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_TeamLeader";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_support_AA";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_riflemanAK103";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "aif_rifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				
				

				
				class aif_group_sniperteam
				{
					name = "Sniper Team";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_sniper";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_riflemanM4";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
				};

				class aif_group_sentry1
				{
					name = "Sentry 1";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_teamleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_riflemanM4";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
				};

				class aif_group_sentry2
				{
					name = "Sentry 2";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_riflemanAK103";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_riflemanGLM4";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
				};

				class aif_group_fireteam_G
				{
					name = "Fire Team Elite";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_TeamLeader_G";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_medic_G";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_rifleman_G";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "aif_support_rpg26_G";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};



			};
			class Motorized
			{
				name = "Motorized";
				aliveCategory="Motorized";
				
				
				class aif_group_patrol
				{
					name = "Wheeled Patrol";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_TeamLeader";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_support_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_support_AT";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "aif_rifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "aif_armed";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};

				class aif_transport_group
				{
					name = "Troop Transport";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_TeamLeader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_support_MG";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_riflemanGL";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "aif_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "aif_riflemanAK103";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "aif_support_AT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "aif_riflemanGLM4";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "aif_specialist_Ex";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "aif_riflemanM4";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "aif_truck";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};

				class aif_group_technicals
				{
					name = "Armed Pick Up Patrol";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_armed";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_armed";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_offroad2";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized";
				aliveCategory="Mechanized";
				
				class aif_group_mechanized_squad
				{
					name = "BTR-60 Squad";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_TeamLeader";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_riflemanM4";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "aif_support_MG";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "aif_support_rpg26";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "aif_support_MG";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "aif_riflemanGLM4";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "aif_apc";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				

			};

			class Armored
			{
				name = "Armored";
				aliveCategory="Armored";

				class aif_group_T72_x2
				{
					name = "T-72b x2";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_t72b";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_t72b";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
				};

				class aif_group_T72_inf
				{
					name = "T-72b Infantry";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_TeamLeader";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_support_MG";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_support_AT";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "aif_rifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "aif_t72b";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};

				class aif_group_zu23
				{
					name = "ZU-23";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_zu234v";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};

				};
			};

			class Support
			{
				name = "Support";
				aliveCategory="Support";
				
				class aif_group_mortarteam
				{
					name = "Mortar Team";
					faction = "usml_aif";
					side=2;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 2;
						vehicle = "aif_mortar";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "aif_rifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "aif_UAV";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};


		};