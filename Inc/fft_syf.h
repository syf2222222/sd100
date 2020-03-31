




#ifndef __FFT_SYF_H
#define __FFT_SYF_H

#include "mydefine.h"

/////*���帴������*/
//typedef struct {
//	double r;// real;
//	double i;// img;
//}complex;

//typedef  struct complex_struct complex;


#define size_x	1024	 /*�������еĴ�С���ڱ������н���2�Ĵ���*/
#define size_h	(size_x/2)	 /*�������еĴ�С���ڱ������н���2�Ĵ���*/

#if(size_x==64)
const complex W[32] = {
{1.000000,0.000000},{0.995185,0.098017},{0.980785,0.195090},{0.956940,0.290285},{0.923880,0.382683},{0.881921,0.471397},{0.831470,0.555570},{0.773010,0.634393},
{0.707107,0.707107},{0.634393,0.773010},{0.555570,0.831470},{0.471397,0.881921},{0.382683,0.923880},{0.290285,0.956940},{0.195090,0.980785},{0.098017,0.995185},
{0.000000,1.000000},{-0.098017,0.995185},{-0.195090,0.980785},{-0.290285,0.956940},{-0.382683,0.923880},{-0.471397,0.881921},{-0.555570,0.831470},{-0.634393,0.773010},
{-0.707107,0.707107},{-0.773010,0.634393},{-0.831470,0.555570},{-0.881921,0.471397},{-0.923880,0.382683},{-0.956940,0.290285},{-0.980785,0.195090},{-0.995185,0.098017},
};
#endif

#if(size_x==256)
const complex W[128] = {
{1.000000,0.000000},{0.999699,0.024541},{0.998795,0.049068},{0.997290,0.073565},{0.995185,0.098017},{0.992480,0.122411},{0.989177,0.146730},{0.985278,0.170962},
{0.980785,0.195090},{0.975702,0.219101},{0.970031,0.242980},{0.963776,0.266713},{0.956940,0.290285},{0.949528,0.313682},{0.941544,0.336890},{0.932993,0.359895},
{0.923880,0.382683},{0.914210,0.405241},{0.903989,0.427555},{0.893224,0.449611},{0.881921,0.471397},{0.870087,0.492898},{0.857729,0.514103},{0.844854,0.534998},
{0.831470,0.555570},{0.817585,0.575808},{0.803208,0.595699},{0.788346,0.615232},{0.773010,0.634393},{0.757209,0.653173},{0.740951,0.671559},{0.724247,0.689541},
{0.707107,0.707107},{0.689541,0.724247},{0.671559,0.740951},{0.653173,0.757209},{0.634393,0.773010},{0.615232,0.788346},{0.595699,0.803208},{0.575808,0.817585},
{0.555570,0.831470},{0.534998,0.844854},{0.514103,0.857729},{0.492898,0.870087},{0.471397,0.881921},{0.449611,0.893224},{0.427555,0.903989},{0.405241,0.914210},
{0.382683,0.923880},{0.359895,0.932993},{0.336890,0.941544},{0.313682,0.949528},{0.290285,0.956940},{0.266713,0.963776},{0.242980,0.970031},{0.219101,0.975702},
{0.195090,0.980785},{0.170962,0.985278},{0.146730,0.989177},{0.122411,0.992480},{0.098017,0.995185},{0.073565,0.997290},{0.049068,0.998795},{0.024541,0.999699},
{0.000000,1.000000},{-0.024541,0.999699},{-0.049068,0.998795},{-0.073565,0.997290},{-0.098017,0.995185},{-0.122411,0.992480},{-0.146730,0.989177},{-0.170962,0.985278},
{-0.195090,0.980785},{-0.219101,0.975702},{-0.242980,0.970031},{-0.266713,0.963776},{-0.290285,0.956940},{-0.313682,0.949528},{-0.336890,0.941544},{-0.359895,0.932993},
{-0.382683,0.923880},{-0.405241,0.914210},{-0.427555,0.903989},{-0.449611,0.893224},{-0.471397,0.881921},{-0.492898,0.870087},{-0.514103,0.857729},{-0.534998,0.844854},
{-0.555570,0.831470},{-0.575808,0.817585},{-0.595699,0.803208},{-0.615232,0.788346},{-0.634393,0.773010},{-0.653173,0.757209},{-0.671559,0.740951},{-0.689541,0.724247},
{-0.707107,0.707107},{-0.724247,0.689541},{-0.740951,0.671559},{-0.757209,0.653173},{-0.773010,0.634393},{-0.788346,0.615232},{-0.803208,0.595699},{-0.817585,0.575808},
{-0.831470,0.555570},{-0.844854,0.534998},{-0.857729,0.514103},{-0.870087,0.492898},{-0.881921,0.471397},{-0.893224,0.449611},{-0.903989,0.427555},{-0.914210,0.405241},
{-0.923880,0.382683},{-0.932993,0.359895},{-0.941544,0.336890},{-0.949528,0.313682},{-0.956940,0.290285},{-0.963776,0.266713},{-0.970031,0.242980},{-0.975702,0.219101},
{-0.980785,0.195090},{-0.985278,0.170962},{-0.989177,0.146730},{-0.992480,0.122411},{-0.995185,0.098017},{-0.997290,0.073565},{-0.998795,0.049068},{-0.999699,0.024541},
};
#endif

