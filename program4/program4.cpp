#include <iostream>
using namespace std;
int main(){
    double PI = 4; 
    bool sub = true;
    int numIter = 0;
    cout << "how many iterations do you want? ";
    cin >> numIter; 
        // this is to ajust for counting my 2 and starting at three 
    numIter *= 2;
    numIter += 3; 
    for(double i = 3; i < numIter; i += 2){
            // this math is to ajust for counting my 2 
        cout << "iteration " << (i - 2)/2 + 0.5<< ": ";
        
        if(sub){
            PI -= (4/i);
        }else{
            PI += (4/i);
        }
        sub = !sub; 
        cout << PI << endl; 
    }
    
    return 0; 
}



// ********** sample output ********** // 

/*
how many iterations do you want? 200
iteration 1: 2.66667
iteration 2: 3.46667
iteration 3: 2.89524
iteration 4: 3.33968
iteration 5: 2.97605
iteration 6: 3.28374
iteration 7: 3.01707
iteration 8: 3.25237
iteration 9: 3.04184
iteration 10: 3.23232
iteration 11: 3.0584
iteration 12: 3.2184
iteration 13: 3.07025
iteration 14: 3.20819
iteration 15: 3.07915
iteration 16: 3.20037
iteration 17: 3.08608
iteration 18: 3.19419
iteration 19: 3.09162
iteration 20: 3.18918
iteration 21: 3.09616
iteration 22: 3.18505
iteration 23: 3.09994
iteration 24: 3.18158
iteration 25: 3.10315
iteration 26: 3.17862
iteration 27: 3.10589
iteration 28: 3.17607
iteration 29: 3.10827
iteration 30: 3.17384
iteration 31: 3.11035
iteration 32: 3.17189
iteration 33: 3.11219
iteration 34: 3.17016
iteration 35: 3.11382
iteration 36: 3.16861
iteration 37: 3.11528
iteration 38: 3.16723
iteration 39: 3.1166
iteration 40: 3.16598
iteration 41: 3.11779
iteration 42: 3.16485
iteration 43: 3.11887
iteration 44: 3.16381
iteration 45: 3.11986
iteration 46: 3.16287
iteration 47: 3.12076
iteration 48: 3.162
iteration 49: 3.12159
iteration 50: 3.1612
iteration 51: 3.12236
iteration 52: 3.16046
iteration 53: 3.12308
iteration 54: 3.15977
iteration 55: 3.12374
iteration 56: 3.15914
iteration 57: 3.12435
iteration 58: 3.15854
iteration 59: 3.12493
iteration 60: 3.15798
iteration 61: 3.12546
iteration 62: 3.15746
iteration 63: 3.12597
iteration 64: 3.15698
iteration 65: 3.12644
iteration 66: 3.15652
iteration 67: 3.12689
iteration 68: 3.15608
iteration 69: 3.12731
iteration 70: 3.15568
iteration 71: 3.1277
iteration 72: 3.15529
iteration 73: 3.12808
iteration 74: 3.15493
iteration 75: 3.12844
iteration 76: 3.15458
iteration 77: 3.12877
iteration 78: 3.15425
iteration 79: 3.12909
iteration 80: 3.15394
iteration 81: 3.1294
iteration 82: 3.15364
iteration 83: 3.12969
iteration 84: 3.15336
iteration 85: 3.12997
iteration 86: 3.15309
iteration 87: 3.13023
iteration 88: 3.15283
iteration 89: 3.13048
iteration 90: 3.15258
iteration 91: 3.13072
iteration 92: 3.15235
iteration 93: 3.13095
iteration 94: 3.15212
iteration 95: 3.13118
iteration 96: 3.1519
iteration 97: 3.13139
iteration 98: 3.15169
iteration 99: 3.13159
iteration 100: 3.15149
iteration 101: 3.13179
iteration 102: 3.1513
iteration 103: 3.13198
iteration 104: 3.15112
iteration 105: 3.13216
iteration 106: 3.15094
iteration 107: 3.13233
iteration 108: 3.15077
iteration 109: 3.1325
iteration 110: 3.1506
iteration 111: 3.13266
iteration 112: 3.15044
iteration 113: 3.13282
iteration 114: 3.15029
iteration 115: 3.13297
iteration 116: 3.15014
iteration 117: 3.13312
iteration 118: 3.15
iteration 119: 3.13326
iteration 120: 3.14986
iteration 121: 3.1334
iteration 122: 3.14972
iteration 123: 3.13353
iteration 124: 3.14959
iteration 125: 3.13366
iteration 126: 3.14947
iteration 127: 3.13378
iteration 128: 3.14934
iteration 129: 3.1339
iteration 130: 3.14923
iteration 131: 3.13402
iteration 132: 3.14911
iteration 133: 3.13413
iteration 134: 3.149
iteration 135: 3.13424
iteration 136: 3.14889
iteration 137: 3.13435
iteration 138: 3.14879
iteration 139: 3.13445
iteration 140: 3.14868
iteration 141: 3.13455
iteration 142: 3.14859
iteration 143: 3.13465
iteration 144: 3.14849
iteration 145: 3.13474
iteration 146: 3.1484
iteration 147: 3.13484
iteration 148: 3.1483
iteration 149: 3.13493
iteration 150: 3.14822
iteration 151: 3.13501
iteration 152: 3.14813
iteration 153: 3.1351
iteration 154: 3.14804
iteration 155: 3.13518
iteration 156: 3.14796
iteration 157: 3.13526
iteration 158: 3.14788
iteration 159: 3.13534
iteration 160: 3.1478
iteration 161: 3.13542
iteration 162: 3.14773
iteration 163: 3.1355
iteration 164: 3.14765
iteration 165: 3.13557
iteration 166: 3.14758
iteration 167: 3.13564
iteration 168: 3.14751
iteration 169: 3.13571
iteration 170: 3.14744
iteration 171: 3.13578
iteration 172: 3.14737
iteration 173: 3.13585
iteration 174: 3.14731
iteration 175: 3.13591
iteration 176: 3.14724
iteration 177: 3.13597
iteration 178: 3.14718
iteration 179: 3.13604
iteration 180: 3.14712
iteration 181: 3.1361
iteration 182: 3.14706
iteration 183: 3.13616
iteration 184: 3.147
iteration 185: 3.13622
iteration 186: 3.14694
iteration 187: 3.13627
iteration 188: 3.14688
iteration 189: 3.13633
iteration 190: 3.14683
iteration 191: 3.13638
iteration 192: 3.14677
iteration 193: 3.13644
iteration 194: 3.14672
iteration 195: 3.13649
iteration 196: 3.14667
iteration 197: 3.13654
iteration 198: 3.14662
iteration 199: 3.13659
iteration 200: 3.14657
maxscott@maxs-MacBook-Pro program4 % 
*/