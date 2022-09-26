#include <bits/stdc++.h>
using namespace std;
int getSum(vector<int> &input)
{
    int sum = 0;
    for (int i = 0; i < input.size(); i++)
    {
        sum = sum + input[i];
    }
    return sum;
}
vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)
{
    vector<int> ans;
    int alice_sum;
    int bob_sum;
    int i = 0;
    int j = 0;
    while (i < aliceSizes.size())
    {
        j = 0;
        while (j < bobSizes.size())
        {
            swap(aliceSizes.at(i), bobSizes.at(j));
            alice_sum = getSum(aliceSizes);
            bob_sum = getSum(bobSizes);
            if (alice_sum - bob_sum == 0)
            {
                ans.push_back(bobSizes.at(j));
                ans.push_back(aliceSizes.at(i));
                return ans;
            }
            else
            {
                swap(aliceSizes.at(i), bobSizes.at(j));
            }
            j++;
        }
        i++;
    }
    return ans;
}
int main()
{
    // vector<int> aliceSizes = {1, 2};
    // vector<int> bobSizes = {2, 3};
    vector<int> aliceSizes = {19852, 28232, 44410, 14501, 41938, 18562, 36701, 27580, 43590, 18749, 25929, 7641, 23841, 24416, 32461, 2657, 15738, 15071, 2116, 45407, 15798, 41866, 36278, 38678, 31180, 13436, 4041, 20591, 18539, 28075, 48903, 18598, 42614, 44171, 45446, 2656, 19408, 21848, 10314, 41689, 27389, 46586, 49567, 12722, 17760, 48485, 13444, 15911, 34860, 41601, 6698, 11668, 9627, 43371, 41572, 10912, 14885, 16787, 39592, 22056, 136, 35478, 6239, 29724, 22033, 12686, 48663, 3895, 4039, 41999, 22895, 20522, 6264, 18765, 19062, 28548, 38950, 1930, 49746, 28734, 48106, 19563, 42197, 49583, 44183, 24969, 13986, 26890, 44, 7417, 47733, 12032, 26830, 38009, 35439, 21586, 33925, 4179, 31450, 635, 39392, 48070, 17973, 34467, 18422, 41141, 5516, 48885, 24319, 37536, 34325, 23725, 5734, 45586, 5401, 41300, 18113, 7492, 15519, 12976, 42349, 12967, 17989, 34188, 45300, 2886, 5586, 626, 49618, 47751, 1790, 9049, 2467, 15618, 3024, 7536, 41863, 41951, 20848, 452, 25947, 33864, 6126, 6880, 29541, 25239, 47423, 11356, 40707, 12368, 14902, 12027, 18484, 13476, 32752, 24930, 8085, 41169, 29336, 23148, 47331, 41227, 1146, 28276, 28184, 24583, 20613, 16856, 3819, 45618, 44561, 4095, 12206, 23351, 11991, 11704, 38574, 25773, 18992, 22795, 46409, 21885, 4024, 15285, 15497, 8726, 16807, 14151, 49006, 30504, 6945, 18223, 35185, 29632, 49849, 36679, 37325, 27202, 3680, 37321, 49607, 34594, 21195, 9282, 35656, 32875, 27571, 9215, 45119, 15979, 34548, 14579, 14161, 4436, 33731, 40508, 22024, 11383, 17665, 22267, 21091, 33115, 40256, 9230, 20145, 3718, 14210, 44047, 1503, 28620, 14836, 31965, 29048, 17154, 22867, 19226, 36184, 46518, 29652, 44526, 42886, 40507, 27231, 4003, 40571, 34095, 1127, 19659, 24569, 49283, 14580, 37976, 48480, 19761, 39924, 44972, 12171, 42250, 25594, 3765, 14810, 24116, 29012, 2936, 24969, 10759, 45649, 25216, 17909, 24599, 9035, 46202, 36175, 21676, 29398, 25639, 8638, 29268, 39756, 14162, 106, 6235, 47979, 1666, 23009, 16529, 40187, 18978, 23051, 43975, 11430, 23334, 39070, 1651, 47979, 31457, 43651, 25166, 43638, 47827, 1953, 29699, 24245, 20827, 17238, 24563, 9459, 40108, 48966, 19240, 42975, 15168, 29806, 10627, 10615, 33560, 24806, 9315, 40670, 47744, 17104, 22595, 38163, 2990, 43360, 12638, 1509, 27596, 28127, 23641, 25191, 29622, 39238, 10162, 24945, 20155, 21886, 18174, 6808, 46, 10189, 6909, 44090, 15654, 22416, 18539, 12547, 31403, 11792, 39353, 11229, 45455, 29988, 21961, 29027, 41922, 21054, 40370, 66, 32812, 23780, 48556, 46248, 42275, 22580, 26585, 25666, 10737, 40512, 49171, 8948, 30627, 46309, 21329, 7977, 1725, 46876, 1690, 38599, 13664, 35977, 43141, 33023, 9196, 13968, 6552, 31454, 14286, 36731, 46749, 34702, 9814, 37073, 23307, 36605, 21597, 1343, 28199, 34580, 47255, 47288, 21608, 41503, 20928, 1936, 21830, 3691, 27447, 38572, 13869, 31209, 22307, 24257, 37537, 33774, 24532, 34149, 16548, 18946, 41194, 14240, 38904, 38874, 3121, 9541, 1248, 7557, 396, 39155, 49071, 50, 6887, 31535, 27015, 34089, 35240, 26792, 12182, 18679, 11928, 20985, 20818, 33467, 10946, 16612, 7034, 7709, 3398, 3327, 42688, 22088, 46514, 10964, 8282, 11940, 32238, 7813, 38850, 27390, 14703, 46477, 10358, 22659, 38415, 4246, 10792, 40991, 607, 22423, 40353, 1406, 34234, 34697, 4398, 19924, 18091, 6165, 13545, 473, 6499, 32082, 28878, 48564, 19825, 41734, 34321, 46978, 29068, 33915, 25016, 46245, 22947, 7411, 1655, 21202, 47144, 18678, 26012, 32617, 6027, 44039, 15982, 29582, 11627, 13188, 12407, 42765, 47756, 24333, 31754, 28875, 40839, 27309, 43667, 19722, 41999, 9265, 24324, 32809, 46899, 6809, 33334, 44555, 17158, 16329, 6498, 29680, 44781, 11414, 2990, 3091, 6513, 40928, 21015, 28478, 10769, 12593, 31743, 47504, 3621, 21082, 9116, 22463, 43603, 32451, 8110, 37206, 7940, 3510, 14707, 12360, 15947, 11644, 9194, 19632, 22770, 15446, 26906, 31477, 29692, 32583, 6062, 1694, 27690, 18955, 15247, 24952, 38552, 35936, 44201, 40547, 25613, 18, 42613, 37404, 12260, 35704, 33193, 24774, 15818, 5180, 31657, 30278, 25693, 34364, 527, 24793, 30284, 27825, 27346, 9007, 29512, 20115, 5482, 45607, 29850, 46333, 37983, 33064, 20669, 42105, 16716, 27140, 23339, 23964, 2596, 2980, 8254, 49105, 4935, 17618, 3147, 15387, 35055, 41252, 48813, 9526, 48564, 3653, 36972, 40871, 21488, 978, 48727, 21456, 26959, 8284, 47793, 48281, 9458, 10352, 46944, 5675, 38727, 28304, 24112, 31269, 38904, 30235, 21597, 6499, 21612, 5479, 14044, 29193, 46275, 2414, 11535, 1085, 8347, 17159, 33165, 1733, 46085, 49388, 31330, 22161, 37792, 41781, 28984, 6610, 43977, 3715, 44991, 38084, 20868, 1632, 26368, 26892, 41076, 13224, 18461, 37294, 24383, 10584, 7914, 512, 632, 45049, 18029, 47946, 40738, 3537, 15535, 41645, 13806, 15242, 42090, 46184, 39853, 8592, 39097, 45449, 49477, 7675, 31412, 37000, 37275, 13548, 14083, 17571, 22550, 46578, 3031, 25909, 2194, 2885, 22287, 48243, 28905, 32551, 9937, 47046, 15962, 13583, 18604, 40119, 6645, 44295, 44387, 1853, 41168, 40418, 35660, 23830, 47216, 46614, 9976, 16598, 2307, 19146, 21219, 30310, 13858, 7118, 31430, 12950, 22623, 46854, 27489, 46521, 16863, 44999, 45437, 22769, 38813, 16173, 48057, 18591, 47192, 18788, 11371, 16061, 28369, 5938, 56, 18466, 4064, 7855, 48196, 22592, 30836, 30555, 31883, 28608, 31342, 15561, 44244, 18962, 10788, 21316, 6176, 10868, 31021, 12034, 20162, 32245, 1417, 45928, 30105, 42029, 22879, 43579, 31158, 43368, 30027, 32397, 1221, 1683, 21977, 25967, 46209, 4661, 6176, 5050, 25568, 19287, 14210, 31640, 31952, 23810, 26774, 34776, 26435, 1341, 15183, 6900, 267, 8656, 27355, 28469, 1960, 4391, 49929, 22874, 11608, 6465, 7199, 42870, 18600, 14621, 11917, 12642, 3197, 155, 23975, 5670, 4375, 7281, 37249, 40453, 47330, 40311, 38561, 28678, 11964, 32964, 7248, 35634, 13659, 25882, 4432, 7277, 10376, 38410, 43322, 48053, 19751, 3630, 31990, 14555, 13511, 10130, 780, 3671, 3491, 42714, 36646, 25810, 30751, 14312, 45595, 47036, 30480, 25562, 24464, 47348, 23916, 101, 31661, 41552, 46204, 47835, 40524, 1596, 1984, 6344, 35862, 26976, 1095, 34525, 45299, 2291, 47264, 14572, 15881, 8027, 23270, 45705, 47868, 4413, 20804, 45117, 1042, 47474, 15849, 6179, 12860, 20566, 5699, 35676, 14027, 48523, 24366, 28806, 3978, 14706, 15329, 3458, 18989, 46802, 8585, 18661, 23397, 9425, 21509, 1185, 25384, 20988, 41565, 6961, 14306, 2017, 29633, 26075, 16729, 2719, 31071, 495, 41302, 24205, 33671, 43485, 6683, 28080, 48343, 34104, 21291, 32315, 40079, 28419, 23077, 8169, 20316, 43788, 16045, 48475, 34204, 43778, 13295, 42411, 17896, 28077, 35201, 33988, 337, 40081, 47558, 43998, 43978, 42879, 11105, 32233, 27039, 23321, 35847, 17886, 13385, 13492, 44004, 40655, 42423, 31468, 37661, 4870, 43944, 18428, 4615, 46188, 37177, 17364, 24224, 34070, 41409, 8890, 43409, 5395, 33015, 14754, 43502, 39987, 8580, 26944, 11102, 48481, 10952, 10600, 3889, 46722, 35321};
    vector<int> bobSizes = {96204, 49903, 24905, 71006, 87520, 36014, 58214, 47250, 26606, 22629, 80294, 20435, 24239, 56606, 93392, 239, 56062, 62235, 15419, 6434, 88967, 47673, 71820, 63738, 95998, 74234, 2755, 7812, 91225, 17133, 32157, 64252, 10143, 84257, 7930, 97329, 26247, 86871, 56133, 78077, 35793, 67669, 89297, 96995, 64201, 16149, 11504, 63859, 88272, 70903, 57657, 40502, 73050, 57410, 815, 25172, 65200, 21720, 77505, 86429, 24866, 52569, 86173, 63283, 30795, 14135, 5005, 25360, 59340, 25757, 6378, 89212, 38135, 63228, 53309, 93490, 42937, 75753, 84927, 31857, 6128, 13343, 63847, 45262, 58095, 87467, 74588, 97231, 86099, 64839, 45103, 76800, 71266, 33057, 45297, 2095, 99089, 24215, 63001, 32233, 63303, 68430, 21207, 4538, 23068, 85324, 23664, 52212, 67146, 193, 92261, 3486, 41795, 54115, 62736, 87941, 96942, 10493, 88290, 62875, 60357, 29432, 54574, 35885, 60705, 35802, 29225, 78513, 11654, 32, 85622, 13784, 20970, 94867, 31317, 42552, 76541, 40363, 82976, 23631, 98747, 64252, 62577, 76911, 49653, 47567, 42857, 29195, 45888, 95906, 65242, 49907, 12332, 57643, 86691, 31658, 33155, 49877, 14469, 49971, 82975, 3407, 75738, 78664, 74553, 31904, 19732, 23292, 41467, 24960, 56357, 97561, 95856, 61833, 53710, 52093, 47935, 44555, 32818, 67670, 45728, 83608, 75129, 5567, 79983, 83708, 6758, 27654, 33954, 779, 88766, 41119, 93329, 73183, 3252, 86047, 55608, 73739, 31683, 19244, 6896, 63388, 46862, 76758, 44450, 14278, 2069, 3590, 485, 47883, 22644, 57856, 62019, 65023, 16997, 15591, 19839, 2864, 34313, 24043, 23532, 52925, 89481, 4532, 88205, 23816, 63887, 90676, 7286, 61492, 13082, 90272, 31758, 92032, 3564, 8983, 12963, 23295, 10278, 91828, 74910, 44294, 21733, 77928, 38964, 50954, 70180, 84484, 22230, 63879, 228, 52489, 20912, 40461, 71831, 11579, 20337, 50620, 92945, 42926, 2469, 80466, 27937, 47608, 61368, 19197, 56192, 70878, 862, 87281, 21205, 52044, 91233, 68155, 64758, 74614, 537, 34421, 7031, 11023, 57649, 44218, 42194, 64742, 1677, 50065, 92218, 38166, 25247, 82195, 7244, 76912, 37096, 42888, 17329, 55132, 16581, 92469, 64872, 38278, 72474, 86055, 56102, 30800, 80057, 18262, 55068, 95733, 57875, 32547, 6926, 62897, 67535, 26202, 64051, 62503, 12256, 69456, 65490, 93456, 15262, 41862, 6872, 18979, 15781, 82305, 29325, 7671, 61050, 35435, 76590, 2549, 22863, 74616, 21468, 44748, 83346, 98156, 58915, 11510, 18147, 67820, 40927, 42976, 2512, 85053, 3950, 19195, 52771, 47270, 63965, 34129, 75488, 63751, 99628, 29572, 90889, 23344, 18381, 75847, 17120, 72089, 98159, 8652, 37873, 23948, 21777, 62201, 57599, 76697, 34176, 27346, 22596, 8630, 18569, 80439, 62281, 86891, 17872, 92560, 13664, 80118, 94608, 61823, 99974, 17331, 5609, 46503, 88521, 78512, 16244, 43705, 64388, 91083, 39152, 88684, 44424, 87679, 90187, 98704, 48159, 1309, 60173, 27787, 66030, 66051, 94259, 34634, 83254, 43391, 43566, 94128, 21468, 21357, 2822, 96648, 74273, 64890, 50626, 36993, 33312, 19221, 98475, 868, 40698, 20518, 17951, 64027, 99011, 5125, 77071, 32157, 72215, 11062, 82521, 52188, 4110, 51892, 29432, 68063, 21049, 7990, 66679, 7777, 98481, 29124, 97967, 28309, 85092, 80625, 58112, 59119, 94518, 60497, 93855, 61111, 34437, 40171, 38546, 83048, 99758, 44764, 55183, 51715, 76298, 9090, 99270, 67162, 10921, 68328, 64225, 47334, 55744, 42116, 92878, 61126, 25735, 76395, 25953, 17918, 50264, 4094, 18461, 22443, 17856, 40168, 96578, 7615, 82324, 33479, 53716, 46310, 75871, 96786, 63444, 64616, 20783, 25847, 33772, 7137};
    vector<int> ans = fairCandySwap(aliceSizes, bobSizes);
    for (const int &element : ans)
    {
        cout << element << " ";
    }
}

