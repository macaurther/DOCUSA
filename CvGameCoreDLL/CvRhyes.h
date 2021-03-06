//Rhye
#ifndef CVRHYES_H
#define CVRHYES_H

using namespace std;
typedef list<char*> LISTCHAR;

// rhyes.h
#define EARTH_X					(150)
#define EARTH_Y					(80)

#define MAX_COM_SHRINE			(20)

#define BEGIN_WONDERS				(114) // increment if normal building (not for wonders) is added
#define BEGIN_GREAT_WONDERS			(BEGIN_WONDERS+13) // increment if a national wonder is added

#define NUM_MAJOR_PLAYERS		(18)
#define NUM_MINORS				(4)	 // Independent, Independent2, Natives, Barbarians
#define NUM_CIVS				(22)

#define NUM_ERAS				(ERA_INFORMATION+1)

#define PAGAN_TEMPLE			((BuildingTypes)GC.getInfoTypeForString("BUILDING_PAGAN_TEMPLE"))
#define BUILDING_PALACE			((BuildingClassTypes)0)
#define BUILDING_PLAGUE			((BuildingTypes)GC.getInfoTypeForString("BUILDING_PLAGUE"))

#define UNITCLASS_SLAVE			((UnitClassTypes)GC.getInfoTypeForString("UNITCLASS_SLAVE"))

enum DoCTechs
{
	TANNING,
	MINING,
	POTTERY,
	SAILING,
	AGRICULTURE,
	MYTHOLOGY,
	PASTORALISM,

	ALLOYS,
	STEEL,
	RIDING,
	NAVIGATION,
	WRITING,
	PHILOSOPHY,
	PROPERTY,

	GUNPOWDER,
	COMPANIES,
	FINANCE,
	CARTOGRAPHY,
	HUMANITIES,
	PRINTING,
	JUDICIARY,

	FIREARMS,
	CHARTER,
	EXPLORATION,
	OPTICS,
	ACADEMIA,
	COLONIZATION,

	FORTIFICATION,
	LOGISITICS,
	TRIANGULAR_TRADE,
	URBAN_PLANNING,
	STATECRAFT,
	HORTICULTURE,

	ECONOMICS,
	GEOGRAPHY,
	SCIENTIFIC_METHOD,
	REPRESENTATION,
	CIVIL_LIBERTIES,
	HERITAGE,

	TACTICS,
	REPLACEABLE_PARTS,
	PHYSICS,
	MEASUREMENT,
	POSTAL_SERVICE,
	INDEPENDENCE,
	SOCIAL_CONTRACT,

	CURRENCY,
	MEDICINE,
	GEOLOGY,
	PARTIES,
	SOCIOLOGY,
	FEDERALISM,

	MANIFEST_DESTINY,
	ENGINEERING,
	CHEMISTRY,
	TRANSCENDENTALISM,

	ELECTRICITY,
	BIOLOGY,
	NATIONALISM,

	HYDRAULICS,
	RAILROAD,
	TELEGRAPH,
	NATIVISM,

	MACHINE_TOOLS,
	THEMODYNAMICS,
	METALLURGY,

	BALLISTICS,
	ENGINE,
	INDUSTRIALISM,
	REFRIGERATION,
	LABOR_UNIONS,
	JOURNALISM,

	PNEUMATICS,
	ASSEMBLY_LINE,
	REFINING,
	FILM,
	MICROBIOLOGY,
	CONSUMERISM,
	CONSERVATION,

	COMBINED_ARMS,
	FLIGHT,
	HYDRAULIC_CEMENT,
	RADIO,
	PSYCHOLOGY,
	YELLOW_JOURNALISM,

	INFRASTRUCTURE,
	NACA,
	SYNTHETICS,
	SKYSCRAPERS,
	NATIONAL_MILITARY_ESTABLISHMENT,
	EXCEPTIONALISM,

	AVIATION,
	MILITARY_INDUSTRIAL_COMPLEX,
	PUBLIC_HEALTH,
	MACROECONOMICS,
	SOCIAL_SERVICES,