#if(size_x==1024)
const  complex W[512] = {
{1.000000,0.000000},{0.999981,0.006136},{0.999925,0.012272},{0.999831,0.018407},{0.999699,0.024541},{0.999529,0.030675},{0.999322,0.036807},{0.999078,0.042938},
{0.998795,0.049068},{0.998476,0.055195},{0.998118,0.061321},{0.997723,0.067444},{0.997290,0.073565},{0.996820,0.079682},{0.996313,0.085797},{0.995767,0.091909},
{0.995185,0.098017},{0.994565,0.104122},{0.993907,0.110222},{0.993212,0.116319},{0.992480,0.122411},{0.991710,0.128498},{0.990903,0.134581},{0.990058,0.140658},
{0.989177,0.146730},{0.988258,0.152797},{0.987301,0.158858},{0.986308,0.164913},{0.985278,0.170962},{0.984210,0.177004},{0.983105,0.183040},{0.981964,0.189069},
{0.980785,0.195090},{0.979570,0.201105},{0.978317,0.207111},{0.977028,0.213110},{0.975702,0.219101},{0.974339,0.225084},{0.972940,0.231058},{0.971504,0.237024},
{0.970031,0.242980},{0.968522,0.248928},{0.966976,0.254866},{0.965394,0.260794},{0.963776,0.266713},{0.962121,0.272621},{0.960431,0.278520},{0.958703,0.284408},
{0.956940,0.290285},{0.955141,0.296151},{0.953306,0.302006},{0.951435,0.307850},{0.949528,0.313682},{0.947586,0.319502},{0.945607,0.325310},{0.943593,0.331106},
{0.941544,0.336890},{0.939459,0.342661},{0.937339,0.348419},{0.935184,0.354164},{0.932993,0.359895},{0.930767,0.365613},{0.928506,0.371317},{0.926210,0.377007},
{0.923880,0.382683},{0.921514,0.388345},{0.919114,0.393992},{0.916679,0.399624},{0.914210,0.405241},{0.911706,0.410843},{0.909168,0.416430},{0.906596,0.422000},
{0.903989,0.427555},{0.901349,0.433094},{0.898674,0.438616},{0.895966,0.444122},{0.893224,0.449611},{0.890449,0.455084},{0.887640,0.460539},{0.884797,0.465976},
{0.881921,0.471397},{0.879012,0.476799},{0.876070,0.482184},{0.873095,0.487550},{0.870087,0.492898},{0.867046,0.498228},{0.863973,0.503538},{0.860867,0.508830},
{0.857729,0.514103},{0.854558,0.519356},{0.851355,0.524590},{0.848120,0.529804},{0.844854,0.534998},{0.841555,0.540171},{0.838225,0.545325},{0.834863,0.550458},
{0.831470,0.555570},{0.828045,0.560662},{0.824589,0.565732},{0.821103,0.570781},{0.817585,0.575808},{0.814036,0.580814},{0.810457,0.585798},{0.806848,0.590760},
{0.803208,0.595699},{0.799537,0.600616},{0.795837,0.605511},{0.792107,0.610383},{0.788346,0.615232},{0.784557,0.620057},{0.780737,0.624859},{0.776888,0.629638},
{0.773010,0.634393},{0.769103,0.639124},{0.765167,0.643832},{0.761202,0.648514},{0.757209,0.653173},{0.753187,0.657807},{0.749136,0.662416},{0.745058,0.667000},
{0.740951,0.671559},{0.736817,0.676093},{0.732654,0.680601},{0.728464,0.685084},{0.724247,0.689541},{0.720003,0.693971},{0.715731,0.698376},{0.711432,0.702755},
{0.707107,0.707107},{0.702755,0.711432},{0.698376,0.715731},{0.693971,0.720003},{0.689541,0.724247},{0.685084,0.728464},{0.680601,0.732654},{0.676093,0.736817},
{0.671559,0.740951},{0.667000,0.745058},{0.662416,0.749136},{0.657807,0.753187},{0.653173,0.757209},{0.648514,0.761202},{0.643832,0.765167},{0.639124,0.769103},
{0.634393,0.773010},{0.629638,0.776888},{0.624859,0.780737},{0.620057,0.784557},{0.615232,0.788346},{0.610383,0.792107},{0.605511,0.795837},{0.600616,0.799537},
{0.595699,0.803208},{0.590760,0.806848},{0.585798,0.810457},{0.580814,0.814036},{0.575808,0.817585},{0.570781,0.821103},{0.565732,0.824589},{0.560662,0.828045},
{0.555570,0.831470},{0.550458,0.834863},{0.545325,0.838225},{0.540171,0.841555},{0.534998,0.844854},{0.529804,0.848120},{0.524590,0.851355},{0.519356,0.854558},
{0.514103,0.857729},{0.508830,0.860867},{0.503538,0.863973},{0.498228,0.867046},{0.492898,0.870087},{0.487550,0.873095},{0.482184,0.876070},{0.476799,0.879012},
{0.471397,0.881921},{0.465976,0.884797},{0.460539,0.887640},{0.455084,0.890449},{0.449611,0.893224},{0.444122,0.895966},{0.438616,0.898674},{0.433094,0.901349},
{0.427555,0.903989},{0.422000,0.906596},{0.416430,0.909168},{0.410843,0.911706},{0.405241,0.914210},{0.399624,0.916679},{0.393992,0.919114},{0.388345,0.921514},
{0.382683,0.923880},{0.377007,0.926210},{0.371317,0.928506},{0.365613,0.930767},{0.359895,0.932993},{0.354164,0.935184},{0.348419,0.937339},{0.342661,0.939459},
{0.336890,0.941544},{0.331106,0.943593},{0.325310,0.945607},{0.319502,0.947586},{0.313682,0.949528},{0.307850,0.951435},{0.302006,0.953306},{0.296151,0.955141},
{0.290285,0.956940},{0.284408,0.958703},{0.278520,0.960431},{0.272621,0.962121},{0.266713,0.963776},{0.260794,0.965394},{0.254866,0.966976},{0.248928,0.968522},
{0.242980,0.970031},{0.237024,0.971504},{0.231058,0.972940},{0.225084,0.974339},{0.219101,0.975702},{0.213110,0.977028},{0.207111,0.978317},{0.201105,0.979570},
{0.195090,0.980785},{0.189069,0.981964},{0.183040,0.983105},{0.177004,0.984210},{0.170962,0.985278},{0.164913,0.986308},{0.158858,0.987301},{0.152797,0.988258},
{0.146730,0.989177},{0.140658,0.990058},{0.134581,0.990903},{0.128498,0.991710},{0.122411,0.992480},{0.116319,0.993212},{0.110222,0.993907},{0.104122,0.994565},
{0.098017,0.995185},{0.091909,0.995767},{0.085797,0.996313},{0.079682,0.996820},{0.073565,0.997290},{0.067444,0.997723},{0.061321,0.998118},{0.055195,0.998476},
{0.049068,0.998795},{0.042938,0.999078},{0.036807,0.999322},{0.030675,0.999529},{0.024541,0.999699},{0.018407,0.999831},{0.012272,0.999925},{0.006136,0.999981},
{0.000000,1.000000},{-0.006136,0.999981},{-0.012272,0.999925},{-0.018407,0.999831},{-0.024541,0.999699},{-0.030675,0.999529},{-0.036807,0.999322},{-0.042938,0.999078},
{-0.049068,0.998795},{-0.055195,0.998476},{-0.061321,0.998118},{-0.067444,0.997723},{-0.073565,0.997290},{-0.079682,0.996820},{-0.085797,0.996313},{-0.091909,0.995767},
{-0.098017,0.995185},{-0.104122,0.994565},{-0.110222,0.993907},{-0.116319,0.993212},{-0.122411,0.992480},{-0.128498,0.991710},{-0.134581,0.990903},{-0.140658,0.990058},
{-0.146730,0.989177},{-0.152797,0.988258},{-0.158858,0.987301},{-0.164913,0.986308},{-0.170962,0.985278},{-0.177004,0.984210},{-0.183040,0.983105},{-0.189069,0.981964},
{-0.195090,0.980785},{-0.201105,0.979570},{-0.207111,0.978317},{-0.213110,0.977028},{-0.219101,0.975702},{-0.225084,0.974339},{-0.231058,0.972940},{-0.237024,0.971504},
{-0.242980,0.970031},{-0.248928,0.968522},{-0.254866,0.966976},{-0.260794,0.965394},{-0.266713,0.963776},{-0.272621,0.962121},{-0.278520,0.960431},{-0.284408,0.958703},
{-0.290285,0.956940},{-0.296151,0.955141},{-0.302006,0.953306},{-0.307850,0.951435},{-0.313682,0.949528},{-0.319502,0.947586},{-0.325310,0.945607},{-0.331106,0.943593},
{-0.336890,0.941544},{-0.342661,0.939459},{-0.348419,0.937339},{-0.354164,0.935184},{-0.359895,0.932993},{-0.365613,0.930767},{-0.371317,0.928506},{-0.377007,0.926210},
{-0.382683,0.923880},{-0.388345,0.921514},{-0.393992,0.919114},{-0.399624,0.916679},{-0.405241,0.914210},{-0.410843,0.911706},{-0.416430,0.909168},{-0.422000,0.906596},
{-0.427555,0.903989},{-0.433094,0.901349},{-0.438616,0.898674},{-0.444122,0.895966},{-0.449611,0.893224},{-0.455084,0.890449},{-0.460539,0.887640},{-0.465976,0.884797},
{-0.471397,0.881921},{-0.476799,0.879012},{-0.482184,0.876070},{-0.487550,0.873095},{-0.492898,0.870087},{-0.498228,0.867046},{-0.503538,0.863973},{-0.508830,0.860867},
{-0.514103,0.857729},{-0.519356,0.854558},{-0.524590,0.851355},{-0.529804,0.848120},{-0.534998,0.844854},{-0.540171,0.841555},{-0.545325,0.838225},{-0.550458,0.834863},
{-0.555570,0.831470},{-0.560662,0.828045},{-0.565732,0.824589},{-0.570781,0.821103},{-0.575808,0.817585},{-0.580814,0.814036},{-0.585798,0.810457},{-0.590760,0.806848},
{-0.595699,0.803208},{-0.600616,0.799537},{-0.605511,0.795837},{-0.610383,0.792107},{-0.615232,0.788346},{-0.620057,0.784557},{-0.624859,0.780737},{-0.629638,0.776888},
{-0.634393,0.773010},{-0.639124,0.769103},{-0.643832,0.765167},{-0.648514,0.761202},{-0.653173,0.757209},{-0.657807,0.753187},{-0.662416,0.749136},{-0.667000,0.745058},
{-0.671559,0.740951},{-0.676093,0.736817},{-0.680601,0.732654},{-0.685084,0.728464},{-0.689541,0.724247},{-0.693971,0.720003},{-0.698376,0.715731},{-0.702755,0.711432},
{-0.707107,0.707107},{-0.711432,0.702755},{-0.715731,0.698376},{-0.720003,0.693971},{-0.724247,0.689541},{-0.728464,0.685084},{-0.732654,0.680601},{-0.736817,0.676093},
{-0.740951,0.671559},{-0.745058,0.667000},{-0.749136,0.662416},{-0.753187,0.657807},{-0.757209,0.653173},{-0.761202,0.648514},{-0.765167,0.643832},{-0.769103,0.639124},
{-0.773010,0.634393},{-0.776888,0.629638},{-0.780737,0.624859},{-0.784557,0.620057},{-0.788346,0.615232},{-0.792107,0.610383},{-0.795837,0.605511},{-0.799537,0.600616},
{-0.803208,0.595699},{-0.806848,0.590760},{-0.810457,0.585798},{-0.814036,0.580814},{-0.817585,0.575808},{-0.821103,0.570781},{-0.824589,0.565732},{-0.828045,0.560662},
{-0.831470,0.555570},{-0.834863,0.550458},{-0.838225,0.545325},{-0.841555,0.540171},{-0.844854,0.534998},{-0.848120,0.529804},{-0.851355,0.524590},{-0.854558,0.519356},
{-0.857729,0.514103},{-0.860867,0.508830},{-0.863973,0.503538},{-0.867046,0.498228},{-0.870087,0.492898},{-0.873095,0.487550},{-0.876070,0.482184},{-0.879012,0.476799},
{-0.881921,0.471397},{-0.884797,0.465976},{-0.887640,0.460539},{-0.890449,0.455084},{-0.893224,0.449611},{-0.895966,0.444122},{-0.898674,0.438616},{-0.901349,0.433094},
{-0.903989,0.427555},{-0.906596,0.422000},{-0.909168,0.416430},{-0.911706,0.410843},{-0.914210,0.405241},{-0.916679,0.399624},{-0.919114,0.393992},{-0.921514,0.388345},
{-0.923880,0.382683},{-0.926210,0.377007},{-0.928506,0.371317},{-0.930767,0.365613},{-0.932993,0.359895},{-0.935184,0.354164},{-0.937339,0.348419},{-0.939459,0.342661},
{-0.941544,0.336890},{-0.943593,0.331106},{-0.945607,0.325310},{-0.947586,0.319502},{-0.949528,0.313682},{-0.951435,0.307850},{-0.953306,0.302006},{-0.955141,0.296151},
{-0.956940,0.290285},{-0.958703,0.284408},{-0.960431,0.278520},{-0.962121,0.272621},{-0.963776,0.266713},{-0.965394,0.260794},{-0.966976,0.254866},{-0.968522,0.248928},
{-0.970031,0.242980},{-0.971504,0.237024},{-0.972940,0.231058},{-0.974339,0.225084},{-0.975702,0.219101},{-0.977028,0.213110},{-0.978317,0.207111},{-0.979570,0.201105},
{-0.980785,0.195090},{-0.981964,0.189069},{-0.983105,0.183040},{-0.984210,0.177004},{-0.985278,0.170962},{-0.986308,0.164913},{-0.987301,0.158858},{-0.988258,0.152797},
{-0.989177,0.146730},{-0.990058,0.140658},{-0.990903,0.134581},{-0.991710,0.128498},{-0.992480,0.122411},{-0.993212,0.116319},{-0.993907,0.110222},{-0.994565,0.104122},
{-0.995185,0.098017},{-0.995767,0.091909},{-0.996313,0.085797},{-0.996820,0.079682},{-0.997290,0.073565},{-0.997723,0.067444},{-0.998118,0.061321},{-0.998476,0.055195},
{-0.998795,0.049068},{-0.999078,0.042938},{-0.999322,0.036807},{-0.999529,0.030675},{-0.999699,0.024541},{-0.999831,0.018407},{-0.999925,0.012272},{-0.999981,0.006136},
};
#endif