// //second modification...
// #include <bits/stdc++.h>
// using namespace std;
// int getSum(vector<int> &input1,vector<int> &input2)
// {
//     int sum = 0;
//     for (int i = 0; i < input1.size() || i < input2.size(); i++)
//     {
//         if(i<input1.size() && i < input2.size()){
//         sum = input1[i] - input2[i] + sum;
//         }
//         else if(i>=input1.size()){
//             sum = sum + input2[i];
//         }
//         else if(i>=input2.size()){
//             sum = sum + input1[i];
//         }
//     }
//     return sum;
// }
// vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)
// {
//     vector<int> ans;
//     int alice_sum;
//     int bob_sum;
//     int i = 0;
//     int j = 0;
//         while (i < aliceSizes.size())
//         {
//             j = 0;
//             while (j < bobSizes.size())
//             {
//                 swap(aliceSizes.at(i), bobSizes.at(j));
//                 // alice_sum = getSum(aliceSizes);
//                 // bob_sum = getSum(bobSizes);
//                 if (/**alice_sum == bob_sum**/ getSum(aliceSizes,bobSizes)==0)
//                 {
//                     ans.push_back(bobSizes.at(j));
//                     ans.push_back(aliceSizes.at(i));
//                     return ans;
//                 }
//                 else
//                 {
//                     swap(aliceSizes.at(i), bobSizes.at(j));
//                 }
//                 j++;
//             }
//             i++;
//         }
//         return ans;

