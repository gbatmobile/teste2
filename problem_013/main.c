#include <stdio.h>
#include <math.h>

#define NUMBER_ROWS 100
#define NUMBER_COLS 7

int NUMBERS[NUMBER_ROWS][NUMBER_COLS] = {
        { 37, 10728753, 39021027, 98797998, 22083759,  2465101, 35740250 },
        { 46, 37693767, 74900097, 12648124, 89697007, 80504170, 18260538 },
		{ 74, 32498619, 95247410, 59474233, 30951305, 81237266, 17309629 },
		{ 91, 94221336, 35741615, 72522430, 56330181, 10724061, 54908250 },
		{ 23,  6758820, 75393461, 71171980, 31042104, 75137780, 63246676 },
		{ 89, 26167069, 66236338, 20136378, 41838368, 41787343, 61726757 },
		{ 28, 11287981, 28499794,  8065481, 93159262, 16912758, 89832738 },
		{ 44, 27422891, 74325203, 21923589, 42287679, 64876702, 72189318 },
		{ 47, 45144573, 60013064, 39091167, 21685684, 45887116,  3153276 },
		{ 70, 38648610, 58430254, 39939619, 82891759, 36656867, 57934951 },
		{ 62, 17645714, 18565606, 29502157, 22319658, 67550793, 24193331 },
		{ 64, 90635246, 27419049, 29101432, 44581382, 26633479, 44758178 },
		{ 92, 57586771, 83372176, 61963751, 59057923, 97282455, 98838407 },
		{ 58, 20356532, 53593990,  8402633, 56894883,  1894586, 28227828 },
		{ 80, 18119938, 48262820, 14278194, 13994056, 75871511, 70094390 },
		{ 35, 39866437, 28271126, 53829987, 24078447, 30531901,  4293586 },
		{ 86, 51550600, 62958648, 61532075, 27337195, 91914205, 17255829 },
		{ 71, 69388870, 77154664, 99115593, 48760353, 29217149, 70056938 },
		{ 54, 37007057, 68266846, 24621495, 65007647, 17872944, 38377604 },
		{ 53, 28265410, 87568284, 43191190, 63469403, 78552177, 79295145 },
		{ 36, 12327252, 50002960, 71075082, 56381565, 67108852, 58350721 },
		{ 45, 87657617, 24109764, 47339110, 60721826, 52368772, 23636045 },
		{ 17, 42370690, 58518606, 60448207, 62120981, 32878607, 33969412 },
		{ 81, 14266041, 80868306, 19328460, 81119106, 15569405, 12689692 },
		{ 51, 93432545, 17283886, 41918047,  4929321, 50586425, 63049483 },
		{ 62, 46722164, 84350762,  1727918,  3994469, 30047329, 56340691 },
		{ 15, 73244438, 69081257, 94514089,  5770622, 94291971,  7928209 },
		{ 55,  3768752, 56787730, 91862540, 74496984, 45083303, 93682126 },
		{ 18, 33638482, 53301546, 86196124, 34876768, 12975343, 75946515 },
		{ 80, 38628759, 28784902,  1521685, 55482871, 72012192, 57766954 },
		{ 78, 18283375, 79931036, 14740356, 85644909, 55270978, 64797581 },
		{ 16, 72632010,  4368978, 42553539, 92093183, 74414978,  6860984 },
		{ 48, 40309812, 90777917, 99088218, 79532736, 44756755, 90848030 },
		{ 87,  8698755, 13927118, 54517078, 54416185, 24243206, 93150332 },
		{ 59, 95940689, 57565367, 82107074, 92696653, 76763262, 35447210 },
		{ 69, 79395067, 96526947, 42597709, 73916669, 37630426, 33987085 },
		{ 41,  5268470, 82990852, 11399427, 36573411, 61827603, 15001271 },
		{ 65, 37860736, 15010808, 57009149, 93951255, 70281987, 46004375 },
		{ 35, 82903531, 74347173, 26932123, 57815498, 26297425, 52737307 },
		{ 94, 95375976, 51053059, 46966067, 68315657, 43771674,  1875275 },
		{ 88, 90280257, 17332296, 19176668, 71381993, 18110487, 70190271 },
		{ 25, 26768027, 60780030, 13678680, 99252546, 34010616, 32866526 },
		{ 36, 27021854,  4977055, 85629946, 58063623, 79931407, 46255962 },
		{ 24,  7448690, 82311749, 77792365, 46625724, 69233228, 10917141 },
		{ 91, 43028819, 71032885, 97806669, 76089293, 86382850, 25333403 },
		{ 34, 41306557, 80161278, 15921815,   556186, 88364684, 20090470 },
		{ 23,  5308117, 28164304, 87623791, 96984248, 72550366, 38784583 },
		{ 11, 48769693, 21549028, 10424020, 13833512, 44621814, 41773470 },
		{ 63, 78329949,  6362596, 66498587, 61822122, 52255124, 86764533 },
		{ 67, 72018697, 16985443, 12419572, 40991395, 90089523, 10058822 },
		{ 95, 54825530,  2635207, 81532296, 79624948, 16419538, 68218774 },
		{ 76,  8532713, 22857231, 10424803, 45612486, 76970645,  7995236 },
		{ 37, 77424253, 54112916, 84276865, 53892620, 50249103, 26572967 },
		{ 23, 70191327, 57256752, 85653248, 25826546, 30922070, 58596522 },
		{ 29, 79886027, 22583319, 13126375, 14734199, 48895347, 65745501 },
		{ 18, 49570145, 48792889, 84856827, 72607771, 37214037, 98879715 },
		{ 38, 29820378, 30314735, 27721580, 34814451, 34913732, 26651381 },
		{ 34, 82954382, 91999181, 80278916, 52243102, 73922511, 22869539 },
		{ 40, 95795306, 64052326, 32538044, 10005965, 49391598, 79593635 },
		{ 29, 74615218, 55023713,  7642255, 12118369, 38035803, 88584903 },
		{ 41, 69811622, 20729771, 86158236, 67842468, 91579935, 32961922 },
		{ 62, 46795719, 44012690, 43877107, 27504810, 23908955, 23597457 },
		{ 23, 18970677, 25479150, 61505504, 95392297, 95309011, 29967519 },
		{ 86, 18808822, 58753145, 29584099, 25120382, 90094077, 70775672 },
		{ 11, 30673970, 83047244, 83816533, 87350234,  8456470, 58077308 },
		{ 82, 95917476, 71403631, 98008187, 12901187, 54913105, 47126581 },
		{ 97, 62333104, 48183862, 69515456, 33492636, 65728975, 63400500 },
		{ 42, 84628018, 35170705, 27831839, 42588214, 55212272, 51250327 },
		{ 55, 12160354, 69812005, 81762165, 21282765, 27516912, 96897789 },
		{ 32, 23819573, 43293399, 46437501, 90783694, 57658833, 52399886 },
		{ 75, 50616496, 51847751, 80738168, 83786109, 15273579, 29701337 },
		{ 62, 17784275, 21926234,  1942399, 63916804, 49839931, 73312731 },
		{ 32, 92418570, 71473495, 66916674, 68763466,  9150359, 14677504 },
		{ 99, 51867143,  2352196, 28894890, 10242332, 51169136, 19626622 },
		{ 73, 26746080,  5915474, 71830798, 39286853, 52069469, 44540724 },
		{ 76, 84182252, 46744171, 61514036, 42798227, 33480555, 56214818 },
		{ 97, 14261791,  3425986, 47204516, 89398942, 21798260, 88076852 },
		{ 87, 78364618, 27993463, 13767754, 30780936, 33330189, 82642090 },
		{ 10, 84880252, 16746708, 83215120, 18588354, 32238128, 76952786 },
		{ 71, 32961247, 47824645, 38636993,   904931,  3636197, 63878039 },
		{ 62, 18407357, 23997942, 23406235, 39380833, 96513274,  8011116 },
		{ 66, 62789198, 14880877, 97941876, 87614423,   309844, 90851411 },
		{ 60, 66182629, 36828367, 64744779, 23918033, 51109890, 69790714 },
		{ 85, 78694408, 95529906, 53640447, 42557608, 36599766, 45795096 },
		{ 66,  2439640, 99053896,  7120198, 21997604, 75994901, 97230297 },
		{ 64, 91398268,   329731, 56037120,  4137790, 37855660, 85089252 },
		{ 16, 73093931, 98727502, 75468906, 90370753, 94130426, 52315011 },
		{ 94, 80937724, 50487951, 50954100, 92164586, 37547105, 98436791 },
		{ 78, 63916702, 11874924, 31995700, 64191796, 97775990, 28300699 },
		{ 15, 36871371, 19366149, 52811305, 87638027, 84107544, 49733078 },
		{ 40, 78992311, 55355625, 61142322, 42325503, 36854424, 88917353 },
		{ 44, 88991150, 14406480, 20369068,  6396067, 23221932,  4149535 },
		{ 41, 50312888,  3395360, 53299340, 36800697, 77106505, 66631954 },
		{ 81, 23488067, 32101467, 39058568, 55793458, 14036278, 22703280 },
		{ 82, 61657077, 39483275, 92232845, 94170652, 50945123, 25230608 },
		{ 22, 91880205, 87773197, 19839450, 18088807, 24296619, 80811197 },
		{ 77, 15854250, 20165450, 90413245, 80978688, 27789487, 21859617 },
		{ 72, 10783843, 50691861, 55435662, 88406225, 74736922, 84509516 },
		{ 20, 84960398,  1340017, 23930671, 66682355, 52452528,  4609722 },
		{ 53, 50353422, 64725242, 50874054,  7559178, 97812643, 30331690 }
	};

int main(int argc, const char *argv[])
{
	int i, j;
	int result[NUMBER_COLS] = { 0, 0, 0, 0, 0, 0, 0 };

	for (i = 0; i < NUMBER_ROWS; i++)
	{
		int exceeding_part = 0;

		for (j = (NUMBER_COLS - 1); j >= 0; j--)
		{
			printf("sum %d with %d and outnumber %d => ", result[j], NUMBERS[i][j], exceeding_part);
			result[j] += NUMBERS[i][j] + exceeding_part;

			exceeding_part = 0;

            if (result[j] * 0.00000001 > 1 )
            {
				//printf("\n\t(result is more than 8 digits %d ", result[j]);

				exceeding_part = floor(result[j] * 0.00000001);
				result[j] -= (100000000 * exceeding_part);
            }

			printf("%d \n", result[j]);
		}

		printf("\n");
	}

	return 0;
}