	RADAR,
	ROCKETRY,
	FISSION,
	ELECTRONICS,
	TELEVISION,
	POWER_PROJECTION,
	CIVIL_RIGHTS,

	NASA,
	NUCLEAR_POWER,
	GLOBALISM,
	SENSATIONALISM,

	AERODYNAMICS,
	SPACEFLIGHT,
	LASER,
	COMPUTERS,
	TOURISM,
	ECOLOGY,

	SATELLITES,
	SUPERCONDUCTORS,
	ROBOTICS,
	TELECOMMUNICATIONS,
	RENEWABLE_ENERGY,
	GENETICS,

	SOCIAL_PROGRAMS,
};

enum DoCBuildings
{
	TRADING_COMPANY = BEGIN_WONDERS,
	IBERIAN_TRADING_COMPANY, 
	NATIONAL_MONUMENT, 
	NATIONAL_THEATRE, 
	NATIONAL_GALLERY, 
	NATIONAL_COLLEGE, 
	MILITARY_ACADEMY,
	SECRET_SERVICE, 

	IRONWORKS, 
	RED_CROSS, 
	NATIONAL_PARK, 
	CENTRAL_BANK, 
	SPACEPORT, 
	MOUNT_VERNON, 
	MONTICELLO, 
	CAPE_HATTERAS_LIGHTHOUSE, 
	FORT_MCHENRY, 

	WEST_POINT, 
	SLATER_MILL, 
	RAINBOW_ROW, 
	HARVARD, 
	PRINCETON, 
	CAPITOL, 
	WHITE_HOUSE, 
	INDEPENDENCE_HALL,
	STATUE_OF_LIBERTY, 
	TRIUMPHAL_ARCH, 

	MENLO_PARK, 
	BROOKLYN_BRIDGE, 
	HOLLYWOOD, 
	EMPIRE_STATE_BUILDING,
	PALACE_OF_NATIONS, 
	GOLDEN_GATE_BRIDGE, 
	GRACELAND, 
	CN_TOWER, 
	PENTAGON, 
	UNITED_NATIONS, 

	CRYSTAL_CATHEDRAL, 
	WORLD_TRADE_CENTER, 
	HUBBLE_SPACE_TELESCOPE,
	SPACE_ELEVATOR, 
	LARGE_HADRON_COLLIDER, 
	ITER
};

enum DoCEras
{
	ERA_PRE_COLUMBIAN,
	ERA_EXPLORATION,
	ERA_COLONIAL,
	ERA_REVOLUTIONARY,
	ERA_EXPANSION,
	ERA_INDUSTRIAL,
	ERA_MODERN,
	ERA_ATOMIC,
	ERA_INFORMATION,
};

enum Regions
{
	REGION_VIRGINIA,
	REGION_MASSACHUSETTS,
	REGION_NEW_HAMPSHIRE,
	REGION_MARYLAND,
	REGION_CONNECTICUT,
	REGION_RHODE_ISLAND,
	REGION_NORTH_CAROLINA,
	REGION_SOUTH_CAROLINA,
	REGION_NEW_JERSEY,
	REGION_NEW_YORK,
	REGION_PENNSYLVANIA,
	REGION_DELAWARE,
	REGION_GEORGIA,
	REGION_VERMONT,
	REGION_KENTUCKY,
	REGION_TENNESSEE,
	REGION_OHIO,
	REGION_LOUISIANA,
	REGION_INDIANA,
	REGION_MISSISSIPPI,
	REGION_ILLINOIS,
	REGION_ALABAMA,
	REGION_MAINE,
	REGION_MISSOURI,
	REGION_ARKANSAS,
	REGION_MICHIGAN,
	REGION_FLORIDA,
	REGION_TEXAS,
	REGION_IOWA,
	REGION_WISCONSIN,
	REGION_CALIFORNIA,
	REGION_MINNESOTA,
	REGION_OREGON,
	REGION_KANSAS,
	REGION_WEST_VIRGINIA,
	REGION_NEVADA,
	REGION_NEBRASKA,
	REGION_COLORADO,
	REGION_NORTH_DAKOTA,
	REGION_SOUTH_DAKOTA,
	REGION_MONTANA,
	REGION_WASHINGTON,
	REGION_IDAHO,
	REGION_WYOMING,
	REGION_UTAH,
	REGION_OKLAHOMA,
	REGION_NEW_MEXICO,
	REGION_ARIZONA,
	NUM_REGIONS
};

