# Generated by devtools/yamaker (pypi).

PY23_LIBRARY()



VERSION(2022.6)

LICENSE(MIT)

PEERDIR(
    contrib/python/setuptools
)

NO_LINT()

PY_SRCS(
    TOP_LEVEL
    pytz/__init__.py
    pytz/exceptions.py
    pytz/lazy.py
    pytz/reference.py
    pytz/tzfile.py
    pytz/tzinfo.py
)

RESOURCE_FILES(
    PREFIX contrib/python/pytz/
    .dist-info/METADATA
    .dist-info/top_level.txt
    pytz/zoneinfo/Africa/Abidjan
    pytz/zoneinfo/Africa/Accra
    pytz/zoneinfo/Africa/Addis_Ababa
    pytz/zoneinfo/Africa/Algiers
    pytz/zoneinfo/Africa/Asmara
    pytz/zoneinfo/Africa/Asmera
    pytz/zoneinfo/Africa/Bamako
    pytz/zoneinfo/Africa/Bangui
    pytz/zoneinfo/Africa/Banjul
    pytz/zoneinfo/Africa/Bissau
    pytz/zoneinfo/Africa/Blantyre
    pytz/zoneinfo/Africa/Brazzaville
    pytz/zoneinfo/Africa/Bujumbura
    pytz/zoneinfo/Africa/Cairo
    pytz/zoneinfo/Africa/Casablanca
    pytz/zoneinfo/Africa/Ceuta
    pytz/zoneinfo/Africa/Conakry
    pytz/zoneinfo/Africa/Dakar
    pytz/zoneinfo/Africa/Dar_es_Salaam
    pytz/zoneinfo/Africa/Djibouti
    pytz/zoneinfo/Africa/Douala
    pytz/zoneinfo/Africa/El_Aaiun
    pytz/zoneinfo/Africa/Freetown
    pytz/zoneinfo/Africa/Gaborone
    pytz/zoneinfo/Africa/Harare
    pytz/zoneinfo/Africa/Johannesburg
    pytz/zoneinfo/Africa/Juba
    pytz/zoneinfo/Africa/Kampala
    pytz/zoneinfo/Africa/Khartoum
    pytz/zoneinfo/Africa/Kigali
    pytz/zoneinfo/Africa/Kinshasa
    pytz/zoneinfo/Africa/Lagos
    pytz/zoneinfo/Africa/Libreville
    pytz/zoneinfo/Africa/Lome
    pytz/zoneinfo/Africa/Luanda
    pytz/zoneinfo/Africa/Lubumbashi
    pytz/zoneinfo/Africa/Lusaka
    pytz/zoneinfo/Africa/Malabo
    pytz/zoneinfo/Africa/Maputo
    pytz/zoneinfo/Africa/Maseru
    pytz/zoneinfo/Africa/Mbabane
    pytz/zoneinfo/Africa/Mogadishu
    pytz/zoneinfo/Africa/Monrovia
    pytz/zoneinfo/Africa/Nairobi
    pytz/zoneinfo/Africa/Ndjamena
    pytz/zoneinfo/Africa/Niamey
    pytz/zoneinfo/Africa/Nouakchott
    pytz/zoneinfo/Africa/Ouagadougou
    pytz/zoneinfo/Africa/Porto-Novo
    pytz/zoneinfo/Africa/Sao_Tome
    pytz/zoneinfo/Africa/Timbuktu
    pytz/zoneinfo/Africa/Tripoli
    pytz/zoneinfo/Africa/Tunis
    pytz/zoneinfo/Africa/Windhoek
    pytz/zoneinfo/America/Adak
    pytz/zoneinfo/America/Anchorage
    pytz/zoneinfo/America/Anguilla
    pytz/zoneinfo/America/Antigua
    pytz/zoneinfo/America/Araguaina
    pytz/zoneinfo/America/Argentina/Buenos_Aires
    pytz/zoneinfo/America/Argentina/Catamarca
    pytz/zoneinfo/America/Argentina/ComodRivadavia
    pytz/zoneinfo/America/Argentina/Cordoba
    pytz/zoneinfo/America/Argentina/Jujuy
    pytz/zoneinfo/America/Argentina/La_Rioja
    pytz/zoneinfo/America/Argentina/Mendoza
    pytz/zoneinfo/America/Argentina/Rio_Gallegos
    pytz/zoneinfo/America/Argentina/Salta
    pytz/zoneinfo/America/Argentina/San_Juan
    pytz/zoneinfo/America/Argentina/San_Luis
    pytz/zoneinfo/America/Argentina/Tucuman
    pytz/zoneinfo/America/Argentina/Ushuaia
    pytz/zoneinfo/America/Aruba
    pytz/zoneinfo/America/Asuncion
    pytz/zoneinfo/America/Atikokan
    pytz/zoneinfo/America/Atka
    pytz/zoneinfo/America/Bahia
    pytz/zoneinfo/America/Bahia_Banderas
    pytz/zoneinfo/America/Barbados
    pytz/zoneinfo/America/Belem
    pytz/zoneinfo/America/Belize
    pytz/zoneinfo/America/Blanc-Sablon
    pytz/zoneinfo/America/Boa_Vista
    pytz/zoneinfo/America/Bogota
    pytz/zoneinfo/America/Boise
    pytz/zoneinfo/America/Buenos_Aires
    pytz/zoneinfo/America/Cambridge_Bay
    pytz/zoneinfo/America/Campo_Grande
    pytz/zoneinfo/America/Cancun
    pytz/zoneinfo/America/Caracas
    pytz/zoneinfo/America/Catamarca
    pytz/zoneinfo/America/Cayenne
    pytz/zoneinfo/America/Cayman
    pytz/zoneinfo/America/Chicago
    pytz/zoneinfo/America/Chihuahua
    pytz/zoneinfo/America/Coral_Harbour
    pytz/zoneinfo/America/Cordoba
    pytz/zoneinfo/America/Costa_Rica
    pytz/zoneinfo/America/Creston
    pytz/zoneinfo/America/Cuiaba
    pytz/zoneinfo/America/Curacao
    pytz/zoneinfo/America/Danmarkshavn
    pytz/zoneinfo/America/Dawson
    pytz/zoneinfo/America/Dawson_Creek
    pytz/zoneinfo/America/Denver
    pytz/zoneinfo/America/Detroit
    pytz/zoneinfo/America/Dominica
    pytz/zoneinfo/America/Edmonton
    pytz/zoneinfo/America/Eirunepe
    pytz/zoneinfo/America/El_Salvador
    pytz/zoneinfo/America/Ensenada
    pytz/zoneinfo/America/Fort_Nelson
    pytz/zoneinfo/America/Fort_Wayne
    pytz/zoneinfo/America/Fortaleza
    pytz/zoneinfo/America/Glace_Bay
    pytz/zoneinfo/America/Godthab
    pytz/zoneinfo/America/Goose_Bay
    pytz/zoneinfo/America/Grand_Turk
    pytz/zoneinfo/America/Grenada
    pytz/zoneinfo/America/Guadeloupe
    pytz/zoneinfo/America/Guatemala
    pytz/zoneinfo/America/Guayaquil
    pytz/zoneinfo/America/Guyana
    pytz/zoneinfo/America/Halifax
    pytz/zoneinfo/America/Havana
    pytz/zoneinfo/America/Hermosillo
    pytz/zoneinfo/America/Indiana/Indianapolis
    pytz/zoneinfo/America/Indiana/Knox
    pytz/zoneinfo/America/Indiana/Marengo
    pytz/zoneinfo/America/Indiana/Petersburg
    pytz/zoneinfo/America/Indiana/Tell_City
    pytz/zoneinfo/America/Indiana/Vevay
    pytz/zoneinfo/America/Indiana/Vincennes
    pytz/zoneinfo/America/Indiana/Winamac
    pytz/zoneinfo/America/Indianapolis
    pytz/zoneinfo/America/Inuvik
    pytz/zoneinfo/America/Iqaluit
    pytz/zoneinfo/America/Jamaica
    pytz/zoneinfo/America/Jujuy
    pytz/zoneinfo/America/Juneau
    pytz/zoneinfo/America/Kentucky/Louisville
    pytz/zoneinfo/America/Kentucky/Monticello
    pytz/zoneinfo/America/Knox_IN
    pytz/zoneinfo/America/Kralendijk
    pytz/zoneinfo/America/La_Paz
    pytz/zoneinfo/America/Lima
    pytz/zoneinfo/America/Los_Angeles
    pytz/zoneinfo/America/Louisville
    pytz/zoneinfo/America/Lower_Princes
    pytz/zoneinfo/America/Maceio
    pytz/zoneinfo/America/Managua
    pytz/zoneinfo/America/Manaus
    pytz/zoneinfo/America/Marigot
    pytz/zoneinfo/America/Martinique
    pytz/zoneinfo/America/Matamoros
    pytz/zoneinfo/America/Mazatlan
    pytz/zoneinfo/America/Mendoza
    pytz/zoneinfo/America/Menominee
    pytz/zoneinfo/America/Merida
    pytz/zoneinfo/America/Metlakatla
    pytz/zoneinfo/America/Mexico_City
    pytz/zoneinfo/America/Miquelon
    pytz/zoneinfo/America/Moncton
    pytz/zoneinfo/America/Monterrey
    pytz/zoneinfo/America/Montevideo
    pytz/zoneinfo/America/Montreal
    pytz/zoneinfo/America/Montserrat
    pytz/zoneinfo/America/Nassau
    pytz/zoneinfo/America/New_York
    pytz/zoneinfo/America/Nipigon
    pytz/zoneinfo/America/Nome
    pytz/zoneinfo/America/Noronha
    pytz/zoneinfo/America/North_Dakota/Beulah
    pytz/zoneinfo/America/North_Dakota/Center
    pytz/zoneinfo/America/North_Dakota/New_Salem
    pytz/zoneinfo/America/Nuuk
    pytz/zoneinfo/America/Ojinaga
    pytz/zoneinfo/America/Panama
    pytz/zoneinfo/America/Pangnirtung
    pytz/zoneinfo/America/Paramaribo
    pytz/zoneinfo/America/Phoenix
    pytz/zoneinfo/America/Port-au-Prince
    pytz/zoneinfo/America/Port_of_Spain
    pytz/zoneinfo/America/Porto_Acre
    pytz/zoneinfo/America/Porto_Velho
    pytz/zoneinfo/America/Puerto_Rico
    pytz/zoneinfo/America/Punta_Arenas
    pytz/zoneinfo/America/Rainy_River
    pytz/zoneinfo/America/Rankin_Inlet
    pytz/zoneinfo/America/Recife
    pytz/zoneinfo/America/Regina
    pytz/zoneinfo/America/Resolute
    pytz/zoneinfo/America/Rio_Branco
    pytz/zoneinfo/America/Rosario
    pytz/zoneinfo/America/Santa_Isabel
    pytz/zoneinfo/America/Santarem
    pytz/zoneinfo/America/Santiago
    pytz/zoneinfo/America/Santo_Domingo
    pytz/zoneinfo/America/Sao_Paulo
    pytz/zoneinfo/America/Scoresbysund
    pytz/zoneinfo/America/Shiprock
    pytz/zoneinfo/America/Sitka
    pytz/zoneinfo/America/St_Barthelemy
    pytz/zoneinfo/America/St_Johns
    pytz/zoneinfo/America/St_Kitts
    pytz/zoneinfo/America/St_Lucia
    pytz/zoneinfo/America/St_Thomas
    pytz/zoneinfo/America/St_Vincent
    pytz/zoneinfo/America/Swift_Current
    pytz/zoneinfo/America/Tegucigalpa
    pytz/zoneinfo/America/Thule
    pytz/zoneinfo/America/Thunder_Bay
    pytz/zoneinfo/America/Tijuana
    pytz/zoneinfo/America/Toronto
    pytz/zoneinfo/America/Tortola
    pytz/zoneinfo/America/Vancouver
    pytz/zoneinfo/America/Virgin
    pytz/zoneinfo/America/Whitehorse
    pytz/zoneinfo/America/Winnipeg
    pytz/zoneinfo/America/Yakutat
    pytz/zoneinfo/America/Yellowknife
    pytz/zoneinfo/Antarctica/Casey
    pytz/zoneinfo/Antarctica/Davis
    pytz/zoneinfo/Antarctica/DumontDUrville
    pytz/zoneinfo/Antarctica/Macquarie
    pytz/zoneinfo/Antarctica/Mawson
    pytz/zoneinfo/Antarctica/McMurdo
    pytz/zoneinfo/Antarctica/Palmer
    pytz/zoneinfo/Antarctica/Rothera
    pytz/zoneinfo/Antarctica/South_Pole
    pytz/zoneinfo/Antarctica/Syowa
    pytz/zoneinfo/Antarctica/Troll
    pytz/zoneinfo/Antarctica/Vostok
    pytz/zoneinfo/Arctic/Longyearbyen
    pytz/zoneinfo/Asia/Aden
    pytz/zoneinfo/Asia/Almaty
    pytz/zoneinfo/Asia/Amman
    pytz/zoneinfo/Asia/Anadyr
    pytz/zoneinfo/Asia/Aqtau
    pytz/zoneinfo/Asia/Aqtobe
    pytz/zoneinfo/Asia/Ashgabat
    pytz/zoneinfo/Asia/Ashkhabad
    pytz/zoneinfo/Asia/Atyrau
    pytz/zoneinfo/Asia/Baghdad
    pytz/zoneinfo/Asia/Bahrain
    pytz/zoneinfo/Asia/Baku
    pytz/zoneinfo/Asia/Bangkok
    pytz/zoneinfo/Asia/Barnaul
    pytz/zoneinfo/Asia/Beirut
    pytz/zoneinfo/Asia/Bishkek
    pytz/zoneinfo/Asia/Brunei
    pytz/zoneinfo/Asia/Calcutta
    pytz/zoneinfo/Asia/Chita
    pytz/zoneinfo/Asia/Choibalsan
    pytz/zoneinfo/Asia/Chongqing
    pytz/zoneinfo/Asia/Chungking
    pytz/zoneinfo/Asia/Colombo
    pytz/zoneinfo/Asia/Dacca
    pytz/zoneinfo/Asia/Damascus
    pytz/zoneinfo/Asia/Dhaka
    pytz/zoneinfo/Asia/Dili
    pytz/zoneinfo/Asia/Dubai
    pytz/zoneinfo/Asia/Dushanbe
    pytz/zoneinfo/Asia/Famagusta
    pytz/zoneinfo/Asia/Gaza
    pytz/zoneinfo/Asia/Harbin
    pytz/zoneinfo/Asia/Hebron
    pytz/zoneinfo/Asia/Ho_Chi_Minh
    pytz/zoneinfo/Asia/Hong_Kong
    pytz/zoneinfo/Asia/Hovd
    pytz/zoneinfo/Asia/Irkutsk
    pytz/zoneinfo/Asia/Istanbul
    pytz/zoneinfo/Asia/Jakarta
    pytz/zoneinfo/Asia/Jayapura
    pytz/zoneinfo/Asia/Jerusalem
    pytz/zoneinfo/Asia/Kabul
    pytz/zoneinfo/Asia/Kamchatka
    pytz/zoneinfo/Asia/Karachi
    pytz/zoneinfo/Asia/Kashgar
    pytz/zoneinfo/Asia/Kathmandu
    pytz/zoneinfo/Asia/Katmandu
    pytz/zoneinfo/Asia/Khandyga
    pytz/zoneinfo/Asia/Kolkata
    pytz/zoneinfo/Asia/Krasnoyarsk
    pytz/zoneinfo/Asia/Kuala_Lumpur
    pytz/zoneinfo/Asia/Kuching
    pytz/zoneinfo/Asia/Kuwait
    pytz/zoneinfo/Asia/Macao
    pytz/zoneinfo/Asia/Macau
    pytz/zoneinfo/Asia/Magadan
    pytz/zoneinfo/Asia/Makassar
    pytz/zoneinfo/Asia/Manila
    pytz/zoneinfo/Asia/Muscat
    pytz/zoneinfo/Asia/Nicosia
    pytz/zoneinfo/Asia/Novokuznetsk
    pytz/zoneinfo/Asia/Novosibirsk
    pytz/zoneinfo/Asia/Omsk
    pytz/zoneinfo/Asia/Oral
    pytz/zoneinfo/Asia/Phnom_Penh
    pytz/zoneinfo/Asia/Pontianak
    pytz/zoneinfo/Asia/Pyongyang
    pytz/zoneinfo/Asia/Qatar
    pytz/zoneinfo/Asia/Qostanay
    pytz/zoneinfo/Asia/Qyzylorda
    pytz/zoneinfo/Asia/Rangoon
    pytz/zoneinfo/Asia/Riyadh
    pytz/zoneinfo/Asia/Saigon
    pytz/zoneinfo/Asia/Sakhalin
    pytz/zoneinfo/Asia/Samarkand
    pytz/zoneinfo/Asia/Seoul
    pytz/zoneinfo/Asia/Shanghai
    pytz/zoneinfo/Asia/Singapore
    pytz/zoneinfo/Asia/Srednekolymsk
    pytz/zoneinfo/Asia/Taipei
    pytz/zoneinfo/Asia/Tashkent
    pytz/zoneinfo/Asia/Tbilisi
    pytz/zoneinfo/Asia/Tehran
    pytz/zoneinfo/Asia/Tel_Aviv
    pytz/zoneinfo/Asia/Thimbu
    pytz/zoneinfo/Asia/Thimphu
    pytz/zoneinfo/Asia/Tokyo
    pytz/zoneinfo/Asia/Tomsk
    pytz/zoneinfo/Asia/Ujung_Pandang
    pytz/zoneinfo/Asia/Ulaanbaatar
    pytz/zoneinfo/Asia/Ulan_Bator
    pytz/zoneinfo/Asia/Urumqi
    pytz/zoneinfo/Asia/Ust-Nera
    pytz/zoneinfo/Asia/Vientiane
    pytz/zoneinfo/Asia/Vladivostok
    pytz/zoneinfo/Asia/Yakutsk
    pytz/zoneinfo/Asia/Yangon
    pytz/zoneinfo/Asia/Yekaterinburg
    pytz/zoneinfo/Asia/Yerevan
    pytz/zoneinfo/Atlantic/Azores
    pytz/zoneinfo/Atlantic/Bermuda
    pytz/zoneinfo/Atlantic/Canary
    pytz/zoneinfo/Atlantic/Cape_Verde
    pytz/zoneinfo/Atlantic/Faeroe
    pytz/zoneinfo/Atlantic/Faroe
    pytz/zoneinfo/Atlantic/Jan_Mayen
    pytz/zoneinfo/Atlantic/Madeira
    pytz/zoneinfo/Atlantic/Reykjavik
    pytz/zoneinfo/Atlantic/South_Georgia
    pytz/zoneinfo/Atlantic/St_Helena
    pytz/zoneinfo/Atlantic/Stanley
    pytz/zoneinfo/Australia/ACT
    pytz/zoneinfo/Australia/Adelaide
    pytz/zoneinfo/Australia/Brisbane
    pytz/zoneinfo/Australia/Broken_Hill
    pytz/zoneinfo/Australia/Canberra
    pytz/zoneinfo/Australia/Currie
    pytz/zoneinfo/Australia/Darwin
    pytz/zoneinfo/Australia/Eucla
    pytz/zoneinfo/Australia/Hobart
    pytz/zoneinfo/Australia/LHI
    pytz/zoneinfo/Australia/Lindeman
    pytz/zoneinfo/Australia/Lord_Howe
    pytz/zoneinfo/Australia/Melbourne
    pytz/zoneinfo/Australia/NSW
    pytz/zoneinfo/Australia/North
    pytz/zoneinfo/Australia/Perth
    pytz/zoneinfo/Australia/Queensland
    pytz/zoneinfo/Australia/South
    pytz/zoneinfo/Australia/Sydney
    pytz/zoneinfo/Australia/Tasmania
    pytz/zoneinfo/Australia/Victoria
    pytz/zoneinfo/Australia/West
    pytz/zoneinfo/Australia/Yancowinna
    pytz/zoneinfo/Brazil/Acre
    pytz/zoneinfo/Brazil/DeNoronha
    pytz/zoneinfo/Brazil/East
    pytz/zoneinfo/Brazil/West
    pytz/zoneinfo/CET
    pytz/zoneinfo/CST6CDT
    pytz/zoneinfo/Canada/Atlantic
    pytz/zoneinfo/Canada/Central
    pytz/zoneinfo/Canada/Eastern
    pytz/zoneinfo/Canada/Mountain
    pytz/zoneinfo/Canada/Newfoundland
    pytz/zoneinfo/Canada/Pacific
    pytz/zoneinfo/Canada/Saskatchewan
    pytz/zoneinfo/Canada/Yukon
    pytz/zoneinfo/Chile/Continental
    pytz/zoneinfo/Chile/EasterIsland
    pytz/zoneinfo/Cuba
    pytz/zoneinfo/EET
    pytz/zoneinfo/EST
    pytz/zoneinfo/EST5EDT
    pytz/zoneinfo/Egypt
    pytz/zoneinfo/Eire
    pytz/zoneinfo/Etc/GMT
    pytz/zoneinfo/Etc/GMT+0
    pytz/zoneinfo/Etc/GMT+1
    pytz/zoneinfo/Etc/GMT+10
    pytz/zoneinfo/Etc/GMT+11
    pytz/zoneinfo/Etc/GMT+12
    pytz/zoneinfo/Etc/GMT+2
    pytz/zoneinfo/Etc/GMT+3
    pytz/zoneinfo/Etc/GMT+4
    pytz/zoneinfo/Etc/GMT+5
    pytz/zoneinfo/Etc/GMT+6
    pytz/zoneinfo/Etc/GMT+7
    pytz/zoneinfo/Etc/GMT+8
    pytz/zoneinfo/Etc/GMT+9
    pytz/zoneinfo/Etc/GMT-0
    pytz/zoneinfo/Etc/GMT-1
    pytz/zoneinfo/Etc/GMT-10
    pytz/zoneinfo/Etc/GMT-11
    pytz/zoneinfo/Etc/GMT-12
    pytz/zoneinfo/Etc/GMT-13
    pytz/zoneinfo/Etc/GMT-14
    pytz/zoneinfo/Etc/GMT-2
    pytz/zoneinfo/Etc/GMT-3
    pytz/zoneinfo/Etc/GMT-4
    pytz/zoneinfo/Etc/GMT-5
    pytz/zoneinfo/Etc/GMT-6
    pytz/zoneinfo/Etc/GMT-7
    pytz/zoneinfo/Etc/GMT-8
    pytz/zoneinfo/Etc/GMT-9
    pytz/zoneinfo/Etc/GMT0
    pytz/zoneinfo/Etc/Greenwich
    pytz/zoneinfo/Etc/UCT
    pytz/zoneinfo/Etc/UTC
    pytz/zoneinfo/Etc/Universal
    pytz/zoneinfo/Etc/Zulu
    pytz/zoneinfo/Europe/Amsterdam
    pytz/zoneinfo/Europe/Andorra
    pytz/zoneinfo/Europe/Astrakhan
    pytz/zoneinfo/Europe/Athens
    pytz/zoneinfo/Europe/Belfast
    pytz/zoneinfo/Europe/Belgrade
    pytz/zoneinfo/Europe/Berlin
    pytz/zoneinfo/Europe/Bratislava
    pytz/zoneinfo/Europe/Brussels
    pytz/zoneinfo/Europe/Bucharest
    pytz/zoneinfo/Europe/Budapest
    pytz/zoneinfo/Europe/Busingen
    pytz/zoneinfo/Europe/Chisinau
    pytz/zoneinfo/Europe/Copenhagen
    pytz/zoneinfo/Europe/Dublin
    pytz/zoneinfo/Europe/Gibraltar
    pytz/zoneinfo/Europe/Guernsey
    pytz/zoneinfo/Europe/Helsinki
    pytz/zoneinfo/Europe/Isle_of_Man
    pytz/zoneinfo/Europe/Istanbul
    pytz/zoneinfo/Europe/Jersey
    pytz/zoneinfo/Europe/Kaliningrad
    pytz/zoneinfo/Europe/Kiev
    pytz/zoneinfo/Europe/Kirov
    pytz/zoneinfo/Europe/Kyiv
    pytz/zoneinfo/Europe/Lisbon
    pytz/zoneinfo/Europe/Ljubljana
    pytz/zoneinfo/Europe/London
    pytz/zoneinfo/Europe/Luxembourg
    pytz/zoneinfo/Europe/Madrid
    pytz/zoneinfo/Europe/Malta
    pytz/zoneinfo/Europe/Mariehamn
    pytz/zoneinfo/Europe/Minsk
    pytz/zoneinfo/Europe/Monaco
    pytz/zoneinfo/Europe/Moscow
    pytz/zoneinfo/Europe/Nicosia
    pytz/zoneinfo/Europe/Oslo
    pytz/zoneinfo/Europe/Paris
    pytz/zoneinfo/Europe/Podgorica
    pytz/zoneinfo/Europe/Prague
    pytz/zoneinfo/Europe/Riga
    pytz/zoneinfo/Europe/Rome
    pytz/zoneinfo/Europe/Samara
    pytz/zoneinfo/Europe/San_Marino
    pytz/zoneinfo/Europe/Sarajevo
    pytz/zoneinfo/Europe/Saratov
    pytz/zoneinfo/Europe/Simferopol
    pytz/zoneinfo/Europe/Skopje
    pytz/zoneinfo/Europe/Sofia
    pytz/zoneinfo/Europe/Stockholm
    pytz/zoneinfo/Europe/Tallinn
    pytz/zoneinfo/Europe/Tirane
    pytz/zoneinfo/Europe/Tiraspol
    pytz/zoneinfo/Europe/Ulyanovsk
    pytz/zoneinfo/Europe/Uzhgorod
    pytz/zoneinfo/Europe/Vaduz
    pytz/zoneinfo/Europe/Vatican
    pytz/zoneinfo/Europe/Vienna
    pytz/zoneinfo/Europe/Vilnius
    pytz/zoneinfo/Europe/Volgograd
    pytz/zoneinfo/Europe/Warsaw
    pytz/zoneinfo/Europe/Zagreb
    pytz/zoneinfo/Europe/Zaporozhye
    pytz/zoneinfo/Europe/Zurich
    pytz/zoneinfo/Factory
    pytz/zoneinfo/GB
    pytz/zoneinfo/GB-Eire
    pytz/zoneinfo/GMT
    pytz/zoneinfo/GMT+0
    pytz/zoneinfo/GMT-0
    pytz/zoneinfo/GMT0
    pytz/zoneinfo/Greenwich
    pytz/zoneinfo/HST
    pytz/zoneinfo/Hongkong
    pytz/zoneinfo/Iceland
    pytz/zoneinfo/Indian/Antananarivo
    pytz/zoneinfo/Indian/Chagos
    pytz/zoneinfo/Indian/Christmas
    pytz/zoneinfo/Indian/Cocos
    pytz/zoneinfo/Indian/Comoro
    pytz/zoneinfo/Indian/Kerguelen
    pytz/zoneinfo/Indian/Mahe
    pytz/zoneinfo/Indian/Maldives
    pytz/zoneinfo/Indian/Mauritius
    pytz/zoneinfo/Indian/Mayotte
    pytz/zoneinfo/Indian/Reunion
    pytz/zoneinfo/Iran
    pytz/zoneinfo/Israel
    pytz/zoneinfo/Jamaica
    pytz/zoneinfo/Japan
    pytz/zoneinfo/Kwajalein
    pytz/zoneinfo/Libya
    pytz/zoneinfo/MET
    pytz/zoneinfo/MST
    pytz/zoneinfo/MST7MDT
    pytz/zoneinfo/Mexico/BajaNorte
    pytz/zoneinfo/Mexico/BajaSur
    pytz/zoneinfo/Mexico/General
    pytz/zoneinfo/NZ
    pytz/zoneinfo/NZ-CHAT
    pytz/zoneinfo/Navajo
    pytz/zoneinfo/PRC
    pytz/zoneinfo/PST8PDT
    pytz/zoneinfo/Pacific/Apia
    pytz/zoneinfo/Pacific/Auckland
    pytz/zoneinfo/Pacific/Bougainville
    pytz/zoneinfo/Pacific/Chatham
    pytz/zoneinfo/Pacific/Chuuk
    pytz/zoneinfo/Pacific/Easter
    pytz/zoneinfo/Pacific/Efate
    pytz/zoneinfo/Pacific/Enderbury
    pytz/zoneinfo/Pacific/Fakaofo
    pytz/zoneinfo/Pacific/Fiji
    pytz/zoneinfo/Pacific/Funafuti
    pytz/zoneinfo/Pacific/Galapagos
    pytz/zoneinfo/Pacific/Gambier
    pytz/zoneinfo/Pacific/Guadalcanal
    pytz/zoneinfo/Pacific/Guam
    pytz/zoneinfo/Pacific/Honolulu
    pytz/zoneinfo/Pacific/Johnston
    pytz/zoneinfo/Pacific/Kanton
    pytz/zoneinfo/Pacific/Kiritimati
    pytz/zoneinfo/Pacific/Kosrae
    pytz/zoneinfo/Pacific/Kwajalein
    pytz/zoneinfo/Pacific/Majuro
    pytz/zoneinfo/Pacific/Marquesas
    pytz/zoneinfo/Pacific/Midway
    pytz/zoneinfo/Pacific/Nauru
    pytz/zoneinfo/Pacific/Niue
    pytz/zoneinfo/Pacific/Norfolk
    pytz/zoneinfo/Pacific/Noumea
    pytz/zoneinfo/Pacific/Pago_Pago
    pytz/zoneinfo/Pacific/Palau
    pytz/zoneinfo/Pacific/Pitcairn
    pytz/zoneinfo/Pacific/Pohnpei
    pytz/zoneinfo/Pacific/Ponape
    pytz/zoneinfo/Pacific/Port_Moresby
    pytz/zoneinfo/Pacific/Rarotonga
    pytz/zoneinfo/Pacific/Saipan
    pytz/zoneinfo/Pacific/Samoa
    pytz/zoneinfo/Pacific/Tahiti
    pytz/zoneinfo/Pacific/Tarawa
    pytz/zoneinfo/Pacific/Tongatapu
    pytz/zoneinfo/Pacific/Truk
    pytz/zoneinfo/Pacific/Wake
    pytz/zoneinfo/Pacific/Wallis
    pytz/zoneinfo/Pacific/Yap
    pytz/zoneinfo/Poland
    pytz/zoneinfo/Portugal
    pytz/zoneinfo/ROC
    pytz/zoneinfo/ROK
    pytz/zoneinfo/Singapore
    pytz/zoneinfo/Turkey
    pytz/zoneinfo/UCT
    pytz/zoneinfo/US/Alaska
    pytz/zoneinfo/US/Aleutian
    pytz/zoneinfo/US/Arizona
    pytz/zoneinfo/US/Central
    pytz/zoneinfo/US/East-Indiana
    pytz/zoneinfo/US/Eastern
    pytz/zoneinfo/US/Hawaii
    pytz/zoneinfo/US/Indiana-Starke
    pytz/zoneinfo/US/Michigan
    pytz/zoneinfo/US/Mountain
    pytz/zoneinfo/US/Pacific
    pytz/zoneinfo/US/Samoa
    pytz/zoneinfo/UTC
    pytz/zoneinfo/Universal
    pytz/zoneinfo/W-SU
    pytz/zoneinfo/WET
    pytz/zoneinfo/Zulu
    pytz/zoneinfo/iso3166.tab
    pytz/zoneinfo/leapseconds
    pytz/zoneinfo/tzdata.zi
    pytz/zoneinfo/zone.tab
    pytz/zoneinfo/zone1970.tab
)

END()

RECURSE_FOR_TESTS(
    tests
)
