////////////////////////////////////////////////////////////////////////////////
/// slamdefs.h
///
/// Definitions of Data structures etc. of the slam library. All
/// units in mm an degree. The initialization
/// void fills all important data into the structs.
////////////////////////////////////////////////////////////////////////////////

#ifndef SLAMDEFS_H
#define SLAMDEFS_H

#include "main.h"
#include "xv11.h"

//Sensordata
#define WHEELDIST	260 //Distance between two wheels
#define WHEELRADIUS	26
#define TICKSPERREV	360

#define LASERSCAN_ANGLE		360 //degree
#define LASERSCAN_POINTS	360 //Amount of scans per LASERSCAN_ANGLE ->_POINTS/_ANGLE = (HAS TO BE A NATURAL NUMBER!!!!) resolution of Laserscanner
#define LASERSCAN_OFFSET	270 //Orientation of the lidar on the robot (where is the scan showing to the front?)

#define ODOMETER_TICKS_PER_REV	360 //Odometer ticks per revolution
#define WHEEL_RADIUS			26 //In mm

//Map
#define MAP_SIZE_X_MM			3000
#define MAP_SIZE_Y_MM			3000
#define MAP_SIZE_Z_LAYERS		1		//Amount of layers of the map
#define MAP_RESOLUTION_MM		15

#define MAP_VAR_MAX			255 //Overflow of map pixel
#define MAP_VAR_MIN			0 //Underflow of map pixel

#define IS_OBSTACLE			255 //Obstacle with 100% certainty
#define NO_OBSTACLE			0 //Obstacle with 0% certainty

//Coordinates: location in room (x, y, z)
typedef struct {
	float x;
	float y;
	int8_t z;
} slam_coordinates_t;

// Position: coordinates and orientation (angle (psi))
typedef struct {
	slam_coordinates_t coord;
	float psi;
} slam_position_t;

//Datastruct: (Pointer to) all relevant sensor/hardware information of the robot
typedef struct {
	int32_t *odo_l; //Odometer left
	int32_t *odo_r; //Odometer right
	int32_t odo_l_old; //Last odometer value after call of slam_processMovement
	int32_t odo_r_old;	//"
	XV11_t *xv11; //Pointer to xv11 struct
} slam_sensordata_t;

typedef u8 slam_map_pixel_t;

//Raw Map
typedef struct {
	slam_map_pixel_t px[MAP_SIZE_X_MM / MAP_RESOLUTION_MM][MAP_SIZE_Y_MM / MAP_RESOLUTION_MM][MAP_SIZE_Z_LAYERS];
} slam_map_t;

//Container of all SLAM information:
typedef struct {
	slam_position_t robot_pos;
	slam_sensordata_t sensordata;
	slam_map_t map;
} slam_t;

int slam_monteCarloSearch(slam_t *slam, int sigma_xy, int sigma_psi, int stop);

//Initialization of all relevant SLAM information
extern void slam_init(slam_t *slam,
					  int16_t rob_x_start, int16_t rob_y_start, u8 rob_z_start, int16_t rob_psi_start,
					  XV11_t *xv11, int32_t *odo_l, int32_t *odo_r);

//Bases on ts_map_laser_ray
extern void slam_laserRayToMap(slam_t *slam,
							   int x1, int y1, int x2, int y2, int xp, int yp,
							   int value, int alpha);

extern void slam_map_update(slam_t *slam, int quality, int hole_width);

extern int slam_distanceScanToMap(slam_t *slam, slam_position_t *position);

extern void slam_processMovement(slam_t *slam);

#endif