double cc[size_x] = {
0.1,
0.107652,
0.115269,
0.122849,
0.13039,
0.137891,
0.145349,
0.152764,
0.160134,
0.167457,
0.174731,
0.181956,
0.189129,
0.19625,
0.203316,
0.210327,
0.217281,
0.224176,
0.231012,
0.237787,
0.2445,
0.251149,
0.257735,
0.264254,
0.270707,
0.277092,
0.283408,
0.289655,
0.295831,
0.301935,
0.307967,
0.313925,
0.31981,
0.32562,
0.331355,
0.337014,
0.342597,
0.348102,
0.35353,
0.35888,
0.364152,
0.369345,
0.37446,
0.379495,
0.384451,
0.389328,
0.394126,
0.398844,
0.403483,
0.408042,
0.412523,
0.416924,
0.421247,
0.425491,
0.429658,
0.433747,
0.437758,
0.441693,
0.445552,
0.449336,
0.453044,
0.456679,
0.46024,
0.463729,
0.467145,
0.470491,
0.473767,
0.476974,
0.480113,
0.483186,
0.486192,
0.489134,
0.492013,
0.49483,
0.497585,
0.500281,
0.502919,
0.505501,
0.508026,
0.510498,
0.512918,
0.515286,
0.517605,
0.519877,
0.522102,
0.524282,
0.52642,
0.528516,
0.530573,
0.532592,
0.534575,
0.536524,
0.53844,
0.540326,
0.542182,
0.544011,
0.545815,
0.547596,
0.549355,
0.551094,
0.552815,
0.55452,
0.55621,
0.557889,
0.559556,
0.561216,
0.562868,
0.564515,
0.566159,
0.567801,
0.569444,
0.57109,
0.572739,
0.574394,
0.576056,
0.577728,
0.579411,
0.581106,
0.582815,
0.584541,
0.586283,
0.588045,
0.589828,
0.591633,
0.593461,
0.595315,
0.597195,
0.599103,
0.60104,
0.603008,
0.605008,
0.607041,
0.609108,
0.611211,
0.613351,
0.615528,
0.617743,
0.619999,
0.622295,
0.624633,
0.627013,
0.629436,
0.631903,
0.634414,
0.636971,
0.639573,
0.642222,
0.644918,
0.647661,
0.650452,
0.65329,
0.656177,
0.659113,
0.662097,
0.66513,
0.668212,
0.671342,
0.674522,
0.67775,
0.681026,
0.684351,
0.687724,
0.691145,
0.694613,
0.698129,
0.70169,
0.705298,
0.708951,
0.712649,
0.716391,
0.720176,
0.724004,
0.727874,
0.731784,
0.735735,
0.739724,
0.743752,
0.747816,
0.751916,
0.756051,
0.760219,
0.764419,
0.768651,
0.772912,
0.777201,
0.781517,
0.785858,
0.790224,
0.794612,
0.79902,
0.803449,
0.807895,
0.812357,
0.816834,
0.821323,
0.825824,
0.830334,
0.834852,
0.839376,
0.843904,
0.848434,
0.852965,
0.857494,
0.862021,
0.866542,
0.871057,
0.875562,
0.880057,
0.88454,
0.889008,
0.893459,
0.897893,
0.902306,
0.906697,
0.911064,
0.915406,
0.919719,
0.924003,
0.928256,
0.932475,
0.936659,
0.940806,
0.944914,
0.948981,
0.953006,
0.956987,
0.960922,
0.964808,
0.968646,
0.972432,
0.976166,
0.979845,
0.983468,
0.987034,
0.99054,
0.993985,
0.997369,
1.000689,
1.003943,
1.007131,
1.010252,
1.013303,
1.016284,
1.019193,
1.022029,
1.024792,
1.027479,
1.03009,
1.032623,
1.035079,
1.037455,
1.039751,
1.041966,
1.044099,
1.046149,
1.048116,
1.05,
1.051798,
1.053511,
1.055138,
1.056679,
1.058133,
1.059499,
1.060778,
1.06197,
1.063072,
1.064087,
1.065013,
1.06585,
1.066598,
1.067257,
1.067827,
1.068309,
1.068701,
1.069005,
1.069221,
1.069348,
1.069387,
1.069338,
1.069202,
1.068979,
1.068669,
1.068274,
1.067792,
1.067226,
1.066575,
1.06584,
1.065021,
1.06412,
1.063138,
1.062074,
1.060929,
1.059705,
1.058403,
1.057022,
1.055565,
1.054031,
1.052422,
1.05074,
1.048984,
1.047155,
1.045256,
1.043287,
1.041248,
1.039142,
1.036969,
1.03473,
1.032426,
1.030059,
1.02763,
1.025139,
1.022589,
1.01998,
1.017313,
1.01459,
1.011812,
1.008979,
1.006094,
1.003157,
1.000169,
0.997133,
0.994048,
0.990916,
0.987739,
0.984517,
0.981252,
0.977944,
0.974596,
0.971207,
0.967779,
0.964314,
0.960812,
0.957275,
0.953702,
0.950097,
0.946458,
0.942789,
0.939088,
0.935359,
0.9316,
0.927814,
0.924001,
0.920161,
0.916297,
0.912408,
0.908496,
0.904561,
0.900603,
0.896625,
0.892625,
0.888606,
0.884566,
0.880508,
0.876432,
0.872338,
0.868226,
0.864097,
0.859952,
0.855791,
0.851614,
0.847422,
0.843214,
0.838992,
0.834755,
0.830503,
0.826237,
0.821957,
0.817663,
0.813355,
0.809033,
0.804697,
0.800347,
0.795983,
0.791605,
0.787213,
0.782806,
0.778385,
0.773949,
0.769498,
0.765032,
0.76055,
0.756053,
0.751539,
0.747009,
0.742462,
0.737897,
0.733315,
0.728715,
0.724096,
0.719458,
0.7148,
0.710122,
0.705423,
0.700703,
0.695962,
0.691197,
0.68641,
0.681599,
0.676764,
0.671904,
0.667018,
0.662106,
0.657168,
0.652202,
0.647207,
0.642184,
0.637131,
0.632048,
0.626934,
0.621789,
0.616612,
0.611401,
0.606157,
0.600879,
0.595566,
0.590218,
0.584833,
0.579412,
0.573954,
0.568457,
0.562922,
0.557348,
0.551735,
0.546081,
0.540387,
0.534651,
0.528874,
0.523055,
0.517193,
0.511289,
0.505341,
0.49935,
0.493314,
0.487234,
0.48111,
0.474941,
0.468727,
0.462468,
0.456163,
0.449813,
0.443417,
0.436975,
0.430488,
0.423955,
0.417377,
0.410753,
0.404083,
0.397369,
0.390609,
0.383804,
0.376954,
0.37006,
0.363122,
0.356141,
0.349116,
0.342048,
0.334938,
0.327786,
0.320593,
0.313359,
0.306085,
0.298772,
0.29142,
0.284031,
0.276604,
0.269141,
0.261643,
0.25411,
0.246543,
0.238944,
0.231314,
0.223652,
0.215962,
0.208243,
0.200497,
0.192724,
0.184927,
0.177107,
0.169264,
0.1614,
0.153516,
0.145614,
0.137696,
0.129761,
0.121813,
0.113852,
0.10588,
0.097899,
0.089909,
0.081913,
0.073912,
0.065907,
0.057901,
0.049895,
0.04189,
0.033889,
0.025892,
0.017902,
0.009921,
0.001949,
-0.006011,
-0.013958,
-0.02189,
-0.029805,
-0.037701,
-0.045578,
-0.053432,
-0.061263,
-0.069068,
-0.076846,
-0.084595,
-0.092314,
-0.1,
-0.107653,
-0.11527,
-0.12285,
-0.130391,
-0.137892,
-0.14535,
-0.152765,
-0.160135,
-0.167458,
-0.174732,
-0.181957,
-0.18913,
-0.196251,
-0.203317,
-0.210328,
-0.217282,
-0.224177,
-0.231013,
-0.237788,
-0.244501,
-0.25115,
-0.257736,
-0.264255,
-0.270708,
-0.277093,
-0.283409,
-0.289656,
-0.295832,
-0.301936,
-0.307968,
-0.313926,
-0.319811,
-0.325621,
-0.331356,
-0.337015,
-0.342598,
-0.348103,
-0.353531,
-0.358881,
-0.364153,
-0.369346,
-0.374461,
-0.379496,
-0.384452,
-0.389329,
-0.394127,
-0.398845,
-0.403484,
-0.408043,
-0.412524,
-0.416925,
-0.421248,
-0.425492,
-0.429659,
-0.433748,
-0.437759,
-0.441694,
-0.445553,
-0.449337,
-0.453045,
-0.45668,
-0.460241,
-0.46373,
-0.467146,
-0.470492,
-0.473768,
-0.476975,
-0.480114,
-0.483187,
-0.486193,
-0.489135,
-0.492014,
-0.494831,
-0.497586,
-0.500282,
-0.50292,
-0.505502,
-0.508027,
-0.510499,
-0.512919,
-0.515287,
-0.517606,
-0.519878,
-0.522103,
-0.524283,
-0.526421,
-0.528517,
-0.530574,
-0.532593,
-0.534576,
-0.536525,
-0.538441,
-0.540327,
-0.542183,
-0.544012,
-0.545816,
-0.547597,
-0.549356,
-0.551095,
-0.552816,
-0.554521,
-0.556211,
-0.55789,
-0.559557,
-0.561217,
-0.562869,
-0.564516,
-0.56616,
-0.567802,
-0.569445,
-0.571091,
-0.57274,
-0.574395,
-0.576057,
-0.577729,
-0.579412,
-0.581107,
-0.582816,
-0.584542,
-0.586284,
-0.588046,
-0.589829,
-0.591634,
-0.593462,
-0.595316,
-0.597196,
-0.599104,
-0.601041,
-0.603009,
-0.605009,
-0.607042,
-0.609109,
-0.611212,
-0.613352,
-0.615529,
-0.617744,
-0.62,
-0.622296,
-0.624634,
-0.627014,
-0.629437,
-0.631904,
-0.634415,
-0.636972,
-0.639574,
-0.642223,
-0.644919,
-0.647662,
-0.650453,
-0.653291,
-0.656178,
-0.659114,
-0.662098,
-0.665131,
-0.668213,
-0.671343,
-0.674523,
-0.677751,
-0.681027,
-0.684352,
-0.687725,
-0.691146,
-0.694614,
-0.69813,
-0.701691,
-0.705299,
-0.708952,
-0.71265,
-0.716392,
-0.720177,
-0.724005,
-0.727875,
-0.731785,
-0.735736,
-0.739725,
-0.743753,
-0.747817,
-0.751917,
-0.756052,
-0.76022,
-0.76442,
-0.768652,
-0.772913,
-0.777202,
-0.781518,
-0.785859,
-0.790225,
-0.794613,
-0.799021,
-0.80345,
-0.807896,
-0.812358,
-0.816835,
-0.821324,
-0.825825,
-0.830335,
-0.834853,
-0.839377,
-0.843905,
-0.848435,
-0.852966,
-0.857495,
-0.862022,
-0.866543,
-0.871058,
-0.875563,
-0.880058,
-0.884541,
-0.889009,
-0.89346,
-0.897894,
-0.902307,
-0.906698,
-0.911065,
-0.915407,
-0.91972,
-0.924004,
-0.928257,
-0.932476,
-0.93666,
-0.940807,
-0.944915,
-0.948982,
-0.953007,
-0.956988,
-0.960923,
-0.964809,
-0.968647,
-0.972433,
-0.976167,
-0.979846,
-0.983469,
-0.987035,
-0.990541,
-0.993986,
-0.99737,
-1.00069,
-1.003944,
-1.007132,
-1.010253,
-1.013304,
-1.016285,
-1.019194,
-1.02203,
-1.024793,
-1.02748,
-1.030091,
-1.032624,
-1.03508,
-1.037456,
-1.039752,
-1.041967,
-1.0441,
-1.04615,
-1.048117,
-1.05,
-1.051799,
-1.053512,
-1.055139,
-1.05668,
-1.058134,
-1.0595,
-1.060779,
-1.061971,
-1.063073,
-1.064088,
-1.065014,
-1.065851,
-1.066599,
-1.067258,
-1.067828,
-1.06831,
-1.068702,
-1.069006,
-1.069222,
-1.069349,
-1.069388,
-1.069339,
-1.069203,
-1.06898,
-1.06867,
-1.068275,
-1.067793,
-1.067227,
-1.066576,
-1.065841,
-1.065022,
-1.064121,
-1.063139,
-1.062075,
-1.06093,
-1.059706,
-1.058404,
-1.057023,
-1.055566,
-1.054032,
-1.052423,
-1.050741,
-1.048985,
-1.047156,
-1.045257,
-1.043288,
-1.041249,
-1.039143,
-1.03697,
-1.034731,
-1.032427,
-1.03006,
-1.027631,
-1.02514,
-1.02259,
-1.019981,
-1.017314,
-1.014591,
-1.011813,
-1.00898,
-1.006095,
-1.003158,
-1.00017,
-0.997134,
-0.994049,
-0.990917,
-0.98774,
-0.984518,
-0.981253,
-0.977945,
-0.974597,
-0.971208,
-0.96778,
-0.964315,
-0.960813,
-0.957276,
-0.953703,
-0.950098,
-0.946459,
-0.94279,
-0.939089,
-0.93536,
-0.931601,
-0.927815,
-0.924002,
-0.920162,
-0.916298,
-0.912409,
-0.908497,
-0.904562,
-0.900604,
-0.896626,
-0.892626,
-0.888607,
-0.884567,
-0.880509,
-0.876433,
-0.872339,
-0.868227,
-0.864098,
-0.859953,
-0.855792,
-0.851615,
-0.847423,
-0.843215,
-0.838993,
-0.834756,
-0.830504,
-0.826238,
-0.821958,
-0.817664,
-0.813356,
-0.809034,
-0.804698,
-0.800348,
-0.795984,
-0.791606,
-0.787214,
-0.782807,
-0.778386,
-0.77395,
-0.769499,
-0.765033,
-0.760551,
-0.756054,
-0.75154,
-0.74701,
-0.742463,
-0.737898,
-0.733316,
-0.728716,
-0.724097,
-0.719459,
-0.714801,
-0.710123,
-0.705424,
-0.700704,
-0.695963,
-0.691198,
-0.686411,
-0.6816,
-0.676765,
-0.671905,
-0.667019,
-0.662107,
-0.657169,
-0.652203,
-0.647208,
-0.642185,
-0.637132,
-0.632049,
-0.626935,
-0.62179,
-0.616613,
-0.611402,
-0.606158,
-0.60088,
-0.595567,
-0.590219,
-0.584834,
-0.579413,
-0.573955,
-0.568458,
-0.562923,
-0.557349,
-0.551736,
-0.546082,
-0.540388,
-0.534652,
-0.528875,
-0.523056,
-0.517194,
-0.51129,
-0.505342,
-0.499351,
-0.493315,
-0.487235,
-0.481111,
-0.474942,
-0.468728,
-0.462469,
-0.456164,
-0.449814,
-0.443418,
-0.436976,
-0.430489,
-0.423956,
-0.417378,
-0.410754,
-0.404084,
-0.39737,
-0.39061,
-0.383805,
-0.376955,
-0.370061,
-0.363123,
-0.356142,
-0.349117,
-0.342049,
-0.334939,
-0.327787,
-0.320594,
-0.31336,
-0.306086,
-0.298773,
-0.291421,
-0.284032,
-0.276605,
-0.269142,
-0.261644,
-0.254111,
-0.246544,
-0.238945,
-0.231315,
-0.223653,
-0.215963,
-0.208244,
-0.200498,
-0.192725,
-0.184928,
-0.177108,
-0.169265,
-0.161401,
-0.153517,
-0.145615,
-0.137697,
-0.129762,
-0.121814,
-0.113853,
-0.105881,
-0.0979,
-0.08991,
-0.081914,
-0.073913,
-0.065908,
-0.057902,
-0.049896,
-0.041891,
-0.03389,
-0.025893,
-0.017903,
-0.009922,
-0.00195,
0.00601,
0.013957,
0.021889,
0.029804,
0.0377,
0.045577,
0.053431,
0.061262,
0.069067,
0.076845,
0.084594,
0.092313,

};
#endif  /*__FFT_SYF_H*/



