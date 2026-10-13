package cd;

import android.content.Context;
import android.media.MediaCodec;
import android.media.MediaCrypto;
import android.media.MediaFormat;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.view.Surface;
import androidx.lifecycle.c0;
import fi.r0;
import java.nio.ByteBuffer;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Locale;
import ke.d0;

/* loaded from: classes3.dex */
public final class c implements l {

    /* renamed from: d, reason: collision with root package name */
    public int f3407d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f3408e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f3409i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f3410v;

    /* renamed from: w, reason: collision with root package name */
    public final Object f3411w;

    /* JADX WARN: Removed duplicated region for block: B:100:0x01e9  */
    /* JADX WARN: Removed duplicated region for block: B:103:0x01f7  */
    /* JADX WARN: Removed duplicated region for block: B:106:0x0205  */
    /* JADX WARN: Removed duplicated region for block: B:109:0x0213  */
    /* JADX WARN: Removed duplicated region for block: B:112:0x0221  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x022f  */
    /* JADX WARN: Removed duplicated region for block: B:118:0x023d  */
    /* JADX WARN: Removed duplicated region for block: B:121:0x024b  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x0259  */
    /* JADX WARN: Removed duplicated region for block: B:127:0x0267  */
    /* JADX WARN: Removed duplicated region for block: B:130:0x0275  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x0283  */
    /* JADX WARN: Removed duplicated region for block: B:136:0x0291  */
    /* JADX WARN: Removed duplicated region for block: B:139:0x029f  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0053  */
    /* JADX WARN: Removed duplicated region for block: B:142:0x02ad  */
    /* JADX WARN: Removed duplicated region for block: B:145:0x02bb  */
    /* JADX WARN: Removed duplicated region for block: B:148:0x02c9  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x02d7  */
    /* JADX WARN: Removed duplicated region for block: B:154:0x02e5  */
    /* JADX WARN: Removed duplicated region for block: B:157:0x02f3  */
    /* JADX WARN: Removed duplicated region for block: B:160:0x0301  */
    /* JADX WARN: Removed duplicated region for block: B:163:0x030f  */
    /* JADX WARN: Removed duplicated region for block: B:166:0x031d  */
    /* JADX WARN: Removed duplicated region for block: B:169:0x032b  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0061  */
    /* JADX WARN: Removed duplicated region for block: B:172:0x0339  */
    /* JADX WARN: Removed duplicated region for block: B:175:0x0347  */
    /* JADX WARN: Removed duplicated region for block: B:178:0x0355  */
    /* JADX WARN: Removed duplicated region for block: B:181:0x0363  */
    /* JADX WARN: Removed duplicated region for block: B:184:0x0371  */
    /* JADX WARN: Removed duplicated region for block: B:187:0x037f  */
    /* JADX WARN: Removed duplicated region for block: B:190:0x038d  */
    /* JADX WARN: Removed duplicated region for block: B:193:0x039b  */
    /* JADX WARN: Removed duplicated region for block: B:196:0x03a9  */
    /* JADX WARN: Removed duplicated region for block: B:199:0x03b7  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x006f  */
    /* JADX WARN: Removed duplicated region for block: B:202:0x03c5  */
    /* JADX WARN: Removed duplicated region for block: B:205:0x03d3  */
    /* JADX WARN: Removed duplicated region for block: B:208:0x03e1  */
    /* JADX WARN: Removed duplicated region for block: B:211:0x03ef  */
    /* JADX WARN: Removed duplicated region for block: B:214:0x03fd  */
    /* JADX WARN: Removed duplicated region for block: B:217:0x040b  */
    /* JADX WARN: Removed duplicated region for block: B:220:0x0419  */
    /* JADX WARN: Removed duplicated region for block: B:223:0x0427  */
    /* JADX WARN: Removed duplicated region for block: B:226:0x0435  */
    /* JADX WARN: Removed duplicated region for block: B:229:0x0443  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x007d  */
    /* JADX WARN: Removed duplicated region for block: B:232:0x0451  */
    /* JADX WARN: Removed duplicated region for block: B:235:0x045f  */
    /* JADX WARN: Removed duplicated region for block: B:238:0x046d  */
    /* JADX WARN: Removed duplicated region for block: B:241:0x047b  */
    /* JADX WARN: Removed duplicated region for block: B:244:0x0489  */
    /* JADX WARN: Removed duplicated region for block: B:247:0x0497  */
    /* JADX WARN: Removed duplicated region for block: B:250:0x04a5  */
    /* JADX WARN: Removed duplicated region for block: B:253:0x04b3  */
    /* JADX WARN: Removed duplicated region for block: B:256:0x04c1  */
    /* JADX WARN: Removed duplicated region for block: B:259:0x04cf  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x008b  */
    /* JADX WARN: Removed duplicated region for block: B:262:0x04dd  */
    /* JADX WARN: Removed duplicated region for block: B:265:0x04eb  */
    /* JADX WARN: Removed duplicated region for block: B:268:0x04f9  */
    /* JADX WARN: Removed duplicated region for block: B:271:0x0507  */
    /* JADX WARN: Removed duplicated region for block: B:274:0x0515  */
    /* JADX WARN: Removed duplicated region for block: B:277:0x0523  */
    /* JADX WARN: Removed duplicated region for block: B:280:0x0531  */
    /* JADX WARN: Removed duplicated region for block: B:283:0x053f  */
    /* JADX WARN: Removed duplicated region for block: B:286:0x054d  */
    /* JADX WARN: Removed duplicated region for block: B:289:0x055b  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0099  */
    /* JADX WARN: Removed duplicated region for block: B:292:0x0569  */
    /* JADX WARN: Removed duplicated region for block: B:295:0x0577  */
    /* JADX WARN: Removed duplicated region for block: B:298:0x0585  */
    /* JADX WARN: Removed duplicated region for block: B:301:0x0593  */
    /* JADX WARN: Removed duplicated region for block: B:304:0x05a1  */
    /* JADX WARN: Removed duplicated region for block: B:307:0x05af  */
    /* JADX WARN: Removed duplicated region for block: B:310:0x05bd  */
    /* JADX WARN: Removed duplicated region for block: B:313:0x05cb  */
    /* JADX WARN: Removed duplicated region for block: B:316:0x05d9  */
    /* JADX WARN: Removed duplicated region for block: B:319:0x05e7  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00a7  */
    /* JADX WARN: Removed duplicated region for block: B:322:0x05f5  */
    /* JADX WARN: Removed duplicated region for block: B:325:0x0603  */
    /* JADX WARN: Removed duplicated region for block: B:328:0x0611  */
    /* JADX WARN: Removed duplicated region for block: B:331:0x061f  */
    /* JADX WARN: Removed duplicated region for block: B:334:0x062d  */
    /* JADX WARN: Removed duplicated region for block: B:337:0x063b  */
    /* JADX WARN: Removed duplicated region for block: B:340:0x0649  */
    /* JADX WARN: Removed duplicated region for block: B:343:0x0657  */
    /* JADX WARN: Removed duplicated region for block: B:346:0x0665  */
    /* JADX WARN: Removed duplicated region for block: B:349:0x0673  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00b5  */
    /* JADX WARN: Removed duplicated region for block: B:352:0x0681  */
    /* JADX WARN: Removed duplicated region for block: B:355:0x068f  */
    /* JADX WARN: Removed duplicated region for block: B:358:0x069d  */
    /* JADX WARN: Removed duplicated region for block: B:361:0x06ab  */
    /* JADX WARN: Removed duplicated region for block: B:364:0x06b9  */
    /* JADX WARN: Removed duplicated region for block: B:367:0x06c7  */
    /* JADX WARN: Removed duplicated region for block: B:370:0x06d5  */
    /* JADX WARN: Removed duplicated region for block: B:373:0x06e3  */
    /* JADX WARN: Removed duplicated region for block: B:376:0x06f1  */
    /* JADX WARN: Removed duplicated region for block: B:379:0x06ff  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00c3  */
    /* JADX WARN: Removed duplicated region for block: B:382:0x070d  */
    /* JADX WARN: Removed duplicated region for block: B:385:0x071b  */
    /* JADX WARN: Removed duplicated region for block: B:388:0x0729  */
    /* JADX WARN: Removed duplicated region for block: B:391:0x0737  */
    /* JADX WARN: Removed duplicated region for block: B:394:0x0745  */
    /* JADX WARN: Removed duplicated region for block: B:397:0x0753  */
    /* JADX WARN: Removed duplicated region for block: B:400:0x0761  */
    /* JADX WARN: Removed duplicated region for block: B:403:0x076f  */
    /* JADX WARN: Removed duplicated region for block: B:406:0x077d  */
    /* JADX WARN: Removed duplicated region for block: B:409:0x078b  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00d1  */
    /* JADX WARN: Removed duplicated region for block: B:412:0x0799  */
    /* JADX WARN: Removed duplicated region for block: B:415:0x07a7  */
    /* JADX WARN: Removed duplicated region for block: B:418:0x07b5  */
    /* JADX WARN: Removed duplicated region for block: B:421:0x07c3  */
    /* JADX WARN: Removed duplicated region for block: B:424:0x07d1  */
    /* JADX WARN: Removed duplicated region for block: B:427:0x07df  */
    /* JADX WARN: Removed duplicated region for block: B:430:0x07ed  */
    /* JADX WARN: Removed duplicated region for block: B:433:0x07fb  */
    /* JADX WARN: Removed duplicated region for block: B:436:0x0809  */
    /* JADX WARN: Removed duplicated region for block: B:439:0x0817  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00df  */
    /* JADX WARN: Removed duplicated region for block: B:442:0x0825  */
    /* JADX WARN: Removed duplicated region for block: B:445:0x0833  */
    /* JADX WARN: Removed duplicated region for block: B:448:0x0841  */
    /* JADX WARN: Removed duplicated region for block: B:451:0x084f  */
    /* JADX WARN: Removed duplicated region for block: B:454:0x085d  */
    /* JADX WARN: Removed duplicated region for block: B:457:0x086b  */
    /* JADX WARN: Removed duplicated region for block: B:460:0x0879  */
    /* JADX WARN: Removed duplicated region for block: B:463:0x0887  */
    /* JADX WARN: Removed duplicated region for block: B:466:0x0895  */
    /* JADX WARN: Removed duplicated region for block: B:469:0x08a3  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00ed  */
    /* JADX WARN: Removed duplicated region for block: B:472:0x08b1  */
    /* JADX WARN: Removed duplicated region for block: B:475:0x08bf  */
    /* JADX WARN: Removed duplicated region for block: B:478:0x08cd  */
    /* JADX WARN: Removed duplicated region for block: B:481:0x08db  */
    /* JADX WARN: Removed duplicated region for block: B:484:0x08e9  */
    /* JADX WARN: Removed duplicated region for block: B:487:0x08f7  */
    /* JADX WARN: Removed duplicated region for block: B:490:0x0905  */
    /* JADX WARN: Removed duplicated region for block: B:493:0x0913  */
    /* JADX WARN: Removed duplicated region for block: B:496:0x0921  */
    /* JADX WARN: Removed duplicated region for block: B:499:0x092f  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00fb  */
    /* JADX WARN: Removed duplicated region for block: B:502:0x093d  */
    /* JADX WARN: Removed duplicated region for block: B:505:0x094b  */
    /* JADX WARN: Removed duplicated region for block: B:508:0x0959  */
    /* JADX WARN: Removed duplicated region for block: B:511:0x0967  */
    /* JADX WARN: Removed duplicated region for block: B:514:0x0975  */
    /* JADX WARN: Removed duplicated region for block: B:517:0x0983  */
    /* JADX WARN: Removed duplicated region for block: B:520:0x0991  */
    /* JADX WARN: Removed duplicated region for block: B:523:0x099f  */
    /* JADX WARN: Removed duplicated region for block: B:526:0x09ad  */
    /* JADX WARN: Removed duplicated region for block: B:529:0x09bb  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x0109  */
    /* JADX WARN: Removed duplicated region for block: B:532:0x09c9  */
    /* JADX WARN: Removed duplicated region for block: B:535:0x09d7  */
    /* JADX WARN: Removed duplicated region for block: B:538:0x09e5  */
    /* JADX WARN: Removed duplicated region for block: B:541:0x09f3  */
    /* JADX WARN: Removed duplicated region for block: B:544:0x0a01  */
    /* JADX WARN: Removed duplicated region for block: B:547:0x0a0f  */
    /* JADX WARN: Removed duplicated region for block: B:550:0x0a1d  */
    /* JADX WARN: Removed duplicated region for block: B:553:0x0a2b  */
    /* JADX WARN: Removed duplicated region for block: B:556:0x0a39  */
    /* JADX WARN: Removed duplicated region for block: B:559:0x0a47  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0117  */
    /* JADX WARN: Removed duplicated region for block: B:562:0x0a55  */
    /* JADX WARN: Removed duplicated region for block: B:565:0x0a63  */
    /* JADX WARN: Removed duplicated region for block: B:568:0x0a71  */
    /* JADX WARN: Removed duplicated region for block: B:571:0x0a7f  */
    /* JADX WARN: Removed duplicated region for block: B:574:0x0a8d  */
    /* JADX WARN: Removed duplicated region for block: B:577:0x0a9b  */
    /* JADX WARN: Removed duplicated region for block: B:580:0x0aa9  */
    /* JADX WARN: Removed duplicated region for block: B:583:0x0ab7  */
    /* JADX WARN: Removed duplicated region for block: B:586:0x0ac5  */
    /* JADX WARN: Removed duplicated region for block: B:589:0x0ad3  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0125  */
    /* JADX WARN: Removed duplicated region for block: B:592:0x0ae1  */
    /* JADX WARN: Removed duplicated region for block: B:595:0x0aef  */
    /* JADX WARN: Removed duplicated region for block: B:598:0x0afd  */
    /* JADX WARN: Removed duplicated region for block: B:601:0x0b0b  */
    /* JADX WARN: Removed duplicated region for block: B:604:0x0b19  */
    /* JADX WARN: Removed duplicated region for block: B:607:0x0b27  */
    /* JADX WARN: Removed duplicated region for block: B:610:0x0b35  */
    /* JADX WARN: Removed duplicated region for block: B:613:0x0b43  */
    /* JADX WARN: Removed duplicated region for block: B:616:0x0b51  */
    /* JADX WARN: Removed duplicated region for block: B:619:0x0b5f  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0133  */
    /* JADX WARN: Removed duplicated region for block: B:622:0x0b6d  */
    /* JADX WARN: Removed duplicated region for block: B:625:0x0b7b  */
    /* JADX WARN: Removed duplicated region for block: B:628:0x0b89  */
    /* JADX WARN: Removed duplicated region for block: B:631:0x0b97  */
    /* JADX WARN: Removed duplicated region for block: B:634:0x0ba5  */
    /* JADX WARN: Removed duplicated region for block: B:637:0x0bb3  */
    /* JADX WARN: Removed duplicated region for block: B:640:0x0bc1  */
    /* JADX WARN: Removed duplicated region for block: B:643:0x0bcf  */
    /* JADX WARN: Removed duplicated region for block: B:646:0x0bdd  */
    /* JADX WARN: Removed duplicated region for block: B:649:0x0beb  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x0141  */
    /* JADX WARN: Removed duplicated region for block: B:652:0x0bf9  */
    /* JADX WARN: Removed duplicated region for block: B:655:0x0c07  */
    /* JADX WARN: Removed duplicated region for block: B:658:0x0c15  */
    /* JADX WARN: Removed duplicated region for block: B:661:0x0c23  */
    /* JADX WARN: Removed duplicated region for block: B:664:0x0c31  */
    /* JADX WARN: Removed duplicated region for block: B:667:0x0c3f  */
    /* JADX WARN: Removed duplicated region for block: B:670:0x0c4d  */
    /* JADX WARN: Removed duplicated region for block: B:673:0x0c5b  */
    /* JADX WARN: Removed duplicated region for block: B:676:0x0c69  */
    /* JADX WARN: Removed duplicated region for block: B:679:0x0c77  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x014f  */
    /* JADX WARN: Removed duplicated region for block: B:682:0x0c85  */
    /* JADX WARN: Removed duplicated region for block: B:685:0x0c93  */
    /* JADX WARN: Removed duplicated region for block: B:688:0x0ca1  */
    /* JADX WARN: Removed duplicated region for block: B:691:0x0caf  */
    /* JADX WARN: Removed duplicated region for block: B:694:0x0cbd  */
    /* JADX WARN: Removed duplicated region for block: B:697:0x0cca  */
    /* JADX WARN: Removed duplicated region for block: B:700:0x0cd7  */
    /* JADX WARN: Removed duplicated region for block: B:703:0x0ce4  */
    /* JADX WARN: Removed duplicated region for block: B:706:0x0cf0  */
    /* JADX WARN: Removed duplicated region for block: B:709:0x0cfb  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x015d  */
    /* JADX WARN: Removed duplicated region for block: B:712:0x0d06  */
    /* JADX WARN: Removed duplicated region for block: B:715:0x0d11  */
    /* JADX WARN: Removed duplicated region for block: B:718:0x0d1c  */
    /* JADX WARN: Removed duplicated region for block: B:721:0x0d27  */
    /* JADX WARN: Removed duplicated region for block: B:724:0x0d32  */
    /* JADX WARN: Removed duplicated region for block: B:728:0x0d3f  */
    /* JADX WARN: Removed duplicated region for block: B:732:0x0d46  */
    /* JADX WARN: Removed duplicated region for block: B:733:0x0d4d  */
    /* JADX WARN: Removed duplicated region for block: B:734:0x0d54  */
    /* JADX WARN: Removed duplicated region for block: B:735:0x0d5b  */
    /* JADX WARN: Removed duplicated region for block: B:736:0x0d62  */
    /* JADX WARN: Removed duplicated region for block: B:737:0x0d69  */
    /* JADX WARN: Removed duplicated region for block: B:738:0x0d70  */
    /* JADX WARN: Removed duplicated region for block: B:739:0x0d77  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x016b  */
    /* JADX WARN: Removed duplicated region for block: B:740:0x0d7e  */
    /* JADX WARN: Removed duplicated region for block: B:741:0x0d85  */
    /* JADX WARN: Removed duplicated region for block: B:742:0x0d8c  */
    /* JADX WARN: Removed duplicated region for block: B:743:0x0d93  */
    /* JADX WARN: Removed duplicated region for block: B:744:0x0d9a  */
    /* JADX WARN: Removed duplicated region for block: B:745:0x0da1  */
    /* JADX WARN: Removed duplicated region for block: B:746:0x0da8  */
    /* JADX WARN: Removed duplicated region for block: B:747:0x0daf  */
    /* JADX WARN: Removed duplicated region for block: B:748:0x0db6  */
    /* JADX WARN: Removed duplicated region for block: B:749:0x0dbd  */
    /* JADX WARN: Removed duplicated region for block: B:750:0x0dc4  */
    /* JADX WARN: Removed duplicated region for block: B:751:0x0dcb  */
    /* JADX WARN: Removed duplicated region for block: B:752:0x0dd2  */
    /* JADX WARN: Removed duplicated region for block: B:753:0x0dd9  */
    /* JADX WARN: Removed duplicated region for block: B:754:0x0de0  */
    /* JADX WARN: Removed duplicated region for block: B:755:0x0de7  */
    /* JADX WARN: Removed duplicated region for block: B:756:0x0dee  */
    /* JADX WARN: Removed duplicated region for block: B:757:0x0df5  */
    /* JADX WARN: Removed duplicated region for block: B:758:0x0dfc  */
    /* JADX WARN: Removed duplicated region for block: B:759:0x0e03  */
    /* JADX WARN: Removed duplicated region for block: B:760:0x0e0a  */
    /* JADX WARN: Removed duplicated region for block: B:761:0x0e11  */
    /* JADX WARN: Removed duplicated region for block: B:762:0x0e18  */
    /* JADX WARN: Removed duplicated region for block: B:763:0x0e1f  */
    /* JADX WARN: Removed duplicated region for block: B:764:0x0e26  */
    /* JADX WARN: Removed duplicated region for block: B:765:0x0e2d  */
    /* JADX WARN: Removed duplicated region for block: B:766:0x0e34  */
    /* JADX WARN: Removed duplicated region for block: B:767:0x0e3b  */
    /* JADX WARN: Removed duplicated region for block: B:768:0x0e42  */
    /* JADX WARN: Removed duplicated region for block: B:769:0x0e49  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x0179  */
    /* JADX WARN: Removed duplicated region for block: B:770:0x0e50  */
    /* JADX WARN: Removed duplicated region for block: B:771:0x0e57  */
    /* JADX WARN: Removed duplicated region for block: B:772:0x0e5e  */
    /* JADX WARN: Removed duplicated region for block: B:773:0x0e65  */
    /* JADX WARN: Removed duplicated region for block: B:774:0x0e6c  */
    /* JADX WARN: Removed duplicated region for block: B:775:0x0e73  */
    /* JADX WARN: Removed duplicated region for block: B:776:0x0e7a  */
    /* JADX WARN: Removed duplicated region for block: B:777:0x0e81  */
    /* JADX WARN: Removed duplicated region for block: B:778:0x0e88  */
    /* JADX WARN: Removed duplicated region for block: B:779:0x0e8f  */
    /* JADX WARN: Removed duplicated region for block: B:780:0x0e96  */
    /* JADX WARN: Removed duplicated region for block: B:781:0x0e9d  */
    /* JADX WARN: Removed duplicated region for block: B:782:0x0ea4  */
    /* JADX WARN: Removed duplicated region for block: B:783:0x0eab  */
    /* JADX WARN: Removed duplicated region for block: B:784:0x0eb2  */
    /* JADX WARN: Removed duplicated region for block: B:785:0x0eb9  */
    /* JADX WARN: Removed duplicated region for block: B:786:0x0ec0  */
    /* JADX WARN: Removed duplicated region for block: B:787:0x0ec7  */
    /* JADX WARN: Removed duplicated region for block: B:788:0x0ece  */
    /* JADX WARN: Removed duplicated region for block: B:789:0x0ed5  */
    /* JADX WARN: Removed duplicated region for block: B:790:0x0edc  */
    /* JADX WARN: Removed duplicated region for block: B:791:0x0ee3  */
    /* JADX WARN: Removed duplicated region for block: B:792:0x0eea  */
    /* JADX WARN: Removed duplicated region for block: B:793:0x0ef1  */
    /* JADX WARN: Removed duplicated region for block: B:794:0x0ef8  */
    /* JADX WARN: Removed duplicated region for block: B:795:0x0eff  */
    /* JADX WARN: Removed duplicated region for block: B:796:0x0f06  */
    /* JADX WARN: Removed duplicated region for block: B:797:0x0f0d  */
    /* JADX WARN: Removed duplicated region for block: B:798:0x0f14  */
    /* JADX WARN: Removed duplicated region for block: B:799:0x0f1b  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0187  */
    /* JADX WARN: Removed duplicated region for block: B:800:0x0f22  */
    /* JADX WARN: Removed duplicated region for block: B:801:0x0f29  */
    /* JADX WARN: Removed duplicated region for block: B:802:0x0f30  */
    /* JADX WARN: Removed duplicated region for block: B:803:0x0f37  */
    /* JADX WARN: Removed duplicated region for block: B:804:0x0f3e  */
    /* JADX WARN: Removed duplicated region for block: B:805:0x0f45  */
    /* JADX WARN: Removed duplicated region for block: B:806:0x0f4c  */
    /* JADX WARN: Removed duplicated region for block: B:807:0x0f53  */
    /* JADX WARN: Removed duplicated region for block: B:808:0x0f5a  */
    /* JADX WARN: Removed duplicated region for block: B:809:0x0f61  */
    /* JADX WARN: Removed duplicated region for block: B:810:0x0f68  */
    /* JADX WARN: Removed duplicated region for block: B:811:0x0f6f  */
    /* JADX WARN: Removed duplicated region for block: B:812:0x0f76  */
    /* JADX WARN: Removed duplicated region for block: B:813:0x0f7d  */
    /* JADX WARN: Removed duplicated region for block: B:814:0x0f84  */
    /* JADX WARN: Removed duplicated region for block: B:815:0x0f8b  */
    /* JADX WARN: Removed duplicated region for block: B:816:0x0f92  */
    /* JADX WARN: Removed duplicated region for block: B:817:0x0f99  */
    /* JADX WARN: Removed duplicated region for block: B:818:0x0fa0  */
    /* JADX WARN: Removed duplicated region for block: B:819:0x0fa7  */
    /* JADX WARN: Removed duplicated region for block: B:820:0x0fae  */
    /* JADX WARN: Removed duplicated region for block: B:821:0x0fb5  */
    /* JADX WARN: Removed duplicated region for block: B:822:0x0fbc  */
    /* JADX WARN: Removed duplicated region for block: B:823:0x0fc3  */
    /* JADX WARN: Removed duplicated region for block: B:824:0x0fca  */
    /* JADX WARN: Removed duplicated region for block: B:825:0x0fd1  */
    /* JADX WARN: Removed duplicated region for block: B:826:0x0fd8  */
    /* JADX WARN: Removed duplicated region for block: B:827:0x0fdf  */
    /* JADX WARN: Removed duplicated region for block: B:828:0x0fe6  */
    /* JADX WARN: Removed duplicated region for block: B:829:0x0fed  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x0195  */
    /* JADX WARN: Removed duplicated region for block: B:830:0x0ff4  */
    /* JADX WARN: Removed duplicated region for block: B:831:0x0ffb  */
    /* JADX WARN: Removed duplicated region for block: B:832:0x1002  */
    /* JADX WARN: Removed duplicated region for block: B:833:0x1009  */
    /* JADX WARN: Removed duplicated region for block: B:834:0x1010  */
    /* JADX WARN: Removed duplicated region for block: B:835:0x1017  */
    /* JADX WARN: Removed duplicated region for block: B:836:0x101e  */
    /* JADX WARN: Removed duplicated region for block: B:837:0x1025  */
    /* JADX WARN: Removed duplicated region for block: B:838:0x102c  */
    /* JADX WARN: Removed duplicated region for block: B:839:0x1033  */
    /* JADX WARN: Removed duplicated region for block: B:840:0x103a  */
    /* JADX WARN: Removed duplicated region for block: B:841:0x1041  */
    /* JADX WARN: Removed duplicated region for block: B:842:0x1048  */
    /* JADX WARN: Removed duplicated region for block: B:843:0x104f  */
    /* JADX WARN: Removed duplicated region for block: B:844:0x1056  */
    /* JADX WARN: Removed duplicated region for block: B:845:0x105d  */
    /* JADX WARN: Removed duplicated region for block: B:846:0x1064  */
    /* JADX WARN: Removed duplicated region for block: B:847:0x106b  */
    /* JADX WARN: Removed duplicated region for block: B:848:0x1072  */
    /* JADX WARN: Removed duplicated region for block: B:849:0x1079  */
    /* JADX WARN: Removed duplicated region for block: B:850:0x1080  */
    /* JADX WARN: Removed duplicated region for block: B:851:0x1087  */
    /* JADX WARN: Removed duplicated region for block: B:852:0x108e  */
    /* JADX WARN: Removed duplicated region for block: B:853:0x1095  */
    /* JADX WARN: Removed duplicated region for block: B:854:0x109c  */
    /* JADX WARN: Removed duplicated region for block: B:855:0x10a3  */
    /* JADX WARN: Removed duplicated region for block: B:856:0x10aa  */
    /* JADX WARN: Removed duplicated region for block: B:857:0x10b1  */
    /* JADX WARN: Removed duplicated region for block: B:858:0x10b8  */
    /* JADX WARN: Removed duplicated region for block: B:859:0x10bf  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x01a3  */
    /* JADX WARN: Removed duplicated region for block: B:860:0x10c6  */
    /* JADX WARN: Removed duplicated region for block: B:861:0x10cd  */
    /* JADX WARN: Removed duplicated region for block: B:862:0x10d4  */
    /* JADX WARN: Removed duplicated region for block: B:863:0x10db  */
    /* JADX WARN: Removed duplicated region for block: B:864:0x10e2  */
    /* JADX WARN: Removed duplicated region for block: B:865:0x10e9  */
    /* JADX WARN: Removed duplicated region for block: B:866:0x10f0  */
    /* JADX WARN: Removed duplicated region for block: B:867:0x10f7  */
    /* JADX WARN: Removed duplicated region for block: B:868:0x10fe  */
    /* JADX WARN: Removed duplicated region for block: B:869:0x1105  */
    /* JADX WARN: Removed duplicated region for block: B:870:0x110c  */
    /* JADX WARN: Removed duplicated region for block: B:871:0x1113  */
    /* JADX WARN: Removed duplicated region for block: B:872:0x111a  */
    /* JADX WARN: Removed duplicated region for block: B:873:0x1121  */
    /* JADX WARN: Removed duplicated region for block: B:874:0x1128  */
    /* JADX WARN: Removed duplicated region for block: B:875:0x112f  */
    /* JADX WARN: Removed duplicated region for block: B:876:0x1136  */
    /* JADX WARN: Removed duplicated region for block: B:877:0x113d  */
    /* JADX WARN: Removed duplicated region for block: B:878:0x1144  */
    /* JADX WARN: Removed duplicated region for block: B:879:0x114b  */
    /* JADX WARN: Removed duplicated region for block: B:880:0x1152  */
    /* JADX WARN: Removed duplicated region for block: B:881:0x1159  */
    /* JADX WARN: Removed duplicated region for block: B:882:0x1160  */
    /* JADX WARN: Removed duplicated region for block: B:883:0x1166  */
    /* JADX WARN: Removed duplicated region for block: B:884:0x116c  */
    /* JADX WARN: Removed duplicated region for block: B:885:0x1172  */
    /* JADX WARN: Removed duplicated region for block: B:886:0x1178  */
    /* JADX WARN: Removed duplicated region for block: B:887:0x117e  */
    /* JADX WARN: Removed duplicated region for block: B:888:0x1184  */
    /* JADX WARN: Removed duplicated region for block: B:889:0x118a  */
    /* JADX WARN: Removed duplicated region for block: B:88:0x01b1  */
    /* JADX WARN: Removed duplicated region for block: B:890:0x1190  */
    /* JADX WARN: Removed duplicated region for block: B:891:0x1196  */
    /* JADX WARN: Removed duplicated region for block: B:892:0x119c  */
    /* JADX WARN: Removed duplicated region for block: B:893:0x11a2  */
    /* JADX WARN: Removed duplicated region for block: B:894:0x11a8  */
    /* JADX WARN: Removed duplicated region for block: B:895:0x11ae  */
    /* JADX WARN: Removed duplicated region for block: B:896:0x11b4  */
    /* JADX WARN: Removed duplicated region for block: B:897:0x11ba  */
    /* JADX WARN: Removed duplicated region for block: B:91:0x01bf  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x01cd  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x01db  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public c(Context context) {
        String B;
        int[] iArr;
        TelephonyManager telephonyManager;
        this.f3409i = context == null ? null : context.getApplicationContext();
        int i5 = d0.a;
        if (context != null && (telephonyManager = (TelephonyManager) context.getSystemService("phone")) != null) {
            String networkCountryIso = telephonyManager.getNetworkCountryIso();
            if (!TextUtils.isEmpty(networkCountryIso)) {
                B = tn.g.B(networkCountryIso);
                r0 r0Var = ie.s.f10737n;
                B.getClass();
                switch (B) {
                    case "AD":
                    case "CW":
                        iArr = new int[]{2, 2, 0, 0, 2, 2};
                        break;
                    case "AE":
                        iArr = new int[]{1, 4, 3, 4, 4, 2};
                        break;
                    case "AF":
                    case "PG":
                        iArr = new int[]{4, 3, 3, 3, 2, 2};
                        break;
                    case "AG":
                        iArr = new int[]{2, 4, 3, 4, 2, 2};
                        break;
                    case "AI":
                    case "BB":
                    case "BM":
                    case "BQ":
                    case "DM":
                    case "FO":
                        iArr = new int[]{0, 2, 0, 0, 2, 2};
                        break;
                    case "AL":
                        iArr = new int[]{1, 1, 1, 3, 2, 2};
                        break;
                    case "AM":
                        iArr = new int[]{2, 3, 2, 3, 2, 2};
                        break;
                    case "AO":
                        iArr = new int[]{4, 4, 4, 3, 2, 2};
                        break;
                    case "AQ":
                    case "ER":
                    case "SH":
                        iArr = new int[]{4, 2, 2, 2, 2, 2};
                        break;
                    case "AS":
                        iArr = new int[]{2, 2, 3, 3, 2, 2};
                        break;
                    case "AT":
                        iArr = new int[]{1, 2, 1, 4, 1, 4};
                        break;
                    case "AU":
                        iArr = new int[]{0, 2, 1, 1, 3, 0};
                        break;
                    case "AW":
                    case "GU":
                        iArr = new int[]{1, 2, 4, 4, 2, 2};
                        break;
                    case "AX":
                    case "CX":
                    case "LI":
                    case "MP":
                    case "MS":
                    case "PM":
                    case "SM":
                    case "VA":
                        iArr = new int[]{0, 2, 2, 2, 2, 2};
                        break;
                    case "AZ":
                    case "BF":
                    case "DZ":
                        iArr = new int[]{3, 3, 4, 4, 2, 2};
                        break;
                    case "BA":
                    case "IE":
                        iArr = new int[]{1, 1, 1, 1, 2, 2};
                        break;
                    case "BD":
                    case "KZ":
                        iArr = new int[]{2, 1, 2, 2, 2, 2};
                        break;
                    case "BE":
                        iArr = new int[]{0, 1, 4, 4, 3, 2};
                        break;
                    case "BG":
                    case "ES":
                    case "GR":
                    case "SI":
                        iArr = new int[]{0, 0, 0, 0, 1, 2};
                        break;
                    case "BH":
                        iArr = new int[]{1, 3, 1, 4, 4, 2};
                        break;
                    case "BI":
                    case "HT":
                    case "MG":
                    case "NE":
                    case "TD":
                    case "VE":
                    case "YE":
                        iArr = new int[]{4, 4, 4, 4, 2, 2};
                        break;
                    case "BJ":
                        iArr = new int[]{4, 4, 2, 3, 2, 2};
                        break;
                    case "BL":
                    case "MF":
                    case "PY":
                        iArr = new int[]{1, 2, 2, 2, 2, 2};
                        break;
                    case "BN":
                        iArr = new int[]{3, 2, 0, 1, 2, 2};
                        break;
                    case "BO":
                        iArr = new int[]{1, 2, 3, 2, 2, 2};
                        break;
                    case "BR":
                        iArr = new int[]{1, 1, 2, 1, 1, 0};
                        break;
                    case "BS":
                    case "LB":
                        iArr = new int[]{3, 2, 1, 2, 2, 2};
                        break;
                    case "BT":
                    case "MZ":
                    case "WS":
                        iArr = new int[]{3, 1, 2, 1, 2, 2};
                        break;
                    case "BW":
                        iArr = new int[]{3, 2, 1, 0, 2, 2};
                        break;
                    case "BY":
                        iArr = new int[]{1, 1, 2, 3, 2, 2};
                        break;
                    case "BZ":
                    case "CK":
                        iArr = new int[]{2, 2, 2, 1, 2, 2};
                        break;
                    case "CA":
                        iArr = new int[]{0, 2, 3, 3, 3, 3};
                        break;
                    case "CD":
                    case "KM":
                        iArr = new int[]{4, 3, 3, 2, 2, 2};
                        break;
                    case "CF":
                    case "SB":
                        iArr = new int[]{4, 2, 4, 2, 2, 2};
                        break;
                    case "CG":
                    case "GH":
                        iArr = new int[]{3, 3, 3, 3, 2, 2};
                        break;
                    case "CH":
                        iArr = new int[]{0, 0, 0, 0, 0, 3};
                        break;
                    case "CI":
                    case "EG":
                        iArr = new int[]{3, 4, 3, 3, 2, 2};
                        break;
                    case "CL":
                        iArr = new int[]{1, 1, 2, 1, 3, 2};
                        break;
                    case "CM":
                        iArr = new int[]{4, 3, 3, 4, 2, 2};
                        break;
                    case "CN":
                        iArr = new int[]{2, 0, 4, 3, 3, 1};
                        break;
                    case "CO":
                        iArr = new int[]{2, 3, 4, 2, 2, 2};
                        break;
                    case "CR":
                        iArr = new int[]{2, 4, 4, 4, 2, 2};
                        break;
                    case "CU":
                    case "KI":
                        iArr = new int[]{4, 2, 4, 3, 2, 2};
                        break;
                    case "CV":
                        iArr = new int[]{2, 3, 0, 1, 2, 2};
                        break;
                    case "CY":
                    case "HR":
                    case "LV":
                        iArr = new int[]{1, 0, 0, 0, 0, 2};
                        break;
                    case "CZ":
                        iArr = new int[]{0, 0, 2, 0, 1, 2};
                        break;
                    case "DE":
                        iArr = new int[]{0, 1, 3, 2, 2, 2};
                        break;
                    case "DJ":
                    case "SY":
                    case "TJ":
                        iArr = new int[]{4, 3, 4, 4, 2, 2};
                        break;
                    case "DK":
                    case "EE":
                    case "HU":
                    case "LT":
                    case "MT":
                        iArr = new int[]{0, 0, 0, 0, 0, 2};
                        break;
                    case "DO":
                        iArr = new int[]{3, 4, 4, 4, 4, 2};
                        break;
                    case "EC":
                        iArr = new int[]{1, 3, 2, 1, 2, 2};
                        break;
                    case "ET":
                    case "SN":
                        iArr = new int[]{4, 4, 3, 2, 2, 2};
                        break;
                    case "FI":
                        iArr = new int[]{0, 0, 0, 2, 0, 2};
                        break;
                    case "FJ":
                        iArr = new int[]{3, 1, 2, 3, 2, 2};
                        break;
                    case "FM":
                        iArr = new int[]{4, 2, 3, 0, 2, 2};
                        break;
                    case "FR":
                        iArr = new int[]{1, 1, 2, 1, 1, 2};
                        break;
                    case "GA":
                    case "TG":
                        iArr = new int[]{3, 4, 1, 0, 2, 2};
                        break;
                    case "GB":
                        iArr = new int[]{0, 1, 1, 2, 1, 2};
                        break;
                    case "GD":
                    case "KN":
                    case "KY":
                    case "LC":
                    case "SX":
                    case "VC":
                        iArr = new int[]{1, 2, 0, 0, 2, 2};
                        break;
                    case "GE":
                        iArr = new int[]{1, 0, 0, 2, 2, 2};
                        break;
                    case "GF":
                    case "PK":
                    case "SL":
                        iArr = new int[]{3, 2, 3, 3, 2, 2};
                        break;
                    case "GG":
                        iArr = new int[]{0, 2, 1, 0, 2, 2};
                        break;
                    case "GI":
                    case "JE":
                        iArr = new int[]{1, 2, 0, 1, 2, 2};
                        break;
                    case "GL":
                    case "TK":
                        iArr = new int[]{2, 2, 2, 4, 2, 2};
                        break;
                    case "GM":
                        iArr = new int[]{4, 3, 2, 4, 2, 2};
                        break;
                    case "GN":
                        iArr = new int[]{4, 4, 4, 2, 2, 2};
                        break;
                    case "GP":
                        iArr = new int[]{3, 1, 1, 3, 2, 2};
                        break;
                    case "GQ":
                        iArr = new int[]{4, 4, 3, 3, 2, 2};
                        break;
                    case "GT":
                        iArr = new int[]{2, 2, 2, 1, 1, 2};
                        break;
                    case "GW":
                        iArr = new int[]{4, 4, 2, 2, 2, 2};
                        break;
                    case "GY":
                        iArr = new int[]{3, 0, 1, 1, 2, 2};
                        break;
                    case "HK":
                        iArr = new int[]{0, 1, 1, 3, 2, 0};
                        break;
                    case "HN":
                        iArr = new int[]{3, 3, 2, 2, 2, 2};
                        break;
                    case "ID":
                        iArr = new int[]{3, 1, 1, 2, 3, 2};
                        break;
                    case "IL":
                        iArr = new int[]{1, 2, 2, 3, 4, 2};
                        break;
                    case "IM":
                        iArr = new int[]{0, 2, 0, 1, 2, 2};
                        break;
                    case "IN":
                        iArr = new int[]{1, 1, 2, 1, 2, 1};
                        break;
                    case "IO":
                    case "TV":
                    case "WF":
                        iArr = new int[]{4, 2, 2, 4, 2, 2};
                        break;
                    case "IQ":
                    case "SJ":
                        iArr = new int[]{3, 2, 2, 2, 2, 2};
                        break;
                    case "IR":
                        iArr = new int[]{4, 2, 3, 3, 4, 2};
                        break;
                    case "IS":
                        iArr = new int[]{0, 0, 1, 0, 0, 2};
                        break;
                    case "IT":
                        iArr = new int[]{0, 0, 1, 1, 1, 2};
                        break;
                    case "JM":
                        iArr = new int[]{2, 4, 2, 1, 2, 2};
                        break;
                    case "JO":
                        iArr = new int[]{2, 0, 1, 1, 2, 2};
                        break;
                    case "JP":
                        iArr = new int[]{0, 3, 3, 3, 4, 4};
                        break;
                    case "KE":
                        iArr = new int[]{3, 2, 2, 1, 2, 2};
                        break;
                    case "KG":
                    case "MQ":
                        iArr = new int[]{2, 1, 1, 2, 2, 2};
                        break;
                    case "KH":
                        iArr = new int[]{1, 0, 4, 2, 2, 2};
                        break;
                    case "KR":
                        iArr = new int[]{0, 2, 2, 4, 4, 4};
                        break;
                    case "KW":
                        iArr = new int[]{1, 0, 1, 0, 0, 2};
                        break;
                    case "LA":
                        iArr = new int[]{1, 2, 1, 3, 2, 2};
                        break;
                    case "LK":
                        iArr = new int[]{3, 2, 3, 4, 4, 2};
                        break;
                    case "LR":
                        iArr = new int[]{3, 4, 3, 4, 2, 2};
                        break;
                    case "LS":
                    case "UG":
                        iArr = new int[]{3, 3, 3, 2, 2, 2};
                        break;
                    case "LU":
                        iArr = new int[]{1, 1, 4, 2, 0, 2};
                        break;
                    case "LY":
                    case "TO":
                    case "ZW":
                        iArr = new int[]{3, 2, 4, 3, 2, 2};
                        break;
                    case "MA":
                        iArr = new int[]{3, 3, 2, 1, 2, 2};
                        break;
                    case "MC":
                        iArr = new int[]{0, 2, 2, 0, 2, 2};
                        break;
                    case "MD":
                        iArr = new int[]{1, 0, 0, 0, 2, 2};
                        break;
                    case "ME":
                        iArr = new int[]{2, 0, 0, 1, 1, 2};
                        break;
                    case "MH":
                        iArr = new int[]{4, 2, 1, 3, 2, 2};
                        break;
                    case "MK":
                        iArr = new int[]{2, 0, 0, 1, 3, 2};
                        break;
                    case "ML":
                    case "TZ":
                        iArr = new int[]{3, 4, 2, 2, 2, 2};
                        break;
                    case "MM":
                        iArr = new int[]{2, 2, 2, 3, 4, 2};
                        break;
                    case "MN":
                        iArr = new int[]{2, 0, 1, 2, 2, 2};
                        break;
                    case "MO":
                        iArr = new int[]{0, 2, 4, 4, 4, 2};
                        break;
                    case "MR":
                        iArr = new int[]{4, 2, 3, 4, 2, 2};
                        break;
                    case "MU":
                    case "SA":
                        iArr = new int[]{3, 1, 1, 2, 2, 2};
                        break;
                    case "MV":
                        iArr = new int[]{3, 4, 1, 3, 3, 2};
                        break;
                    case "MW":
                        iArr = new int[]{4, 2, 3, 3, 2, 2};
                        break;
                    case "MX":
                        iArr = new int[]{3, 4, 4, 4, 2, 2};
                        break;
                    case "MY":
                        iArr = new int[]{1, 0, 4, 1, 2, 2};
                        break;
                    case "NA":
                        iArr = new int[]{3, 4, 3, 2, 2, 2};
                        break;
                    case "NC":
                        iArr = new int[]{3, 2, 3, 4, 2, 2};
                        break;
                    case "NG":
                        iArr = new int[]{3, 4, 2, 1, 2, 2};
                        break;
                    case "NI":
                        iArr = new int[]{2, 3, 4, 3, 2, 2};
                        break;
                    case "NL":
                        iArr = new int[]{0, 2, 3, 3, 0, 4};
                        break;
                    case "NO":
                        iArr = new int[]{0, 1, 2, 1, 1, 2};
                        break;
                    case "NP":
                        iArr = new int[]{2, 1, 4, 3, 2, 2};
                        break;
                    case "NR":
                        iArr = new int[]{4, 0, 3, 2, 2, 2};
                        break;
                    case "NU":
                        iArr = new int[]{4, 2, 2, 1, 2, 2};
                        break;
                    case "NZ":
                        iArr = new int[]{1, 0, 2, 2, 4, 2};
                        break;
                    case "OM":
                        iArr = new int[]{2, 3, 1, 3, 4, 2};
                        break;
                    case "PA":
                        iArr = new int[]{2, 3, 3, 3, 2, 2};
                        break;
                    case "PE":
                        iArr = new int[]{1, 2, 4, 4, 3, 2};
                        break;
                    case "PF":
                    case "SV":
                        iArr = new int[]{2, 3, 3, 1, 2, 2};
                        break;
                    case "PH":
                        iArr = new int[]{2, 1, 3, 2, 2, 0};
                        break;
                    case "PL":
                        iArr = new int[]{2, 1, 2, 2, 4, 2};
                        break;
                    case "PR":
                        iArr = new int[]{2, 0, 2, 0, 2, 1};
                        break;
                    case "PS":
                        iArr = new int[]{3, 4, 1, 4, 2, 2};
                        break;
                    case "PT":
                        iArr = new int[]{1, 0, 0, 0, 1, 2};
                        break;
                    case "PW":
                        iArr = new int[]{2, 2, 4, 2, 2, 2};
                        break;
                    case "QA":
                        iArr = new int[]{1, 4, 4, 4, 4, 2};
                        break;
                    case "RE":
                        iArr = new int[]{1, 2, 2, 3, 1, 2};
                        break;
                    case "RO":
                        iArr = new int[]{0, 0, 1, 2, 1, 2};
                        break;
                    case "RS":
                        iArr = new int[]{2, 0, 0, 0, 2, 2};
                        break;
                    case "RU":
                        iArr = new int[]{1, 0, 0, 0, 3, 3};
                        break;
                    case "RW":
                        iArr = new int[]{3, 3, 1, 0, 2, 2};
                        break;
                    case "SC":
                        iArr = new int[]{4, 3, 1, 1, 2, 2};
                        break;
                    case "SD":
                        iArr = new int[]{4, 3, 4, 2, 2, 2};
                        break;
                    case "SE":
                        iArr = new int[]{0, 1, 1, 1, 0, 2};
                        break;
                    case "SG":
                        iArr = new int[]{2, 3, 3, 3, 3, 3};
                        break;
                    case "SK":
                        iArr = new int[]{1, 1, 1, 1, 3, 2};
                        break;
                    case "SO":
                        iArr = new int[]{3, 2, 2, 4, 4, 2};
                        break;
                    case "SR":
                        iArr = new int[]{2, 4, 3, 0, 2, 2};
                        break;
                    case "SS":
                    case "TM":
                        iArr = new int[]{4, 2, 2, 3, 2, 2};
                        break;
                    case "ST":
                        iArr = new int[]{2, 2, 1, 2, 2, 2};
                        break;
                    case "SZ":
                        iArr = new int[]{4, 4, 3, 4, 2, 2};
                        break;
                    case "TC":
                        iArr = new int[]{2, 2, 1, 3, 2, 2};
                        break;
                    case "TH":
                        iArr = new int[]{0, 1, 2, 1, 2, 2};
                        break;
                    case "TL":
                        iArr = new int[]{4, 2, 4, 4, 2, 2};
                        break;
                    case "TN":
                    case "UY":
                        iArr = new int[]{2, 1, 1, 1, 2, 2};
                        break;
                    case "TR":
                        iArr = new int[]{1, 0, 0, 1, 3, 2};
                        break;
                    case "TT":
                        iArr = new int[]{1, 4, 0, 0, 2, 2};
                        break;
                    case "TW":
                        iArr = new int[]{0, 2, 0, 0, 0, 0};
                        break;
                    case "UA":
                        iArr = new int[]{0, 1, 1, 2, 4, 2};
                        break;
                    case "US":
                        iArr = new int[]{1, 1, 4, 1, 3, 1};
                        break;
                    case "UZ":
                        iArr = new int[]{2, 2, 3, 4, 3, 2};
                        break;
                    case "VG":
                        iArr = new int[]{2, 2, 0, 1, 2, 2};
                        break;
                    case "VI":
                        iArr = new int[]{0, 2, 1, 2, 2, 2};
                        break;
                    case "VN":
                        iArr = new int[]{0, 0, 1, 2, 2, 1};
                        break;
                    case "VU":
                        iArr = new int[]{4, 3, 3, 1, 2, 2};
                        break;
                    case "XK":
                        iArr = new int[]{1, 2, 1, 1, 2, 2};
                        break;
                    case "YT":
                        iArr = new int[]{2, 3, 3, 4, 2, 2};
                        break;
                    case "ZA":
                        iArr = new int[]{2, 3, 2, 1, 2, 2};
                        break;
                    case "ZM":
                        iArr = new int[]{4, 4, 4, 3, 3, 2};
                        break;
                    default:
                        iArr = new int[]{2, 2, 2, 2, 2, 2};
                        break;
                }
                HashMap hashMap = new HashMap(8);
                hashMap.put(0, 1000000L);
                r0 r0Var2 = ie.s.f10737n;
                hashMap.put(2, (Long) r0Var2.get(iArr[0]));
                hashMap.put(3, (Long) ie.s.f10738o.get(iArr[1]));
                hashMap.put(4, (Long) ie.s.f10739p.get(iArr[2]));
                hashMap.put(5, (Long) ie.s.f10740q.get(iArr[3]));
                hashMap.put(10, (Long) ie.s.f10741r.get(iArr[4]));
                hashMap.put(9, (Long) ie.s.f10742s.get(iArr[5]));
                hashMap.put(7, (Long) r0Var2.get(iArr[0]));
                this.f3410v = hashMap;
                this.f3407d = 2000;
                this.f3411w = ke.y.a;
                this.f3408e = true;
            }
        }
        B = tn.g.B(Locale.getDefault().getCountry());
        r0 r0Var3 = ie.s.f10737n;
        B.getClass();
        switch (B) {
            case 2083:
                break;
            case 2084:
                break;
            case 2085:
                break;
            case 2086:
                break;
            case 2088:
                break;
            case 2091:
                break;
            case 2092:
                break;
            case 2094:
                break;
            case 2096:
                break;
            case 2098:
                break;
            case 2099:
                break;
            case 2100:
                break;
            case 2102:
                break;
            case 2103:
                break;
            case 2105:
                break;
            case 2111:
                break;
            case 2112:
                break;
            case 2114:
                break;
            case 2115:
                break;
            case 2116:
                break;
            case 2117:
                break;
            case 2118:
                break;
            case 2119:
                break;
            case 2120:
                break;
            case 2122:
                break;
            case 2123:
                break;
            case 2124:
                break;
            case 2125:
                break;
            case 2127:
                break;
            case 2128:
                break;
            case 2129:
                break;
            case 2130:
                break;
            case 2133:
                break;
            case 2135:
                break;
            case 2136:
                break;
            case 2142:
                break;
            case 2145:
                break;
            case 2147:
                break;
            case 2148:
                break;
            case 2149:
                break;
            case 2150:
                break;
            case 2152:
                break;
            case 2153:
                break;
            case 2154:
                break;
            case 2155:
                break;
            case 2156:
                break;
            case 2159:
                break;
            case 2162:
                break;
            case 2163:
                break;
            case 2164:
                break;
            case 2165:
                break;
            case 2166:
                break;
            case 2167:
                break;
            case 2177:
                break;
            case 2182:
                break;
            case 2183:
                break;
            case 2185:
                break;
            case 2187:
                break;
            case 2198:
                break;
            case 2206:
                break;
            case 2208:
                break;
            case 2210:
                break;
            case 2221:
                break;
            case 2222:
                break;
            case 2223:
                break;
            case 2243:
                break;
            case 2244:
                break;
            case 2247:
                break;
            case 2249:
                break;
            case 2252:
                break;
            case 2266:
                break;
            case 2267:
                break;
            case 2269:
                break;
            case 2270:
                break;
            case 2271:
                break;
            case 2272:
                break;
            case 2273:
                break;
            case 2274:
                break;
            case 2277:
                break;
            case 2278:
                break;
            case 2279:
                break;
            case 2281:
                break;
            case 2282:
                break;
            case 2283:
                break;
            case 2285:
                break;
            case 2286:
                break;
            case 2288:
                break;
            case 2290:
                break;
            case 2307:
                break;
            case 2310:
                break;
            case 2314:
                break;
            case 2316:
                break;
            case 2317:
                break;
            case 2331:
                break;
            case 2332:
                break;
            case 2339:
                break;
            case 2340:
                break;
            case 2341:
                break;
            case 2342:
                break;
            case 2344:
                break;
            case 2345:
                break;
            case 2346:
                break;
            case 2347:
                break;
            case 2363:
                break;
            case 2371:
                break;
            case 2373:
                break;
            case 2374:
                break;
            case 2394:
                break;
            case 2396:
                break;
            case 2397:
                break;
            case 2398:
                break;
            case 2402:
                break;
            case 2403:
                break;
            case 2407:
                break;
            case 2412:
                break;
            case 2414:
                break;
            case 2415:
                break;
            case 2421:
                break;
            case 2422:
                break;
            case 2423:
                break;
            case 2429:
                break;
            case 2431:
                break;
            case 2438:
                break;
            case 2439:
                break;
            case 2440:
                break;
            case 2441:
                break;
            case 2442:
                break;
            case 2445:
                break;
            case 2452:
                break;
            case 2454:
                break;
            case 2455:
                break;
            case 2456:
                break;
            case 2457:
                break;
            case 2458:
                break;
            case 2459:
                break;
            case 2462:
                break;
            case 2463:
                break;
            case 2464:
                break;
            case 2465:
                break;
            case 2466:
                break;
            case 2467:
                break;
            case 2468:
                break;
            case 2469:
                break;
            case 2470:
                break;
            case 2471:
                break;
            case 2472:
                break;
            case 2473:
                break;
            case 2474:
                break;
            case 2475:
                break;
            case 2476:
                break;
            case 2477:
                break;
            case 2483:
                break;
            case 2485:
                break;
            case 2487:
                break;
            case 2489:
                break;
            case 2491:
                break;
            case 2494:
                break;
            case 2497:
                break;
            case 2498:
                break;
            case 2500:
                break;
            case 2503:
                break;
            case 2508:
                break;
            case 2526:
                break;
            case 2545:
                break;
            case 2549:
                break;
            case 2550:
                break;
            case 2551:
                break;
            case 2552:
                break;
            case 2555:
                break;
            case 2556:
                break;
            case 2557:
                break;
            case 2562:
                break;
            case 2563:
                break;
            case 2564:
                break;
            case 2567:
                break;
            case 2569:
                break;
            case 2576:
                break;
            case 2611:
                break;
            case 2621:
                break;
            case 2625:
                break;
            case 2627:
                break;
            case 2629:
                break;
            case 2638:
                break;
            case 2639:
                break;
            case 2640:
                break;
            case 2641:
                break;
            case 2642:
                break;
            case 2644:
                break;
            case 2645:
                break;
            case 2646:
                break;
            case 2647:
                break;
            case 2648:
                break;
            case 2649:
                break;
            case 2650:
                break;
            case 2651:
                break;
            case 2652:
                break;
            case 2655:
                break;
            case 2656:
                break;
            case 2657:
                break;
            case 2659:
                break;
            case 2661:
                break;
            case 2662:
                break;
            case 2663:
                break;
            case 2671:
                break;
            case 2672:
                break;
            case 2675:
                break;
            case 2676:
                break;
            case 2678:
                break;
            case 2679:
                break;
            case 2680:
                break;
            case 2681:
                break;
            case 2682:
                break;
            case 2683:
                break;
            case 2686:
                break;
            case 2688:
                break;
            case 2690:
                break;
            case 2691:
                break;
            case 2694:
                break;
            case 2700:
                break;
            case 2706:
                break;
            case 2718:
                break;
            case 2724:
                break;
            case 2725:
                break;
            case 2731:
                break;
            case 2733:
                break;
            case 2735:
                break;
            case 2737:
                break;
            case 2739:
                break;
            case 2744:
                break;
            case 2751:
                break;
            case 2767:
                break;
            case 2780:
                break;
            case 2803:
                break;
            case 2828:
                break;
            case 2843:
                break;
            case 2855:
                break;
            case 2867:
                break;
            case 2877:
                break;
        }
        HashMap hashMap2 = new HashMap(8);
        hashMap2.put(0, 1000000L);
        r0 r0Var22 = ie.s.f10737n;
        hashMap2.put(2, (Long) r0Var22.get(iArr[0]));
        hashMap2.put(3, (Long) ie.s.f10738o.get(iArr[1]));
        hashMap2.put(4, (Long) ie.s.f10739p.get(iArr[2]));
        hashMap2.put(5, (Long) ie.s.f10740q.get(iArr[3]));
        hashMap2.put(10, (Long) ie.s.f10741r.get(iArr[4]));
        hashMap2.put(9, (Long) ie.s.f10742s.get(iArr[5]));
        hashMap2.put(7, (Long) r0Var22.get(iArr[0]));
        this.f3410v = hashMap2;
        this.f3407d = 2000;
        this.f3411w = ke.y.a;
        this.f3408e = true;
    }

    public static void a(c cVar, MediaFormat mediaFormat, Surface surface, MediaCrypto mediaCrypto) {
        g gVar = (g) cVar.f3410v;
        MediaCodec mediaCodec = (MediaCodec) cVar.f3409i;
        HandlerThread handlerThread = gVar.f3424b;
        ke.b.k(gVar.f3425c == null);
        handlerThread.start();
        Handler handler = new Handler(handlerThread.getLooper());
        mediaCodec.setCallback(gVar, handler);
        gVar.f3425c = handler;
        ke.b.c("configureCodec");
        mediaCodec.configure(mediaFormat, surface, mediaCrypto, 0);
        ke.b.t();
        f fVar = (f) cVar.f3411w;
        HandlerThread handlerThread2 = fVar.f3419b;
        if (!fVar.f3423f) {
            handlerThread2.start();
            fVar.f3420c = new d(fVar, handlerThread2.getLooper(), 0);
            fVar.f3423f = true;
        }
        ke.b.c("startCodec");
        mediaCodec.start();
        ke.b.t();
        cVar.f3407d = 1;
    }

    public static String b(int i5, String str) {
        StringBuilder sb2 = new StringBuilder(str);
        if (i5 == 1) {
            sb2.append("Audio");
        } else if (i5 == 2) {
            sb2.append("Video");
        } else {
            sb2.append("Unknown(");
            sb2.append(i5);
            sb2.append(")");
        }
        return sb2.toString();
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0033 A[Catch: all -> 0x0035, DONT_GENERATE, TryCatch #0 {all -> 0x0035, blocks: (B:6:0x0016, B:8:0x001a, B:10:0x001e, B:12:0x0028, B:18:0x0033, B:21:0x0038, B:25:0x0042, B:27:0x0044, B:29:0x004a, B:30:0x0071, B:34:0x0067, B:37:0x0073, B:38:0x0075, B:39:0x0076, B:40:0x0078), top: B:5:0x0016 }] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0038 A[Catch: all -> 0x0035, TryCatch #0 {all -> 0x0035, blocks: (B:6:0x0016, B:8:0x001a, B:10:0x001e, B:12:0x0028, B:18:0x0033, B:21:0x0038, B:25:0x0042, B:27:0x0044, B:29:0x004a, B:30:0x0071, B:34:0x0067, B:37:0x0073, B:38:0x0075, B:39:0x0076, B:40:0x0078), top: B:5:0x0016 }] */
    @Override // cd.l
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int B(MediaCodec.BufferInfo bufferInfo) {
        boolean z5;
        RuntimeException runtimeException = (RuntimeException) ((f) this.f3411w).f3421d.getAndSet(null);
        if (runtimeException != null) {
            throw runtimeException;
        }
        g gVar = (g) this.f3410v;
        synchronized (gVar.a) {
            try {
                IllegalStateException illegalStateException = gVar.f3433m;
                if (illegalStateException != null) {
                    gVar.f3433m = null;
                    throw illegalStateException;
                }
                MediaCodec.CodecException codecException = gVar.j;
                if (codecException != null) {
                    gVar.j = null;
                    throw codecException;
                }
                boolean z6 = true;
                if (gVar.k <= 0 && !gVar.f3432l) {
                    z5 = false;
                    if (!z5) {
                        return -1;
                    }
                    bd.e eVar = gVar.f3427e;
                    if (eVar.f2803i != 0) {
                        z6 = false;
                    }
                    if (z6) {
                        return -1;
                    }
                    int e9 = eVar.e();
                    if (e9 >= 0) {
                        ke.b.l(gVar.f3430h);
                        MediaCodec.BufferInfo bufferInfo2 = (MediaCodec.BufferInfo) gVar.f3428f.remove();
                        bufferInfo.set(bufferInfo2.offset, bufferInfo2.size, bufferInfo2.presentationTimeUs, bufferInfo2.flags);
                    } else if (e9 == -2) {
                        gVar.f3430h = (MediaFormat) gVar.f3429g.remove();
                    }
                    return e9;
                }
                z5 = true;
                if (!z5) {
                }
            } finally {
            }
        }
    }