enum ECSArtStyles
{
	ARTSTYLE_AFRICA,
	ARTSTYLE_ANGLO_AMERICA,
	ARTSTYLE_ARABIA,
	ARTSTYLE_ASIA,
	ARTSTYLE_BARBARIAN,
	ARTSTYLE_CRESCENT,
	ARTSTYLE_EGYPT,
	ARTSTYLE_EUROPE,
	ARTSTYLE_GRECO_ROMAN,
	ARTSTYLE_INDIA,
	ARTSTYLE_IBERIA,
	ARTSTYLE_JAPAN,
	ARTSTYLE_MESO_AMERICA,
	ARTSTYLE_MONGOLIA,
	ARTSTYLE_NATIVE_AMERICA,
	ARTSTYLE_NORSE,
	ARTSTYLE_RUSSIA,
	ARTSTYLE_SOUTH_AMERICA,
	ARTSTYLE_SOUTH_EAST_ASIA,
	ARTSTYLE_SOUTH_PACIFIC,
};

#endif	// CVRHYES_H

static const int lTechLeaderPenalty[NUM_ERAS] = {0, 0, 20, 25, 30, 40, 50};
static const int lTechBackwardsBonus[NUM_ERAS] = {0, 20, 30, 40, 50, 60, 75};

// Leoreth: order of persecution
static const int persecutionOrder[NUM_RELIGIONS][NUM_RELIGIONS-1] = 
{
	// Judaism
	{ORTHODOXY, CATHOLICISM, ANGLICANISM, PURITANISM, BAPTISM, METHODISM, MORMONISM},
	// Orthodoxy
	{JUDAISM, CATHOLICISM, ANGLICANISM, PURITANISM, BAPTISM, METHODISM, MORMONISM},
	// Catholicism
	{JUDAISM, MORMONISM, ORTHODOXY, ANGLICANISM, PURITANISM, BAPTISM, METHODISM},
	// Anglicanism
	{JUDAISM, MORMONISM, CATHOLICISM, ORTHODOXY, PURITANISM, BAPTISM, METHODISM},
	// Puritanism
	{JUDAISM, MORMONISM, CATHOLICISM, ORTHODOXY, ANGLICANISM, BAPTISM, METHODISM},
	// Baptism
	{JUDAISM, MORMONISM, CATHOLICISM, ORTHODOXY, ANGLICANISM, PURITANISM, METHODISM},
	// Methodism
	{JUDAISM, MORMONISM, CATHOLICISM, ORTHODOXY, ANGLICANISM, PURITANISM, BAPTISM},
	// Mormonism
	{JUDAISM, CATHOLICISM, ORTHODOXY, ANGLICANISM, PURITANISM, BAPTISM, METHODISM},
};

// Leoreth: persecution priority
static const int persecutionValue[NUM_RELIGIONS][NUM_RELIGIONS] =
{
	// JUD ORT CAT ANG PUR BAP MET MOR 
	{  -1,  1,  1,  0,  0,  0,  0,  1, }, // Judaism
	{   1, -1,  2,  1,  1,  1,  1,  1, }, // Orthodoxy
	{   2,  2, -1,  2,  1,  1,  1,  1, }, // Catholicism
	{   2,  1,  4, -1,  2,  0,  0,  1, }, // Anglicanism
	{   2,  2,  2,  2, -1,  0,  0,  1, }, // Puritanism
	{   3,  1,  2,  0,  0, -1,  0,  4, }, // Baptism
	{   2,  0,  1,  1,  4,  0, -1,  4, }, // Methodism
	{   3,  1,  2,  0,  0,  1,  1, -1, }, // Mormonism
};