//Ƶ��й©��ֱ�ӵ�Ӱ�������г��������׼ȷ ,���������г������Ϊ�����ĵ����������׼ȷ�� 
//1  �������ݲ������� ,�ɼ���й© ,��ʵ���Ǽ�С���δ�����Ŀ��ȡ� 
//2  ����źŵĲ���Ƶ��Ҳ�ɼ���й©�� 
//�������ַ��� ,�����ӵ����ݴ�������� ,��й©�ĸ����Ǽ������޵ġ�
//3  ��������˴��������ڲ弼����ѡ�񴰺����Ļ���ԭ����Ҫ��������խ ,�߰�С ,������ʹ������Ҫ��õ���� ,ͨ��ѡ��������
//��ʱ�� ,�Ӻ�����ʵ���Ͼ���ʹ���ڲ����źŵ���ʼ�����ֹ�����λΪ 0,�˷�����Ƶ�ʲ�����ɵĲ����ź���λ��ʼ�˺��ն˲����������� ,
//���κδ����������ܽ�����괦ƫ����ֵ������µ���� ,�������й©�ļ�СҲ�����޵ġ�
//4  �ڲ弼������������ȫ����й©��Ӱ�� ,�����㷨�����ݴ��������� ,ʵʱ�����Ա�֤�� 
//���������һ�ּ���Ƶ��й©���㷨 ,������ǵ�������������������ĳ˻������ź�����������ʱ ,���ø��㷨�ó�����ɢ���о����źŵĲ������� ,���� ,�㷨���Զ������������С�
//����֤�� ,���㷨���ź�Ƶ�ʲ�������ʱ ,��Ƶ��й©�ĸĽ������� ,�ź�Ƶ�ʲ����ϴ�ʱ ,�㷨�ľ��Ƚϵ͡�
//�����㷨�ܵ��ص��ǶԲ������л�Ƶ�׽���У�� ,û�д����Ƶ��й©�ĸ���ԭ����ȥ����� ��;����������㷨��Ч�������� ,��ʵʱ�Բ 
//���Ƶ��й©�ĸ���ԭ���� f s�� N f 0,ֻ��
//5  ʵʱ���� f s ,ʹ f s = N f 0 , ������Ч���Ƶ��й©����������Ŀ�� ,�����һ������Ӧ���������ʵ��㷨 ,����֤���˸��㷨����Ч�� [1]  ��

//Ӱ����㷨�ٶȵ���Ҫ�� FFT�� 
//�������� ,�����ر��ʺ����ݴ����� DSPоƬ�ĳ��ּ����������źŷ����е�Ӧ�� , FFT�����ٶ�Խ��Խ�� ,���� V C5402ִ�� 1 024�㸴�� FFT������� 40�� ��s,��ȫ��������ϵͳʵʱ�Ե�Ҫ��
//��� ,���㷨���Խ������źŲ���Ϊ������ϵͳ�о��н�ǿ��ʵ�ü�ֵ�� Ŀǰ�������㷨Ӧ����ˮ��վ���ϵͳ������� 