    @Override // cd.l
    public void D(int i5) {
        ((MediaCodec) this.f3409i).setVideoScalingMode(i5);
    }

    @Override // cd.l
    public void F(le.h hVar, Handler handler) {
        ((MediaCodec) this.f3409i).setOnFrameRenderedListener(new a(this, hVar, 0), handler);
    }

    @Override // cd.l
    public void flush() {
        ((f) this.f3411w).a();
        ((MediaCodec) this.f3409i).flush();
        g gVar = (g) this.f3410v;
        synchronized (gVar.a) {
            gVar.k++;
            Handler handler = gVar.f3425c;
            int i5 = d0.a;
            handler.post(new c0(4, gVar));
        }
        ((MediaCodec) this.f3409i).start();
    }

    @Override // cd.l
    public ByteBuffer getInputBuffer(int i5) {
        return ((MediaCodec) this.f3409i).getInputBuffer(i5);
    }

    @Override // cd.l
    public ByteBuffer getOutputBuffer(int i5) {
        return ((MediaCodec) this.f3409i).getOutputBuffer(i5);
    }

    @Override // cd.l
    public MediaFormat getOutputFormat() {
        MediaFormat mediaFormat;
        g gVar = (g) this.f3410v;
        synchronized (gVar.a) {
            try {
                mediaFormat = gVar.f3430h;
                if (mediaFormat == null) {
                    throw new IllegalStateException();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return mediaFormat;
    }

    @Override // cd.l
    public void m(int i5, mc.c cVar, long j) {
        f fVar = (f) this.f3411w;
        RuntimeException runtimeException = (RuntimeException) fVar.f3421d.getAndSet(null);
        if (runtimeException != null) {
            throw runtimeException;
        }
        e b10 = f.b();
        b10.a = i5;
        b10.f3413b = 0;
        b10.f3415d = j;
        b10.f3416e = 0;
        MediaCodec.CryptoInfo cryptoInfo = b10.f3414c;
        cryptoInfo.numSubSamples = cVar.f14431f;
        int[] iArr = cVar.f14429d;
        int[] iArr2 = cryptoInfo.numBytesOfClearData;
        if (iArr != null) {
            if (iArr2 == null || iArr2.length < iArr.length) {
                iArr2 = Arrays.copyOf(iArr, iArr.length);
            } else {
                System.arraycopy(iArr, 0, iArr2, 0, iArr.length);
            }
        }
        cryptoInfo.numBytesOfClearData = iArr2;
        int[] iArr3 = cVar.f14430e;
        int[] iArr4 = cryptoInfo.numBytesOfEncryptedData;
        if (iArr3 != null) {
            if (iArr4 == null || iArr4.length < iArr3.length) {
                iArr4 = Arrays.copyOf(iArr3, iArr3.length);
            } else {
                System.arraycopy(iArr3, 0, iArr4, 0, iArr3.length);
            }
        }
        cryptoInfo.numBytesOfEncryptedData = iArr4;
        byte[] bArr = cVar.f14427b;
        byte[] bArr2 = cryptoInfo.key;
        if (bArr != null) {
            if (bArr2 == null || bArr2.length < bArr.length) {
                bArr2 = Arrays.copyOf(bArr, bArr.length);
            } else {
                System.arraycopy(bArr, 0, bArr2, 0, bArr.length);
            }
        }
        bArr2.getClass();
        cryptoInfo.key = bArr2;
        byte[] bArr3 = cVar.a;
        byte[] bArr4 = cryptoInfo.iv;
        if (bArr3 != null) {
            if (bArr4 == null || bArr4.length < bArr3.length) {
                bArr4 = Arrays.copyOf(bArr3, bArr3.length);
            } else {
                System.arraycopy(bArr3, 0, bArr4, 0, bArr3.length);
            }
        }
        bArr4.getClass();
        cryptoInfo.iv = bArr4;
        cryptoInfo.mode = cVar.f14428c;
        if (d0.a >= 24) {
            cryptoInfo.setPattern(new MediaCodec.CryptoInfo.Pattern(cVar.f14432g, cVar.f14433h));
        }
        fVar.f3420c.obtainMessage(1, b10).sendToTarget();
    }

    @Override // cd.l
    public void p(long j, int i5, int i6, int i10) {
        f fVar = (f) this.f3411w;
        RuntimeException runtimeException = (RuntimeException) fVar.f3421d.getAndSet(null);
        if (runtimeException != null) {
            throw runtimeException;
        }
        e b10 = f.b();
        b10.a = i5;
        b10.f3413b = i6;
        b10.f3415d = j;
        b10.f3416e = i10;
        d dVar = fVar.f3420c;
        int i11 = d0.a;
        dVar.obtainMessage(0, b10).sendToTarget();
    }

    @Override // cd.l
    public void release() {
        try {
            if (this.f3407d == 1) {
                f fVar = (f) this.f3411w;
                if (fVar.f3423f) {
                    fVar.a();
                    fVar.f3419b.quit();
                }
                fVar.f3423f = false;
                g gVar = (g) this.f3410v;
                synchronized (gVar.a) {
                    gVar.f3432l = true;
                    gVar.f3424b.quit();
                    gVar.a();
                }
            }
            this.f3407d = 2;
        } finally {
            if (!this.f3408e) {
                ((MediaCodec) this.f3409i).release();
                this.f3408e = true;
            }
        }
    }

    @Override // cd.l
    public void releaseOutputBuffer(int i5, boolean z5) {
        ((MediaCodec) this.f3409i).releaseOutputBuffer(i5, z5);
    }

    @Override // cd.l
    public void s(int i5, long j) {
        ((MediaCodec) this.f3409i).releaseOutputBuffer(i5, j);
    }

    @Override // cd.l
    public void setOutputSurface(Surface surface) {
        ((MediaCodec) this.f3409i).setOutputSurface(surface);
    }

    @Override // cd.l
    public void setParameters(Bundle bundle) {
        ((MediaCodec) this.f3409i).setParameters(bundle);
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0033 A[Catch: all -> 0x0035, DONT_GENERATE, TryCatch #0 {all -> 0x0035, blocks: (B:6:0x0016, B:8:0x001a, B:10:0x001e, B:12:0x0028, B:18:0x0033, B:21:0x0037, B:26:0x0046, B:28:0x0042, B:31:0x0048, B:32:0x004a, B:33:0x004b, B:34:0x004d), top: B:5:0x0016 }] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0037 A[Catch: all -> 0x0035, TryCatch #0 {all -> 0x0035, blocks: (B:6:0x0016, B:8:0x001a, B:10:0x001e, B:12:0x0028, B:18:0x0033, B:21:0x0037, B:26:0x0046, B:28:0x0042, B:31:0x0048, B:32:0x004a, B:33:0x004b, B:34:0x004d), top: B:5:0x0016 }] */
    @Override // cd.l
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int v() {
        boolean z5;
        RuntimeException runtimeException = (RuntimeException) ((f) this.f3411w).f3421d.getAndSet(null);
        if (runtimeException != null) {
            throw runtimeException;
        }
        g gVar = (g) this.f3410v;
        synchronized (gVar.a) {
            try {
                IllegalStateException illegalStateException = gVar.f3433m;
                if (illegalStateException != null) {
                    gVar.f3433m = null;
                    throw illegalStateException;
                }
                MediaCodec.CodecException codecException = gVar.j;
                if (codecException != null) {
                    gVar.j = null;
                    throw codecException;
                }
                boolean z6 = true;
                if (gVar.k <= 0 && !gVar.f3432l) {
                    z5 = false;
                    int i5 = -1;
                    if (!z5) {
                        return -1;
                    }
                    bd.e eVar = gVar.f3426d;
                    if (eVar.f2803i != 0) {
                        z6 = false;
                    }
                    if (!z6) {
                        i5 = eVar.e();
                    }
                    return i5;
                }
                z5 = true;
                int i52 = -1;
                if (!z5) {
                }
            } finally {
            }
        }
    }

    public c(MediaCodec mediaCodec, HandlerThread handlerThread, HandlerThread handlerThread2) {
        this.f3409i = mediaCodec;
        this.f3410v = new g(handlerThread);
        this.f3411w = new f(mediaCodec, handlerThread2);
        this.f3407d = 0;
    }
}