// }
// int main()
// {
//     vector<int> aliceSizes = {19852,28232,44410,14501,41938,18562,36701,27580,43590,18749,25929,7641,23841,24416,32461,2657,15738,15071,2116,45407,15798,41866,36278,38678,31180,13436,4041,20591,18539,28075,48903,18598,42614,44171,45446,2656,19408,21848,10314,41689,27389,46586,49567,12722,17760,48485,13444,15911,34860,41601,6698,11668,9627,43371,41572,10912,14885,16787,39592,22056,136,35478,6239,29724,22033,12686,48663,3895,4039,41999,22895,20522,6264,18765,19062,28548,38950,1930,49746,28734,48106,19563,42197,49583,44183,24969,13986,26890,44,7417,47733,12032,26830,38009,35439,21586,33925,4179,31450,635,39392,48070,17973,34467,18422,41141,5516,48885,24319,37536,34325,23725,5734,45586,5401,41300,18113,7492,15519,12976,42349,12967,17989,34188,45300,2886,5586,626,49618,47751,1790,9049,2467,15618,3024,7536,41863,41951,20848,452,25947,33864,6126,6880,29541,25239,47423,11356,40707,12368,14902,12027,18484,13476,32752,24930,8085,41169,29336,23148,47331,41227,1146,28276,28184,24583,20613,16856,3819,45618,44561,4095,12206,23351,11991,11704,38574,25773,18992,22795,46409,21885,4024,15285,15497,8726,16807,14151,49006,30504,6945,18223,35185,29632,49849,36679,37325,27202,3680,37321,49607,34594,21195,9282,35656,32875,27571,9215,45119,15979,34548,14579,14161,4436,33731,40508,22024,11383,17665,22267,21091,33115,40256,9230,20145,3718,14210,44047,1503,28620,14836,31965,29048,17154,22867,19226,36184,46518,29652,44526,42886,40507,27231,4003,40571,34095,1127,19659,24569,49283,14580,37976,48480,19761,39924,44972,12171,42250,25594,3765,14810,24116,29012,2936,24969,10759,45649,25216,17909,24599,9035,46202,36175,21676,29398,25639,8638,29268,39756,14162,106,6235,47979,1666,23009,16529,40187,18978,23051,43975,11430,23334,39070,1651,47979,31457,43651,25166,43638,47827,1953,29699,24245,20827,17238,24563,9459,40108,48966,19240,42975,15168,29806,10627,10615,33560,24806,9315,40670,47744,17104,22595,38163,2990,43360,12638,1509,27596,28127,23641,25191,29622,39238,10162,24945,20155,21886,18174,6808,46,10189,6909,44090,15654,22416,18539,12547,31403,11792,39353,11229,45455,29988,21961,29027,41922,21054,40370,66,32812,23780,48556,46248,42275,22580,26585,25666,10737,40512,49171,8948,30627,46309,21329,7977,1725,46876,1690,38599,13664,35977,43141,33023,9196,13968,6552,31454,14286,36731,46749,34702,9814,37073,23307,36605,21597,1343,28199,34580,47255,47288,21608,41503,20928,1936,21830,3691,27447,38572,13869,31209,22307,24257,37537,33774,24532,34149,16548,18946,41194,14240,38904,38874,3121,9541,1248,7557,396,39155,49071,50,6887,31535,27015,34089,35240,26792,12182,18679,11928,20985,20818,33467,10946,16612,7034,7709,3398,3327,42688,22088,46514,10964,8282,11940,32238,7813,38850,27390,14703,46477,10358,22659,38415,4246,10792,40991,607,22423,40353,1406,34234,34697,4398,19924,18091,6165,13545,473,6499,32082,28878,48564,19825,41734,34321,46978,29068,33915,25016,46245,22947,7411,1655,21202,47144,18678,26012,32617,6027,44039,15982,29582,11627,13188,12407,42765,47756,24333,31754,28875,40839,27309,43667,19722,41999,9265,24324,32809,46899,6809,33334,44555,17158,16329,6498,29680,44781,11414,2990,3091,6513,40928,21015,28478,10769,12593,31743,47504,3621,21082,9116,22463,43603,32451,8110,37206,7940,3510,14707,12360,15947,11644,9194,19632,22770,15446,26906,31477,29692,32583,6062,1694,27690,18955,15247,24952,38552,35936,44201,40547,25613,18,42613,37404,12260,35704,33193,24774,15818,5180,31657,30278,25693,34364,527,24793,30284,27825,27346,9007,29512,20115,5482,45607,29850,46333,37983,33064,20669,42105,16716,27140,23339,23964,2596,2980,8254,49105,4935,17618,3147,15387,35055,41252,48813,9526,48564,3653,36972,40871,21488,978,48727,21456,26959,8284,47793,48281,9458,10352,46944,5675,38727,28304,24112,31269,38904,30235,21597,6499,21612,5479,14044,29193,46275,2414,11535,1085,8347,17159,33165,1733,46085,49388,31330,22161,37792,41781,28984,6610,43977,3715,44991,38084,20868,1632,26368,26892,41076,13224,18461,37294,24383,10584,7914,512,632,45049,18029,47946,40738,3537,15535,41645,13806,15242,42090,46184,39853,8592,39097,45449,49477,7675,31412,37000,37275,13548,14083,17571,22550,46578,3031,25909,2194,2885,22287,48243,28905,32551,9937,47046,15962,13583,18604,40119,6645,44295,44387,1853,41168,40418,35660,23830,47216,46614,9976,16598,2307,19146,21219,30310,13858,7118,31430,12950,22623,46854,27489,46521,16863,44999,45437,22769,38813,16173,48057,18591,47192,18788,11371,16061,28369,5938,56,18466,4064,7855,48196,22592,30836,30555,31883,28608,31342,15561,44244,18962,10788,21316,6176,10868,31021,12034,20162,32245,1417,45928,30105,42029,22879,43579,31158,43368,30027,32397,1221,1683,21977,25967,46209,4661,6176,5050,25568,19287,14210,31640,31952,23810,26774,34776,26435,1341,15183,6900,267,8656,27355,28469,1960,4391,49929,22874,11608,6465,7199,42870,18600,14621,11917,12642,3197,155,23975,5670,4375,7281,37249,40453,47330,40311,38561,28678,11964,32964,7248,35634,13659,25882,4432,7277,10376,38410,43322,48053,19751,3630,31990,14555,13511,10130,780,3671,3491,42714,36646,25810,30751,14312,45595,47036,30480,25562,24464,47348,23916,101,31661,41552,46204,47835,40524,1596,1984,6344,35862,26976,1095,34525,45299,2291,47264,14572,15881,8027,23270,45705,47868,4413,20804,45117,1042,47474,15849,6179,12860,20566,5699,35676,14027,48523,24366,28806,3978,14706,15329,3458,18989,46802,8585,18661,23397,9425,21509,1185,25384,20988,41565,6961,14306,2017,29633,26075,16729,2719,31071,495,41302,24205,33671,43485,6683,28080,48343,34104,21291,32315,40079,28419,23077,8169,20316,43788,16045,48475,34204,43778,13295,42411,17896,28077,35201,33988,337,40081,47558,43998,43978,42879,11105,32233,27039,23321,35847,17886,13385,13492,44004,40655,42423,31468,37661,4870,43944,18428,4615,46188,37177,17364,24224,34070,41409,8890,43409,5395,33015,14754,43502,39987,8580,26944,11102,48481,10952,10600,3889,46722,35321};
//     vector<int> bobSizes = {96204,49903,24905,71006,87520,36014,58214,47250,26606,22629,80294,20435,24239,56606,93392,239,56062,62235,15419,6434,88967,47673,71820,63738,95998,74234,2755,7812,91225,17133,32157,64252,10143,84257,7930,97329,26247,86871,56133,78077,35793,67669,89297,96995,64201,16149,11504,63859,88272,70903,57657,40502,73050,57410,815,25172,65200,21720,77505,86429,24866,52569,86173,63283,30795,14135,5005,25360,59340,25757,6378,89212,38135,63228,53309,93490,42937,75753,84927,31857,6128,13343,63847,45262,58095,87467,74588,97231,86099,64839,45103,76800,71266,33057,45297,2095,99089,24215,63001,32233,63303,68430,21207,4538,23068,85324,23664,52212,67146,193,92261,3486,41795,54115,62736,87941,96942,10493,88290,62875,60357,29432,54574,35885,60705,35802,29225,78513,11654,32,85622,13784,20970,94867,31317,42552,76541,40363,82976,23631,98747,64252,62577,76911,49653,47567,42857,29195,45888,95906,65242,49907,12332,57643,86691,31658,33155,49877,14469,49971,82975,3407,75738,78664,74553,31904,19732,23292,41467,24960,56357,97561,95856,61833,53710,52093,47935,44555,32818,67670,45728,83608,75129,5567,79983,83708,6758,27654,33954,779,88766,41119,93329,73183,3252,86047,55608,73739,31683,19244,6896,63388,46862,76758,44450,14278,2069,3590,485,47883,22644,57856,62019,65023,16997,15591,19839,2864,34313,24043,23532,52925,89481,4532,88205,23816,63887,90676,7286,61492,13082,90272,31758,92032,3564,8983,12963,23295,10278,91828,74910,44294,21733,77928,38964,50954,70180,84484,22230,63879,228,52489,20912,40461,71831,11579,20337,50620,92945,42926,2469,80466,27937,47608,61368,19197,56192,70878,862,87281,21205,52044,91233,68155,64758,74614,537,34421,7031,11023,57649,44218,42194,64742,1677,50065,92218,38166,25247,82195,7244,76912,37096,42888,17329,55132,16581,92469,64872,38278,72474,86055,56102,30800,80057,18262,55068,95733,57875,32547,6926,62897,67535,26202,64051,62503,12256,69456,65490,93456,15262,41862,6872,18979,15781,82305,29325,7671,61050,35435,76590,2549,22863,74616,21468,44748,83346,98156,58915,11510,18147,67820,40927,42976,2512,85053,3950,19195,52771,47270,63965,34129,75488,63751,99628,29572,90889,23344,18381,75847,17120,72089,98159,8652,37873,23948,21777,62201,57599,76697,34176,27346,22596,8630,18569,80439,62281,86891,17872,92560,13664,80118,94608,61823,99974,17331,5609,46503,88521,78512,16244,43705,64388,91083,39152,88684,44424,87679,90187,98704,48159,1309,60173,27787,66030,66051,94259,34634,83254,43391,43566,94128,21468,21357,2822,96648,74273,64890,50626,36993,33312,19221,98475,868,40698,20518,17951,64027,99011,5125,77071,32157,72215,11062,82521,52188,4110,51892,29432,68063,21049,7990,66679,7777,98481,29124,97967,28309,85092,80625,58112,59119,94518,60497,93855,61111,34437,40171,38546,83048,99758,44764,55183,51715,76298,9090,99270,67162,10921,68328,64225,47334,55744,42116,92878,61126,25735,76395,25953,17918,50264,4094,18461,22443,17856,40168,96578,7615,82324,33479,53716,46310,75871,96786,63444,64616,20783,25847,33772,7137};
//     vector<int> ans = fairCandySwap(aliceSizes, bobSizes);
//     for (const int &element : ans)
//     {
//         cout << element << " ";
//     }
// }