package le;

import android.content.Context;
import android.graphics.Point;
import android.media.MediaCodecInfo;
import android.media.MediaCrypto;
import android.media.MediaFormat;
import android.os.Bundle;
import android.os.Handler;
import android.os.SystemClock;
import android.util.Pair;
import android.view.Surface;
import cd.z;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.media.utils.DiscordVideoMediaSource;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.decoder.DecoderCounters;
import com.google.android.exoplayer2.decoder.DecoderReuseEvaluation;
import com.google.android.exoplayer2.video.VideoSize;
import fi.b0;
import fi.c0;
import fi.e0;
import fi.r0;
import hc.f0;
import hc.o1;
import hc.w;
import java.nio.ByteBuffer;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.regex.Pattern;
import ke.d0;
import ke.x;
import nd.q0;

/* loaded from: classes3.dex */
public final class i extends cd.s {
    public static final int[] K1 = {1920, 1600, 1440, 1280, 960, 854, DiscordVideoMediaSource.DEFAULT_WIDTH, 540, DiscordVideoMediaSource.DEFAULT_HEIGHT};
    public static boolean L1;
    public static boolean M1;
    public long A1;
    public long B1;
    public int C1;
    public long D1;
    public VideoSize E1;
    public VideoSize F1;
    public boolean G1;
    public int H1;
    public h I1;
    public o J1;

    /* renamed from: c1, reason: collision with root package name */
    public final Context f13879c1;

    /* renamed from: d1, reason: collision with root package name */
    public final t f13880d1;
    public final e4.l e1;

    /* renamed from: f1, reason: collision with root package name */
    public final a3.f f13881f1;

    /* renamed from: g1, reason: collision with root package name */
    public final long f13882g1;

    /* renamed from: h1, reason: collision with root package name */
    public final int f13883h1;

    /* renamed from: i1, reason: collision with root package name */
    public final boolean f13884i1;

    /* renamed from: j1, reason: collision with root package name */
    public hc.l f13885j1;

    /* renamed from: k1, reason: collision with root package name */
    public boolean f13886k1;

    /* renamed from: l1, reason: collision with root package name */
    public boolean f13887l1;

    /* renamed from: m1, reason: collision with root package name */
    public Surface f13888m1;

    /* renamed from: n1, reason: collision with root package name */
    public k f13889n1;

    /* renamed from: o1, reason: collision with root package name */
    public boolean f13890o1;

    /* renamed from: p1, reason: collision with root package name */
    public int f13891p1;

    /* renamed from: q1, reason: collision with root package name */
    public boolean f13892q1;

    /* renamed from: r1, reason: collision with root package name */
    public boolean f13893r1;

    /* renamed from: s1, reason: collision with root package name */
    public boolean f13894s1;

    /* renamed from: t1, reason: collision with root package name */
    public long f13895t1;

    /* renamed from: u1, reason: collision with root package name */
    public long f13896u1;

    /* renamed from: v1, reason: collision with root package name */
    public long f13897v1;

    /* renamed from: w1, reason: collision with root package name */
    public int f13898w1;

    /* renamed from: x1, reason: collision with root package name */
    public int f13899x1;

    /* renamed from: y1, reason: collision with root package name */
    public int f13900y1;

    /* renamed from: z1, reason: collision with root package name */
    public long f13901z1;

    public i(Context context, cd.k kVar, boolean z5, Handler handler, w wVar) {
        super(2, kVar, z5, 30.0f);
        this.f13882g1 = 5000L;
        this.f13883h1 = 50;
        Context applicationContext = context.getApplicationContext();
        this.f13879c1 = applicationContext;
        this.f13880d1 = new t(applicationContext);
        this.e1 = new e4.l(15, handler, wVar);
        a3.f fVar = new a3.f();
        fVar.f56b = this;
        new ArrayDeque();
        new ArrayDeque();
        fVar.a = true;
        VideoSize videoSize = VideoSize.f5575w;
        this.f13881f1 = fVar;
        this.f13884i1 = "NVIDIA".equals(d0.f13295c);
        this.f13896u1 = -9223372036854775807L;
        this.f13891p1 = 1;
        this.E1 = VideoSize.f5575w;
        this.H1 = 0;
        this.F1 = null;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:396:0x0736, code lost:
    
        if (r0.equals("ELUGA_Ray_X") == false) goto L101;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x08b7, code lost:
    
        if (r13.equals("JSN-L21") == false) goto L664;
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:17:0x008b A[FALL_THROUGH] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean s0(String str) {
        boolean z5;
        boolean z6;
        boolean z7 = false;
        if (str.startsWith("OMX.google")) {
            return false;
        }
        synchronized (i.class) {
            try {
                if (!L1) {
                    int i5 = d0.a;
                    char c6 = 28;
                    if (i5 <= 28) {
                        String str2 = d0.f13294b;
                        str2.getClass();
                        switch (str2.hashCode()) {
                            case -1339091551:
                                if (str2.equals("dangal")) {
                                    z6 = false;
                                    break;
                                }
                                z6 = -1;
                                break;
                            case -1220081023:
                                if (str2.equals("dangalFHD")) {
                                    z6 = true;
                                    break;
                                }
                                z6 = -1;
                                break;
                            case -1220066608:
                                if (str2.equals("dangalUHD")) {
                                    z6 = 2;
                                    break;
                                }
                                z6 = -1;
                                break;
                            case -1012436106:
                                if (str2.equals("oneday")) {
                                    z6 = 3;
                                    break;
                                }
                                z6 = -1;
                                break;
                            case -760312546:
                                if (str2.equals("aquaman")) {
                                    z6 = 4;
                                    break;
                                }
                                z6 = -1;
                                break;
                            case -64886864:
                                if (str2.equals("magnolia")) {
                                    z6 = 5;
                                    break;
                                }
                                z6 = -1;
                                break;
                            case 3415681:
                                if (str2.equals("once")) {
                                    z6 = 6;
                                    break;
                                }
                                z6 = -1;
                                break;
                            case 825323514:
                                if (str2.equals("machuca")) {
                                    z6 = 7;
                                    break;
                                }
                                z6 = -1;
                                break;
                            default:
                                z6 = -1;
                                break;
                        }
                        switch (z6) {
                            case false:
                            case true:
                            case true:
                            case true:
                            case true:
                            case true:
                            case true:
                            case true:
                                z7 = true;
                                break;
                        }
                        M1 = z7;
                        L1 = true;
                    }
                    if (i5 > 27 || !"HWEML".equals(d0.f13294b)) {
                        String str3 = d0.f13296d;
                        str3.getClass();
                        switch (str3.hashCode()) {
                            case -349662828:
                                if (str3.equals("AFTJMST12")) {
                                    z5 = false;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case -321033677:
                                if (str3.equals("AFTKMST12")) {
                                    z5 = true;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 2006354:
                                if (str3.equals("AFTA")) {
                                    z5 = 2;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 2006367:
                                if (str3.equals("AFTN")) {
                                    z5 = 3;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 2006371:
                                if (str3.equals("AFTR")) {
                                    z5 = 4;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 1785421873:
                                if (str3.equals("AFTEU011")) {
                                    z5 = 5;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 1785421876:
                                if (str3.equals("AFTEU014")) {
                                    z5 = 6;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 1798172390:
                                if (str3.equals("AFTSO001")) {
                                    z5 = 7;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 2119412532:
                                if (str3.equals("AFTEUFF014")) {
                                    z5 = 8;
                                    break;
                                }
                                z5 = -1;
                                break;
                            default:
                                z5 = -1;
                                break;
                        }
                        switch (z5) {
                            default:
                                if (i5 <= 26) {
                                    String str4 = d0.f13294b;
                                    str4.getClass();
                                    switch (str4.hashCode()) {
                                        case -2144781245:
                                            if (str4.equals("GIONEE_SWW1609")) {
                                                c6 = 0;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -2144781185:
                                            if (str4.equals("GIONEE_SWW1627")) {
                                                c6 = 1;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -2144781160:
                                            if (str4.equals("GIONEE_SWW1631")) {
                                                c6 = 2;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -2097309513:
                                            if (str4.equals("K50a40")) {
                                                c6 = 3;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -2022874474:
                                            if (str4.equals("CP8676_I02")) {
                                                c6 = 4;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1978993182:
                                            if (str4.equals("NX541J")) {
                                                c6 = 5;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1978990237:
                                            if (str4.equals("NX573J")) {
                                                c6 = 6;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1936688988:
                                            if (str4.equals("PGN528")) {
                                                c6 = 7;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1936688066:
                                            if (str4.equals("PGN610")) {
                                                c6 = '\b';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1936688065:
                                            if (str4.equals("PGN611")) {
                                                c6 = '\t';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1931988508:
                                            if (str4.equals("AquaPowerM")) {
                                                c6 = '\n';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1885099851:
                                            if (str4.equals("RAIJIN")) {
                                                c6 = 11;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1696512866:
                                            if (str4.equals("XT1663")) {
                                                c6 = '\f';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1680025915:
                                            if (str4.equals("ComioS1")) {
                                                c6 = '\r';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1615810839:
                                            if (str4.equals("Phantom6")) {
                                                c6 = 14;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1600724499:
                                            if (str4.equals("pacificrim")) {
                                                c6 = 15;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1554255044:
                                            if (str4.equals("vernee_M5")) {
                                                c6 = 16;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1481772737:
                                            if (str4.equals("panell_dl")) {
                                                c6 = 17;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1481772730:
                                            if (str4.equals("panell_ds")) {
                                                c6 = 18;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1481772729:
                                            if (str4.equals("panell_dt")) {
                                                c6 = 19;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1320080169:
                                            if (str4.equals("GiONEE_GBL7319")) {
                                                c6 = 20;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1217592143:
                                            if (str4.equals("BRAVIA_ATV2")) {
                                                c6 = 21;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1180384755:
                                            if (str4.equals("iris60")) {
                                                c6 = 22;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1139198265:
                                            if (str4.equals("Slate_Pro")) {
                                                c6 = 23;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -1052835013:
                                            if (str4.equals("namath")) {
                                                c6 = 24;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -993250464:
                                            if (str4.equals("A10-70F")) {
                                                c6 = 25;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -993250458:
                                            if (str4.equals("A10-70L")) {
                                                c6 = 26;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -965403638:
                                            if (str4.equals("s905x018")) {
                                                c6 = 27;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -958336948:
                                            break;
                                        case -879245230:
                                            if (str4.equals("tcl_eu")) {
                                                c6 = 29;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -842500323:
                                            if (str4.equals("nicklaus_f")) {
                                                c6 = 30;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -821392978:
                                            if (str4.equals("A7000-a")) {
                                                c6 = 31;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -797483286:
                                            if (str4.equals("SVP-DTV15")) {
                                                c6 = ' ';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -794946968:
                                            if (str4.equals("watson")) {
                                                c6 = '!';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -788334647:
                                            if (str4.equals("whyred")) {
                                                c6 = '\"';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -782144577:
                                            if (str4.equals("OnePlus5T")) {
                                                c6 = '#';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -575125681:
                                            if (str4.equals("GiONEE_CBL7513")) {
                                                c6 = '$';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -521118391:
                                            if (str4.equals("GIONEE_GBL7360")) {
                                                c6 = '%';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -430914369:
                                            if (str4.equals("Pixi4-7_3G")) {
                                                c6 = '&';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -290434366:
                                            if (str4.equals("taido_row")) {
                                                c6 = '\'';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -282781963:
                                            if (str4.equals("BLACK-1X")) {
                                                c6 = '(';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -277133239:
                                            if (str4.equals("Z12_PRO")) {
                                                c6 = ')';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -173639913:
                                            if (str4.equals("ELUGA_A3_Pro")) {
                                                c6 = '*';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case -56598463:
                                            if (str4.equals("woods_fn")) {
                                                c6 = '+';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2126:
                                            if (str4.equals("C1")) {
                                                c6 = ',';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2564:
                                            if (str4.equals("Q5")) {
                                                c6 = '-';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2715:
                                            if (str4.equals("V1")) {
                                                c6 = '.';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2719:
                                            if (str4.equals("V5")) {
                                                c6 = '/';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 3091:
                                            if (str4.equals("b5")) {
                                                c6 = '0';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 3483:
                                            if (str4.equals("mh")) {
                                                c6 = '1';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 73405:
                                            if (str4.equals("JGZ")) {
                                                c6 = '2';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 75537:
                                            if (str4.equals("M04")) {
                                                c6 = '3';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 75739:
                                            if (str4.equals("M5c")) {
                                                c6 = '4';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 76779:
                                            if (str4.equals("MX6")) {
                                                c6 = '5';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 78669:
                                            if (str4.equals("P85")) {
                                                c6 = '6';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 79305:
                                            if (str4.equals("PLE")) {
                                                c6 = '7';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 80618:
                                            if (str4.equals("QX1")) {
                                                c6 = '8';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 88274:
                                            if (str4.equals("Z80")) {
                                                c6 = '9';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 98846:
                                            if (str4.equals("cv1")) {
                                                c6 = ':';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 98848:
                                            if (str4.equals("cv3")) {
                                                c6 = ';';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 99329:
                                            if (str4.equals("deb")) {
                                                c6 = '<';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 101481:
                                            if (str4.equals("flo")) {
                                                c6 = '=';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1513190:
                                            if (str4.equals("1601")) {
                                                c6 = '>';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1514184:
                                            if (str4.equals("1713")) {
                                                c6 = '?';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1514185:
                                            if (str4.equals("1714")) {
                                                c6 = '@';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2133089:
                                            if (str4.equals("F01H")) {
                                                c6 = 'A';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2133091:
                                            if (str4.equals("F01J")) {
                                                c6 = 'B';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2133120:
                                            if (str4.equals("F02H")) {
                                                c6 = 'C';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2133151:
                                            if (str4.equals("F03H")) {
                                                c6 = 'D';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2133182:
                                            if (str4.equals("F04H")) {
                                                c6 = 'E';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2133184:
                                            if (str4.equals("F04J")) {
                                                c6 = 'F';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2436959:
                                            if (str4.equals("P681")) {
                                                c6 = 'G';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2463773:
                                            if (str4.equals("Q350")) {
                                                c6 = 'H';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2464648:
                                            if (str4.equals("Q427")) {
                                                c6 = 'I';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2689555:
                                            if (str4.equals("XE2X")) {
                                                c6 = 'J';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 3154429:
                                            if (str4.equals("fugu")) {
                                                c6 = 'K';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 3284551:
                                            if (str4.equals("kate")) {
                                                c6 = 'L';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 3351335:
                                            if (str4.equals("mido")) {
                                                c6 = 'M';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 3386211:
                                            if (str4.equals("p212")) {
                                                c6 = 'N';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 41325051:
                                            if (str4.equals("MEIZU_M5")) {
                                                c6 = 'O';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 51349633:
                                            if (str4.equals("601LV")) {
                                                c6 = 'P';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 51350594:
                                            if (str4.equals("602LV")) {
                                                c6 = 'Q';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 55178625:
                                            if (str4.equals("Aura_Note_2")) {
                                                c6 = 'R';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 61542055:
                                            if (str4.equals("A1601")) {
                                                c6 = 'S';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 65355429:
                                            if (str4.equals("E5643")) {
                                                c6 = 'T';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 66214468:
                                            if (str4.equals("F3111")) {
                                                c6 = 'U';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 66214470:
                                            if (str4.equals("F3113")) {
                                                c6 = 'V';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 66214473:
                                            if (str4.equals("F3116")) {
                                                c6 = 'W';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 66215429:
                                            if (str4.equals("F3211")) {
                                                c6 = 'X';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 66215431:
                                            if (str4.equals("F3213")) {
                                                c6 = 'Y';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 66215433:
                                            if (str4.equals("F3215")) {
                                                c6 = 'Z';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 66216390:
                                            if (str4.equals("F3311")) {
                                                c6 = '[';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 76402249:
                                            if (str4.equals("PRO7S")) {
                                                c6 = '\\';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 76404105:
                                            if (str4.equals("Q4260")) {
                                                c6 = ']';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 76404911:
                                            if (str4.equals("Q4310")) {
                                                c6 = '^';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 80963634:
                                            if (str4.equals("V23GB")) {
                                                c6 = '_';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 82882791:
                                            if (str4.equals("X3_HK")) {
                                                c6 = '`';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 98715550:
                                            if (str4.equals("i9031")) {
                                                c6 = 'a';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 101370885:
                                            if (str4.equals("l5460")) {
                                                c6 = 'b';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 102844228:
                                            if (str4.equals("le_x6")) {
                                                c6 = 'c';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 165221241:
                                            if (str4.equals("A2016a40")) {
                                                c6 = 'd';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 182191441:
                                            if (str4.equals("CPY83_I00")) {
                                                c6 = 'e';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 245388979:
                                            if (str4.equals("marino_f")) {
                                                c6 = 'f';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 287431619:
                                            if (str4.equals("griffin")) {
                                                c6 = 'g';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 307593612:
                                            if (str4.equals("A7010a48")) {
                                                c6 = 'h';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 308517133:
                                            if (str4.equals("A7020a48")) {
                                                c6 = 'i';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 316215098:
                                            if (str4.equals("TB3-730F")) {
                                                c6 = 'j';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 316215116:
                                            if (str4.equals("TB3-730X")) {
                                                c6 = 'k';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 316246811:
                                            if (str4.equals("TB3-850F")) {
                                                c6 = 'l';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 316246818:
                                            if (str4.equals("TB3-850M")) {
                                                c6 = 'm';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 407160593:
                                            if (str4.equals("Pixi5-10_4G")) {
                                                c6 = 'n';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 507412548:
                                            if (str4.equals("QM16XE_U")) {
                                                c6 = 'o';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 793982701:
                                            if (str4.equals("GIONEE_WBL5708")) {
                                                c6 = 'p';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 794038622:
                                            if (str4.equals("GIONEE_WBL7365")) {
                                                c6 = 'q';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 794040393:
                                            if (str4.equals("GIONEE_WBL7519")) {
                                                c6 = 'r';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 835649806:
                                            if (str4.equals("manning")) {
                                                c6 = 's';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 917340916:
                                            if (str4.equals("A7000plus")) {
                                                c6 = 't';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 958008161:
                                            if (str4.equals("j2xlteins")) {
                                                c6 = 'u';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1060579533:
                                            if (str4.equals("panell_d")) {
                                                c6 = 'v';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1150207623:
                                            if (str4.equals("LS-5017")) {
                                                c6 = 'w';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1176899427:
                                            if (str4.equals("itel_S41")) {
                                                c6 = 'x';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1280332038:
                                            if (str4.equals("hwALE-H")) {
                                                c6 = 'y';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1306947716:
                                            if (str4.equals("EverStar_S")) {
                                                c6 = 'z';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1349174697:
                                            if (str4.equals("htc_e56ml_dtul")) {
                                                c6 = '{';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1522194893:
                                            if (str4.equals("woods_f")) {
                                                c6 = '|';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1691543273:
                                            if (str4.equals("CPH1609")) {
                                                c6 = '}';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1691544261:
                                            if (str4.equals("CPH1715")) {
                                                c6 = '~';
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1709443163:
                                            if (str4.equals("iball8735_9806")) {
                                                c6 = 127;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1865889110:
                                            if (str4.equals("santoni")) {
                                                c6 = 128;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1906253259:
                                            if (str4.equals("PB2-670M")) {
                                                c6 = 129;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 1977196784:
                                            if (str4.equals("Infinix-X572")) {
                                                c6 = 130;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2006372676:
                                            if (str4.equals("BRAVIA_ATV3_4K")) {
                                                c6 = 131;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2019281702:
                                            if (str4.equals("DM-01K")) {
                                                c6 = 132;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2029784656:
                                            if (str4.equals("HWBLN-H")) {
                                                c6 = 133;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2030379515:
                                            if (str4.equals("HWCAM-H")) {
                                                c6 = 134;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2033393791:
                                            if (str4.equals("ASUS_X00AD_2")) {
                                                c6 = 135;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2047190025:
                                            if (str4.equals("ELUGA_Note")) {
                                                c6 = 136;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2047252157:
                                            if (str4.equals("ELUGA_Prim")) {
                                                c6 = 137;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2048319463:
                                            if (str4.equals("HWVNS-H")) {
                                                c6 = 138;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 2048855701:
                                            if (str4.equals("HWWAS-H")) {
                                                c6 = 139;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        default:
                                            c6 = 65535;
                                            break;
                                    }
                                    switch (c6) {
                                    }
                                }
                                break;
                            case false:
                            case true:
                            case true:
                            case true:
                            case true:
                            case true:
                            case true:
                            case true:
                            case true:
                                break;
                        }
                        M1 = z7;
                        L1 = true;
                    }
                    z7 = true;
                    M1 = z7;
                    L1 = true;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return M1;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x007b, code lost:
    
        if (r3.equals("video/av01") == false) goto L18;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int t0(cd.o oVar, Format format) {
        int intValue;
        int i5 = format.N;
        int i6 = format.O;
        if (i5 != -1 && i6 != -1) {
            String str = format.I;
            char c6 = 1;
            if ("video/dolby-vision".equals(str)) {
                Pair d6 = z.d(format);
                str = (d6 == null || !((intValue = ((Integer) d6.first).intValue()) == 512 || intValue == 1 || intValue == 2)) ? "video/hevc" : "video/avc";
            }
            str.getClass();
            switch (str.hashCode()) {
                case -1664118616:
                    if (str.equals("video/3gpp")) {
                        c6 = 0;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -1662735862:
                    break;
                case -1662541442:
                    if (str.equals("video/hevc")) {
                        c6 = 2;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1187890754:
                    if (str.equals("video/mp4v-es")) {
                        c6 = 3;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1331836730:
                    if (str.equals("video/avc")) {
                        c6 = 4;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1599127256:
                    if (str.equals("video/x-vnd.on2.vp8")) {
                        c6 = 5;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1599127257:
                    if (str.equals("video/x-vnd.on2.vp9")) {
                        c6 = 6;
                        break;
                    }
                    c6 = 65535;
                    break;
                default:
                    c6 = 65535;
                    break;
            }
            switch (c6) {
                case 0:
                case 1:
                case 3:
                case 5:
                    return ((i5 * i6) * 3) / 4;
                case 2:
                    return Math.max(KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD, ((i5 * i6) * 3) / 4);
                case 4:
                    String str2 = d0.f13296d;
                    if (!"BRAVIA 4K 2015".equals(str2) && (!"Amazon".equals(d0.f13295c) || (!"KFSOWI".equals(str2) && (!"AFTS".equals(str2) || !oVar.f3445f)))) {
                        return ((d0.f(i6, 16) * d0.f(i5, 16)) * 768) / 4;
                    }
                    break;
                case 6:
                    return ((i5 * i6) * 3) / 8;
            }
        }
        return -1;
    }

    public static List u0(Context context, cd.t tVar, Format format, boolean z5, boolean z6) {
        Iterable e9;
        List e10;
        String str = format.I;
        if (str == null) {
            c0 c0Var = e0.f8656e;
            return r0.f8704w;
        }
        if (d0.a >= 26 && "video/dolby-vision".equals(str) && !g.a(context)) {
            String b10 = z.b(format);
            if (b10 == null) {
                c0 c0Var2 = e0.f8656e;
                e10 = r0.f8704w;
            } else {
                tVar.getClass();
                e10 = z.e(b10, z5, z6);
            }
            if (!e10.isEmpty()) {
                return e10;
            }
        }
        Pattern pattern = z.a;
        String str2 = format.I;
        tVar.getClass();
        List e11 = z.e(str2, z5, z6);
        String b11 = z.b(format);
        if (b11 == null) {
            c0 c0Var3 = e0.f8656e;
            e9 = r0.f8704w;
        } else {
            e9 = z.e(b11, z5, z6);
        }
        c0 c0Var4 = e0.f8656e;
        b0 b0Var = new b0();
        b0Var.c(e11);
        b0Var.c(e9);
        return b0Var.f();
    }

    public static int v0(cd.o oVar, Format format) {
        int i5 = format.J;
        List list = format.K;
        if (i5 == -1) {
            return t0(oVar, format);
        }
        int size = list.size();
        int i6 = 0;
        for (int i10 = 0; i10 < size; i10++) {
            i6 += ((byte[]) list.get(i10)).length;
        }
        return format.J + i6;
    }

    public final void A0(cd.l lVar, int i5, long j) {
        ke.b.c("releaseOutputBuffer");
        lVar.s(i5, j);
        ke.b.t();
        this.X0.f5381e++;
        this.f13899x1 = 0;
        this.f13881f1.getClass();
        this.A1 = SystemClock.elapsedRealtime() * 1000;
        y0(this.E1);
        x0();
    }

    @Override // cd.s
    public final DecoderReuseEvaluation B(cd.o oVar, Format format, Format format2) {
        DecoderReuseEvaluation b10 = oVar.b(format, format2);
        int i5 = b10.f5390e;
        int i6 = format2.N;
        hc.l lVar = this.f13885j1;
        if (i6 > lVar.a || format2.O > lVar.f9773b) {
            i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
        }
        if (v0(oVar, format2) > this.f13885j1.f9774c) {
            i5 |= 64;
        }
        int i10 = i5;
        return new DecoderReuseEvaluation(oVar.a, format, format2, i10 != 0 ? 0 : b10.f5389d, i10);
    }

    public final boolean B0(cd.o oVar) {
        if (d0.a < 23 || this.G1 || s0(oVar.a)) {
            return false;
        }
        return !oVar.f3445f || k.h(this.f13879c1);
    }

    @Override // cd.s
    public final cd.m C(IllegalStateException illegalStateException, cd.o oVar) {
        Surface surface = this.f13888m1;
        f fVar = new f(illegalStateException, oVar);
        System.identityHashCode(surface);
        if (surface != null) {
            surface.isValid();
        }
        return fVar;
    }

    public final void C0(cd.l lVar, int i5) {
        ke.b.c("skipVideoBuffer");
        lVar.releaseOutputBuffer(i5, false);
        ke.b.t();
        this.X0.f5382f++;
    }

    public final void D0(int i5, int i6) {
        DecoderCounters decoderCounters = this.X0;
        decoderCounters.f5384h += i5;
        int i10 = i5 + i6;
        decoderCounters.f5383g += i10;
        this.f13898w1 += i10;
        int i11 = this.f13899x1 + i10;
        this.f13899x1 = i11;
        decoderCounters.f5385i = Math.max(i11, decoderCounters.f5385i);
        int i12 = this.f13883h1;
        if (i12 <= 0 || this.f13898w1 < i12) {
            return;
        }
        w0();
    }

    public final void E0(long j) {
        DecoderCounters decoderCounters = this.X0;
        decoderCounters.k += j;
        decoderCounters.f5386l++;
        this.B1 += j;
        this.C1++;
    }

    @Override // cd.s
    public final boolean K() {
        return this.G1 && d0.a < 23;
    }

    @Override // cd.s
    public final float L(float f2, Format[] formatArr) {
        float f10 = -1.0f;
        for (Format format : formatArr) {
            float f11 = format.P;
            if (f11 != -1.0f) {
                f10 = Math.max(f10, f11);
            }
        }
        if (f10 == -1.0f) {
            return -1.0f;
        }
        return f10 * f2;
    }

    @Override // cd.s
    public final ArrayList M(cd.t tVar, Format format, boolean z5) {
        List u02 = u0(this.f13879c1, tVar, format, z5, this.G1);
        Pattern pattern = z.a;
        ArrayList arrayList = new ArrayList(u02);
        Collections.sort(arrayList, new cd.u(0, new app.rive.runtime.kotlin.core.a(5, format)));
        return arrayList;
    }

    @Override // cd.s
    public final cd.j N(cd.o oVar, Format format, MediaCrypto mediaCrypto, float f2) {
        int i5;
        b bVar;
        hc.l lVar;
        Point point;
        Point point2;
        MediaCodecInfo.VideoCapabilities videoCapabilities;
        int i6;
        char c6;
        boolean z5;
        Pair d6;
        int t02;
        k kVar = this.f13889n1;
        if (kVar != null && kVar.f13909d != oVar.f3445f) {
            if (this.f13888m1 == kVar) {
                this.f13888m1 = null;
            }
            kVar.release();
            this.f13889n1 = null;
        }
        String str = oVar.f3442c;
        Format[] formatArr = this.F;
        formatArr.getClass();
        int i10 = format.N;
        float f10 = format.P;
        int i11 = format.O;
        b bVar2 = format.U;
        int v02 = v0(oVar, format);
        if (formatArr.length == 1) {
            if (v02 != -1 && (t02 = t0(oVar, format)) != -1) {
                v02 = Math.min((int) (v02 * 1.5f), t02);
            }
            lVar = new hc.l(i10, i11, v02);
            i5 = i11;
            bVar = bVar2;
        } else {
            int length = formatArr.length;
            int i12 = i10;
            int i13 = i11;
            int i14 = 0;
            boolean z6 = false;
            while (i14 < length) {
                Format format2 = formatArr[i14];
                int i15 = i14;
                if (bVar2 != null && format2.U == null) {
                    f0 a = format2.a();
                    a.f9689w = bVar2;
                    format2 = new Format(a);
                }
                DecoderReuseEvaluation b10 = oVar.b(format, format2);
                Format[] formatArr2 = formatArr;
                int i16 = format2.O;
                if (b10.f5389d != 0) {
                    int i17 = format2.N;
                    i6 = length;
                    c6 = 65535;
                    z6 |= i17 == -1 || i16 == -1;
                    i12 = Math.max(i12, i17);
                    i13 = Math.max(i13, i16);
                    v02 = Math.max(v02, v0(oVar, format2));
                } else {
                    i6 = length;
                    c6 = 65535;
                }
                i14 = i15 + 1;
                formatArr = formatArr2;
                length = i6;
            }
            if (z6) {
                ke.b.N("MediaCodecVideoRenderer", "Resolutions unknown. Codec max resolution: " + i12 + "x" + i13);
                boolean z7 = i11 > i10;
                int i18 = z7 ? i11 : i10;
                boolean z8 = z7;
                int i19 = z7 ? i10 : i11;
                float f11 = i19 / i18;
                bVar = bVar2;
                int i20 = 0;
                while (i20 < 9) {
                    int i21 = K1[i20];
                    int i22 = i20;
                    int i23 = (int) (i21 * f11);
                    if (i21 <= i18 || i23 <= i19) {
                        break;
                    }
                    int i24 = i19;
                    int i25 = i18;
                    if (d0.a >= 21) {
                        int i26 = z8 ? i23 : i21;
                        if (!z8) {
                            i21 = i23;
                        }
                        MediaCodecInfo.CodecCapabilities codecCapabilities = oVar.f3443d;
                        if (codecCapabilities == null || (videoCapabilities = codecCapabilities.getVideoCapabilities()) == null) {
                            point2 = null;
                        } else {
                            int widthAlignment = videoCapabilities.getWidthAlignment();
                            int heightAlignment = videoCapabilities.getHeightAlignment();
                            point2 = new Point(d0.f(i26, widthAlignment) * widthAlignment, d0.f(i21, heightAlignment) * heightAlignment);
                        }
                        i5 = i11;
                        if (oVar.f(point2.x, f10, point2.y)) {
                            point = point2;
                            break;
                        }
                        i20 = i22 + 1;
                        i11 = i5;
                        i19 = i24;
                        i18 = i25;
                    } else {
                        i5 = i11;
                        try {
                            int f12 = d0.f(i21, 16) * 16;
                            int f13 = d0.f(i23, 16) * 16;
                            if (f12 * f13 <= z.i()) {
                                int i27 = z8 ? f13 : f12;
                                if (!z8) {
                                    f12 = f13;
                                }
                                point2 = new Point(i27, f12);
                                point = point2;
                                break;
                            }
                            i20 = i22 + 1;
                            i11 = i5;
                            i19 = i24;
                            i18 = i25;
                        } catch (cd.w unused) {
                        }
                    }
                }
                i5 = i11;
                point = null;
                if (point != null) {
                    i12 = Math.max(i12, point.x);
                    i13 = Math.max(i13, point.y);
                    f0 a10 = format.a();
                    a10.f9682p = i12;
                    a10.f9683q = i13;
                    v02 = Math.max(v02, t0(oVar, new Format(a10)));
                    ke.b.N("MediaCodecVideoRenderer", "Codec max resolution adjusted to: " + i12 + "x" + i13);
                }
            } else {
                i5 = i11;
                bVar = bVar2;
            }
            lVar = new hc.l(i12, i13, v02);
        }
        this.f13885j1 = lVar;
        int i28 = this.G1 ? this.H1 : 0;
        MediaFormat mediaFormat = new MediaFormat();
        mediaFormat.setString("mime", str);
        mediaFormat.setInteger("width", i10);
        mediaFormat.setInteger("height", i5);
        ke.b.L(mediaFormat, format.K);
        if (f10 != -1.0f) {
            mediaFormat.setFloat("frame-rate", f10);
        }
        ke.b.D(mediaFormat, "rotation-degrees", format.Q);
        if (bVar != null) {
            b bVar3 = bVar;
            ke.b.D(mediaFormat, "color-transfer", bVar3.f13857i);
            ke.b.D(mediaFormat, "color-standard", bVar3.f13855d);
            ke.b.D(mediaFormat, "color-range", bVar3.f13856e);
            byte[] bArr = bVar3.f13858v;
            if (bArr != null) {
                mediaFormat.setByteBuffer("hdr-static-info", ByteBuffer.wrap(bArr));
            }
        }
        if ("video/dolby-vision".equals(format.I) && (d6 = z.d(format)) != null) {
            ke.b.D(mediaFormat, "profile", ((Integer) d6.first).intValue());
        }
        mediaFormat.setInteger("max-width", lVar.a);
        mediaFormat.setInteger("max-height", lVar.f9773b);
        ke.b.D(mediaFormat, "max-input-size", lVar.f9774c);
        if (d0.a >= 23) {
            mediaFormat.setInteger("priority", 0);
            if (f2 != -1.0f) {
                mediaFormat.setFloat("operating-rate", f2);
            }
        }
        if (this.f13884i1) {
            z5 = true;
            mediaFormat.setInteger("no-post-process", 1);
            mediaFormat.setInteger("auto-frc", 0);
        } else {
            z5 = true;
        }
        if (i28 != 0) {
            mediaFormat.setFeatureEnabled("tunneled-playback", z5);
            mediaFormat.setInteger("audio-session-id", i28);
        }
        if (this.f13888m1 == null) {
            if (!B0(oVar)) {
                throw new IllegalStateException();
            }
            if (this.f13889n1 == null) {
                this.f13889n1 = k.i(this.f13879c1, oVar.f3445f);
            }
            this.f13888m1 = this.f13889n1;
        }
        this.f13881f1.getClass();
        return new cd.j(oVar, mediaFormat, format, this.f13888m1, mediaCrypto);
    }

    @Override // cd.s
    public final void O(mc.f fVar) {
        if (this.f13887l1) {
            ByteBuffer byteBuffer = fVar.f14439y;
            byteBuffer.getClass();
            if (byteBuffer.remaining() >= 7) {
                byte b10 = byteBuffer.get();
                short s2 = byteBuffer.getShort();
                short s5 = byteBuffer.getShort();
                byte b11 = byteBuffer.get();
                byte b12 = byteBuffer.get();
                byteBuffer.position(0);
                if (b10 == -75 && s2 == 60 && s5 == 1 && b11 == 4) {
                    if (b12 == 0 || b12 == 1) {
                        byte[] bArr = new byte[byteBuffer.remaining()];
                        byteBuffer.get(bArr);
                        byteBuffer.position(0);
                        cd.l lVar = this.f3462g0;
                        Bundle bundle = new Bundle();
                        bundle.putByteArray("hdr10-plus-info", bArr);
                        lVar.setParameters(bundle);
                    }
                }
            }
        }
    }

    @Override // cd.s
    public final void S(Exception exc) {
        ke.b.s("MediaCodecVideoRenderer", "Video codec error", exc);
        e4.l lVar = this.e1;
        Handler handler = (Handler) lVar.f7959e;
        if (handler != null) {
            handler.post(new jc.b0(4, lVar, exc));
        }
    }

    @Override // cd.s
    public final void T(long j, long j5, String str) {
        String str2;
        MediaCodecInfo.CodecProfileLevel[] codecProfileLevelArr;
        e4.l lVar = this.e1;
        Handler handler = (Handler) lVar.f7959e;
        if (handler != null) {
            str2 = str;
            handler.post(new jc.o(lVar, str2, j, j5, 1));
        } else {
            str2 = str;
        }
        this.f13886k1 = s0(str2);
        cd.o oVar = this.f3468n0;
        oVar.getClass();
        boolean z5 = false;
        if (d0.a >= 29 && "video/x-vnd.on2.vp9".equals(oVar.f3441b)) {
            MediaCodecInfo.CodecCapabilities codecCapabilities = oVar.f3443d;
            if (codecCapabilities == null || (codecProfileLevelArr = codecCapabilities.profileLevels) == null) {
                codecProfileLevelArr = new MediaCodecInfo.CodecProfileLevel[0];
            }
            int length = codecProfileLevelArr.length;
            int i5 = 0;
            while (true) {
                if (i5 >= length) {
                    break;
                }
                if (codecProfileLevelArr[i5].profile == 16384) {
                    z5 = true;
                    break;
                }
                i5++;
            }
        }
        this.f13887l1 = z5;
        int i6 = d0.a;
        if (i6 >= 23 && this.G1) {
            cd.l lVar2 = this.f3462g0;
            lVar2.getClass();
            this.I1 = new h(this, lVar2);
        }
        Context context = ((i) this.f13881f1.f56b).f13879c1;
        if (i6 >= 29) {
            int i10 = context.getApplicationContext().getApplicationInfo().targetSdkVersion;
        }
    }

    @Override // cd.s
    public final void U(String str) {
        e4.l lVar = this.e1;
        Handler handler = (Handler) lVar.f7959e;
        if (handler != null) {
            handler.post(new jc.b0(3, lVar, str));
        }
    }

    @Override // cd.s
    public final DecoderReuseEvaluation V(e4.l lVar) {
        DecoderReuseEvaluation V = super.V(lVar);
        Format format = (Format) lVar.f7960i;
        e4.l lVar2 = this.e1;
        Handler handler = (Handler) lVar2.f7959e;
        if (handler != null) {
            handler.post(new androidx.fragment.app.e(lVar2, format, V, 28));
        }
        return V;
    }

    @Override // cd.s
    public final void W(Format format, MediaFormat mediaFormat) {
        int integer;
        int i5;
        cd.l lVar = this.f3462g0;
        if (lVar != null) {
            lVar.D(this.f13891p1);
        }
        if (this.G1) {
            i5 = format.N;
            integer = format.O;
        } else {
            mediaFormat.getClass();
            boolean z5 = mediaFormat.containsKey("crop-right") && mediaFormat.containsKey("crop-left") && mediaFormat.containsKey("crop-bottom") && mediaFormat.containsKey("crop-top");
            int integer2 = z5 ? (mediaFormat.getInteger("crop-right") - mediaFormat.getInteger("crop-left")) + 1 : mediaFormat.getInteger("width");
            integer = z5 ? (mediaFormat.getInteger("crop-bottom") - mediaFormat.getInteger("crop-top")) + 1 : mediaFormat.getInteger("height");
            i5 = integer2;
        }
        float f2 = format.R;
        int i6 = format.Q;
        int i10 = d0.a;
        a3.f fVar = this.f13881f1;
        if (i10 >= 21) {
            if (i6 == 90 || i6 == 270) {
                f2 = 1.0f / f2;
                int i11 = integer;
                integer = i5;
                i5 = i11;
            }
            i6 = 0;
        } else {
            fVar.getClass();
        }
        this.E1 = new VideoSize(i5, integer, i6, f2);
        float f10 = format.P;
        t tVar = this.f13880d1;
        tVar.f13932f = f10;
        d dVar = tVar.a;
        dVar.a.c();
        dVar.f13867b.c();
        dVar.f13868c = false;
        dVar.f13869d = -9223372036854775807L;
        dVar.f13870e = 0;
        tVar.b();
        fVar.getClass();
    }

    @Override // cd.s
    public final void Y(long j) {
        super.Y(j);
        if (this.G1) {
            return;
        }
        this.f13900y1--;
    }

    @Override // cd.s
    public final void Z() {
        r0();
    }

    @Override // cd.s
    public final void a0(mc.f fVar) {
        boolean z5 = this.G1;
        if (!z5) {
            this.f13900y1++;
        }
        if (d0.a >= 23 || !z5) {
            return;
        }
        long j = fVar.f14438x;
        q0(j);
        y0(this.E1);
        this.X0.f5381e++;
        x0();
        Y(j);
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0050  */
    @Override // cd.s
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void b0(Format format) {
        int i5;
        a3.f fVar = this.f13881f1;
        fVar.getClass();
        long j = this.Y0.f3453b;
        i iVar = (i) fVar.f56b;
        if (!fVar.a) {
            return;
        }
        if (((CopyOnWriteArrayList) fVar.f57c) == null) {
            fVar.a = false;
            return;
        }
        d0.m(null);
        b bVar = format.U;
        try {
            if (bVar != null) {
                int i6 = bVar.f13857i;
                if (i6 == 7 || i6 == 6) {
                    if (i6 == 7) {
                        Pair.create(bVar, new b(bVar.f13855d, bVar.f13856e, 6, bVar.f13858v));
                    } else {
                        Pair.create(bVar, bVar);
                    }
                    if (!(d0.a < 21) || (i5 = format.Q) == 0) {
                        e4.f.E();
                        e4.f.f7948e.invoke(e4.f.f7947d.newInstance(null), null).getClass();
                        throw new ClassCastException();
                    }
                    e4.f.E();
                    Object newInstance = e4.f.a.newInstance(null);
                    e4.f.f7945b.invoke(newInstance, Float.valueOf(i5));
                    e4.f.f7946c.invoke(newInstance, null).getClass();
                    throw new ClassCastException();
                }
            } else {
                b bVar2 = b.f13853x;
            }
            if (d0.a < 21) {
            }
            e4.f.E();
            e4.f.f7948e.invoke(e4.f.f7947d.newInstance(null), null).getClass();
            throw new ClassCastException();
        } catch (Exception e9) {
            throw iVar.f(e9, format, false, 7000);
        }
        b bVar3 = b.f13853x;
        Pair.create(bVar3, bVar3);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r12v9, types: [android.view.Surface] */
    @Override // hc.e, hc.k1
    public final void c(int i5, Object obj) {
        Surface surface;
        t tVar = this.f13880d1;
        a3.f fVar = this.f13881f1;
        if (i5 != 1) {
            if (i5 == 7) {
                this.J1 = (o) obj;
                return;
            }
            if (i5 == 10) {
                int intValue = ((Integer) obj).intValue();
                if (this.H1 != intValue) {
                    this.H1 = intValue;
                    if (this.G1) {
                        f0();
                        return;
                    }
                    return;
                }
                return;
            }
            if (i5 == 4) {
                int intValue2 = ((Integer) obj).intValue();
                this.f13891p1 = intValue2;
                cd.l lVar = this.f3462g0;
                if (lVar != null) {
                    lVar.D(intValue2);
                    return;
                }
                return;
            }
            if (i5 == 5) {
                int intValue3 = ((Integer) obj).intValue();
                if (tVar.j == intValue3) {
                    return;
                }
                tVar.j = intValue3;
                tVar.c(true);
                return;
            }
            if (i5 == 13) {
                obj.getClass();
                List list = (List) obj;
                CopyOnWriteArrayList copyOnWriteArrayList = (CopyOnWriteArrayList) fVar.f57c;
                if (copyOnWriteArrayList == null) {
                    fVar.f57c = new CopyOnWriteArrayList(list);
                    return;
                } else {
                    copyOnWriteArrayList.clear();
                    ((CopyOnWriteArrayList) fVar.f57c).addAll(list);
                    return;
                }
            }
            if (i5 != 14) {
                return;
            }
            obj.getClass();
            x xVar = (x) obj;
            if (xVar.a == 0 || xVar.f13366b == 0 || (surface = this.f13888m1) == null) {
                return;
            }
            Pair pair = (Pair) fVar.f58d;
            if (pair != null && ((Surface) pair.first).equals(surface) && ((x) ((Pair) fVar.f58d).second).equals(xVar)) {
                return;
            }
            fVar.f58d = Pair.create(surface, xVar);
            return;
        }
        k kVar = obj instanceof Surface ? (Surface) obj : null;
        if (kVar == null) {
            k kVar2 = this.f13889n1;
            if (kVar2 != null) {
                kVar = kVar2;
            } else {
                cd.o oVar = this.f3468n0;
                if (oVar != null && B0(oVar)) {
                    kVar = k.i(this.f13879c1, oVar.f3445f);
                    this.f13889n1 = kVar;
                }
            }
        }
        Surface surface2 = this.f13888m1;
        e4.l lVar2 = this.e1;
        if (surface2 == kVar) {
            if (kVar == null || kVar == this.f13889n1) {
                return;
            }
            VideoSize videoSize = this.F1;
            if (videoSize != null) {
                lVar2.N(videoSize);
            }
            if (this.f13890o1) {
                Surface surface3 = this.f13888m1;
                Handler handler = (Handler) lVar2.f7959e;
                if (handler != null) {
                    handler.post(new app.rive.core.a(lVar2, surface3, SystemClock.elapsedRealtime(), 4));
                    return;
                }
                return;
            }
            return;
        }
        this.f13888m1 = kVar;
        tVar.getClass();
        k kVar3 = kVar instanceof k ? null : kVar;
        if (tVar.f13931e != kVar3) {
            tVar.a();
            tVar.f13931e = kVar3;
            tVar.c(true);
        }
        this.f13890o1 = false;
        int i6 = this.f9664y;
        cd.l lVar3 = this.f3462g0;
        if (lVar3 != null) {
            fVar.getClass();
            if (d0.a < 23 || kVar == null || this.f13886k1) {
                f0();
                Q();
            } else {
                lVar3.setOutputSurface(kVar);
            }
        }
        if (kVar == null || kVar == this.f13889n1) {
            this.F1 = null;
            r0();
            fVar.getClass();
            return;
        }
        VideoSize videoSize2 = this.F1;
        if (videoSize2 != null) {
            lVar2.N(videoSize2);
        }
        r0();
        if (i6 == 2) {
            long j = this.f13882g1;
            this.f13896u1 = j > 0 ? SystemClock.elapsedRealtime() + j : -9223372036854775807L;
        }
        fVar.getClass();
    }

    /* JADX WARN: Code restructure failed: missing block: B:180:0x0079, code lost:
    
        if ((r10 == 0 ? false : r13.f13865g[(int) ((r10 - 1) % 15)]) != false) goto L24;
     */
    @Override // cd.s
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean d0(long j, long j5, cd.l lVar, ByteBuffer byteBuffer, int i5, int i6, int i10, long j7, boolean z5, boolean z6, Format format) {
        long j10;
        long j11;
        long j12;
        long j13;
        long j14;
        long j15;
        t tVar = this.f13880d1;
        a3.f fVar = this.f13881f1;
        lVar.getClass();
        if (this.f13895t1 == -9223372036854775807L) {
            this.f13895t1 = j;
        }
        if (j7 != this.f13901z1) {
            fVar.getClass();
            j10 = -1;
            long j16 = tVar.f13938n;
            if (j16 != -1) {
                tVar.f13940p = j16;
                tVar.f13941q = tVar.f13939o;
            }
            tVar.f13937m++;
            d dVar = tVar.a;
            long j17 = j7 * 1000;
            j11 = 0;
            dVar.a.b(j17);
            if (dVar.a.a()) {
                dVar.f13868c = false;
            } else if (dVar.f13869d != -9223372036854775807L) {
                if (dVar.f13868c) {
                    c cVar = dVar.f13867b;
                    j15 = j17;
                    long j18 = cVar.f13862d;
                } else {
                    j15 = j17;
                }
                dVar.f13867b.c();
                dVar.f13867b.b(dVar.f13869d);
                dVar.f13868c = true;
                j17 = j15;
                dVar.f13867b.b(j17);
            }
            if (dVar.f13868c && dVar.f13867b.a()) {
                c cVar2 = dVar.a;
                dVar.a = dVar.f13867b;
                dVar.f13867b = cVar2;
                dVar.f13868c = false;
            }
            dVar.f13869d = j17;
            dVar.f13870e = dVar.a.a() ? 0 : dVar.f13870e + 1;
            tVar.b();
            this.f13901z1 = j7;
        } else {
            j10 = -1;
            j11 = 0;
        }
        long j19 = j7 - this.Y0.f3453b;
        if (z5 && !z6) {
            C0(lVar, i5);
            return true;
        }
        boolean z7 = this.f9664y == 2;
        long elapsedRealtime = SystemClock.elapsedRealtime() * 1000;
        long j20 = (long) ((j7 - j) / this.f3460e0);
        if (z7) {
            j20 -= elapsedRealtime - j5;
        }
        if (this.f13888m1 == this.f13889n1) {
            if (!(j20 < -30000)) {
                return false;
            }
            C0(lVar, i5);
            E0(j20);
            return true;
        }
        boolean z8 = this.f9664y == 2;
        if (this.f13896u1 == -9223372036854775807L && j >= this.Y0.f3453b && ((this.f13894s1 ? !this.f13892q1 : !(!z8 && !this.f13893r1)) || (z8 && j20 < -30000 && (SystemClock.elapsedRealtime() * 1000) - this.A1 > 100000))) {
            fVar.getClass();
            this.f13881f1.getClass();
            long nanoTime = System.nanoTime();
            o oVar = this.J1;
            if (oVar != null) {
                oVar.d(j19, nanoTime, format, this.f3463i0);
            }
            if (d0.a >= 21) {
                A0(lVar, i5, nanoTime);
            } else {
                z0(lVar, i5);
            }
            E0(j20);
            return true;
        }
        if (!z7 || j == this.f13895t1) {
            return false;
        }
        long nanoTime2 = System.nanoTime();
        long j21 = (j20 * 1000) + nanoTime2;
        if (tVar.f13940p != j10 && tVar.a.a.a()) {
            d dVar2 = tVar.a;
            if (dVar2.a.a()) {
                c cVar3 = dVar2.a;
                long j22 = cVar3.f13863e;
                j14 = j22 == j11 ? j11 : cVar3.f13864f / j22;
            } else {
                j14 = -9223372036854775807L;
            }
            long j23 = tVar.f13941q + ((long) (((tVar.f13937m - tVar.f13940p) * j14) / tVar.f13935i));
            if (Math.abs(j21 - j23) <= 20000000) {
                j21 = j23;
            } else {
                tVar.f13937m = j11;
                long j24 = j10;
                tVar.f13940p = j24;
                tVar.f13938n = j24;
            }
        }
        tVar.f13938n = tVar.f13937m;
        tVar.f13939o = j21;
        s sVar = tVar.f13929c;
        if (sVar != null && tVar.k != -9223372036854775807L) {
            long j25 = sVar.f13924d;
            if (j25 != -9223372036854775807L) {
                long j26 = tVar.k;
                long j27 = (((j21 - j25) / j26) * j26) + j25;
                if (j21 <= j27) {
                    j13 = j27 - j26;
                } else {
                    j13 = j27;
                    j27 = j26 + j27;
                }
                if (j27 - j21 >= j21 - j13) {
                    j27 = j13;
                }
                j21 = j27 - tVar.f13936l;
            }
        }
        long j28 = j21;
        fVar.getClass();
        long j29 = (j28 - nanoTime2) / 1000;
        boolean z10 = this.f13896u1 != -9223372036854775807L;
        if (j29 < -500000 && !z6) {
            q0 q0Var = this.E;
            q0Var.getClass();
            int c6 = q0Var.c(j - this.G);
            if (c6 != 0) {
                if (z10) {
                    DecoderCounters decoderCounters = this.X0;
                    decoderCounters.f5380d += c6;
                    decoderCounters.f5382f += this.f13900y1;
                } else {
                    this.X0.j++;
                    D0(c6, this.f13900y1);
                }
                if (!I()) {
                    return false;
                }
                Q();
                return false;
            }
        }
        if (j29 < -30000 && !z6) {
            if (z10) {
                C0(lVar, i5);
            } else {
                ke.b.c("dropVideoBuffer");
                lVar.releaseOutputBuffer(i5, false);
                ke.b.t();
                D0(0, 1);
            }
            E0(j29);
            return true;
        }
        if (d0.a < 21) {
            if (j29 >= 30000) {
                return false;
            }
            if (j29 > 11000) {
                try {
                    Thread.sleep((j29 - 10000) / 1000);
                } catch (InterruptedException unused) {
                    Thread.currentThread().interrupt();
                    return false;
                }
            }
            o oVar2 = this.J1;
            if (oVar2 != null) {
                oVar2.d(j19, j28, format, this.f3463i0);
            }
            z0(lVar, i5);
            E0(j29);
            return true;
        }
        if (j29 >= 50000) {
            return false;
        }
        if (j28 == this.D1) {
            C0(lVar, i5);
            j12 = j28;
        } else {
            o oVar3 = this.J1;
            if (oVar3 != null) {
                oVar3.d(j19, j28, format, this.f3463i0);
            }
            j12 = j28;
            A0(lVar, i5, j12);
        }
        E0(j29);
        this.D1 = j12;
        return true;
    }

    @Override // hc.e
    public final String h() {
        return "MediaCodecVideoRenderer";
    }

    @Override // cd.s
    public final void h0() {
        super.h0();
        this.f13900y1 = 0;
    }

    @Override // hc.e
    public final boolean j() {
        boolean z5 = this.T0;
        this.f13881f1.getClass();
        return z5;
    }

    @Override // cd.s, hc.e
    public final boolean k() {
        k kVar;
        if (super.k()) {
            this.f13881f1.getClass();
            if (this.f13892q1 || (((kVar = this.f13889n1) != null && this.f13888m1 == kVar) || this.f3462g0 == null || this.G1)) {
                this.f13896u1 = -9223372036854775807L;
                return true;
            }
        }
        if (this.f13896u1 == -9223372036854775807L) {
            return false;
        }
        if (SystemClock.elapsedRealtime() < this.f13896u1) {
            return true;
        }
        this.f13896u1 = -9223372036854775807L;
        return false;
    }

    @Override // cd.s, hc.e
    public final void l() {
        e4.l lVar = this.e1;
        this.F1 = null;
        r0();
        this.f13890o1 = false;
        this.I1 = null;
        try {
            super.l();
            DecoderCounters decoderCounters = this.X0;
            lVar.getClass();
            synchronized (decoderCounters) {
            }
            Handler handler = (Handler) lVar.f7959e;
            if (handler != null) {
                handler.post(new v(lVar, decoderCounters, 0));
            }
            lVar.N(VideoSize.f5575w);
        } catch (Throwable th2) {
            DecoderCounters decoderCounters2 = this.X0;
            lVar.getClass();
            synchronized (decoderCounters2) {
                Handler handler2 = (Handler) lVar.f7959e;
                if (handler2 != null) {
                    handler2.post(new v(lVar, decoderCounters2, 0));
                }
                lVar.N(VideoSize.f5575w);
                throw th2;
            }
        }
    }

    @Override // cd.s
    public final boolean l0(cd.o oVar) {
        return this.f13888m1 != null || B0(oVar);
    }

    @Override // hc.e
    public final void m(boolean z5, boolean z6) {
        this.X0 = new DecoderCounters();
        o1 o1Var = this.f9661v;
        o1Var.getClass();
        boolean z7 = o1Var.a;
        ke.b.k((z7 && this.H1 == 0) ? false : true);
        if (this.G1 != z7) {
            this.G1 = z7;
            f0();
        }
        DecoderCounters decoderCounters = this.X0;
        e4.l lVar = this.e1;
        Handler handler = (Handler) lVar.f7959e;
        if (handler != null) {
            handler.post(new v(lVar, decoderCounters, 1));
        }
        this.f13893r1 = z6;
        this.f13894s1 = false;
    }

    @Override // cd.s, hc.e
    public final void n(long j, boolean z5) {
        super.n(j, z5);
        this.f13881f1.getClass();
        r0();
        t tVar = this.f13880d1;
        tVar.f13937m = 0L;
        tVar.f13940p = -1L;
        tVar.f13938n = -1L;
        this.f13901z1 = -9223372036854775807L;
        this.f13895t1 = -9223372036854775807L;
        this.f13899x1 = 0;
        if (!z5) {
            this.f13896u1 = -9223372036854775807L;
        } else {
            long j5 = this.f13882g1;
            this.f13896u1 = j5 > 0 ? SystemClock.elapsedRealtime() + j5 : -9223372036854775807L;
        }
    }

    @Override // cd.s
    public final int n0(cd.t tVar, Format format) {
        boolean z5;
        int i5 = 0;
        if (!ke.o.l(format.I)) {
            return hc.e.e(0, 0, 0);
        }
        boolean z6 = format.L != null;
        Context context = this.f13879c1;
        List u02 = u0(context, tVar, format, z6, false);
        if (z6 && u02.isEmpty()) {
            u02 = u0(context, tVar, format, false, false);
        }
        if (u02.isEmpty()) {
            return hc.e.e(1, 0, 0);
        }
        int i6 = format.f5226d0;
        if (i6 != 0 && i6 != 2) {
            return hc.e.e(2, 0, 0);
        }
        cd.o oVar = (cd.o) u02.get(0);
        boolean d6 = oVar.d(format);
        if (!d6) {
            for (int i10 = 1; i10 < u02.size(); i10++) {
                cd.o oVar2 = (cd.o) u02.get(i10);
                if (oVar2.d(format)) {
                    z5 = false;
                    d6 = true;
                    oVar = oVar2;
                    break;
                }
            }
        }
        z5 = true;
        int i11 = d6 ? 4 : 3;
        int i12 = oVar.e(format) ? 16 : 8;
        int i13 = oVar.f3446g ? 64 : 0;
        int i14 = z5 ? IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT : 0;
        if (d0.a >= 26 && "video/dolby-vision".equals(format.I) && !g.a(context)) {
            i14 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
        }
        if (d6) {
            List u03 = u0(context, tVar, format, z6, true);
            if (!u03.isEmpty()) {
                Pattern pattern = z.a;
                ArrayList arrayList = new ArrayList(u03);
                Collections.sort(arrayList, new cd.u(i5, new app.rive.runtime.kotlin.core.a(5, format)));
                cd.o oVar3 = (cd.o) arrayList.get(0);
                if (oVar3.d(format) && oVar3.e(format)) {
                    i5 = 32;
                }
            }
        }
        return i11 | i12 | i5 | i13 | i14;
    }

    @Override // hc.e
    public final void p() {
        a3.f fVar = this.f13881f1;
        try {
            try {
                D();
                f0();
                nc.k kVar = this.a0;
                if (kVar != null) {
                    kVar.d(null);
                }
                this.a0 = null;
            } catch (Throwable th2) {
                nc.k kVar2 = this.a0;
                if (kVar2 != null) {
                    kVar2.d(null);
                }
                this.a0 = null;
                throw th2;
            }
        } finally {
            fVar.getClass();
            k kVar3 = this.f13889n1;
            if (kVar3 != null) {
                if (this.f13888m1 == kVar3) {
                    this.f13888m1 = null;
                }
                kVar3.release();
                this.f13889n1 = null;
            }
        }
    }

    @Override // hc.e
    public final void q() {
        this.f13898w1 = 0;
        this.f13897v1 = SystemClock.elapsedRealtime();
        this.A1 = SystemClock.elapsedRealtime() * 1000;
        this.B1 = 0L;
        this.C1 = 0;
        t tVar = this.f13880d1;
        tVar.f13930d = true;
        tVar.f13937m = 0L;
        tVar.f13940p = -1L;
        tVar.f13938n = -1L;
        q qVar = tVar.f13928b;
        if (qVar != null) {
            s sVar = tVar.f13929c;
            sVar.getClass();
            sVar.f13925e.sendEmptyMessage(1);
            qVar.d(new hc.m(27, tVar));
        }
        tVar.c(false);
    }

    @Override // hc.e
    public final void r() {
        this.f13896u1 = -9223372036854775807L;
        w0();
        int i5 = this.C1;
        if (i5 != 0) {
            long j = this.B1;
            e4.l lVar = this.e1;
            Handler handler = (Handler) lVar.f7959e;
            if (handler != null) {
                handler.post(new u(lVar, j, i5, 1));
            }
            this.B1 = 0L;
            this.C1 = 0;
        }
        t tVar = this.f13880d1;
        tVar.f13930d = false;
        q qVar = tVar.f13928b;
        if (qVar != null) {
            qVar.r();
            s sVar = tVar.f13929c;
            sVar.getClass();
            sVar.f13925e.sendEmptyMessage(2);
        }
        tVar.a();
    }

    public final void r0() {
        cd.l lVar;
        this.f13892q1 = false;
        if (d0.a < 23 || !this.G1 || (lVar = this.f3462g0) == null) {
            return;
        }
        this.I1 = new h(this, lVar);
    }

    @Override // cd.s, hc.e
    public final void u(long j, long j5) {
        super.u(j, j5);
        this.f13881f1.getClass();
    }

    public final void w0() {
        if (this.f13898w1 > 0) {
            long elapsedRealtime = SystemClock.elapsedRealtime();
            long j = elapsedRealtime - this.f13897v1;
            int i5 = this.f13898w1;
            e4.l lVar = this.e1;
            Handler handler = (Handler) lVar.f7959e;
            if (handler != null) {
                handler.post(new u(lVar, i5, j));
            }
            this.f13898w1 = 0;
            this.f13897v1 = elapsedRealtime;
        }
    }

    @Override // cd.s, hc.e
    public final void x(float f2, float f10) {
        super.x(f2, f10);
        t tVar = this.f13880d1;
        tVar.f13935i = f2;
        tVar.f13937m = 0L;
        tVar.f13940p = -1L;
        tVar.f13938n = -1L;
        tVar.c(false);
    }

    public final void x0() {
        this.f13894s1 = true;
        if (this.f13892q1) {
            return;
        }
        this.f13892q1 = true;
        Surface surface = this.f13888m1;
        e4.l lVar = this.e1;
        Handler handler = (Handler) lVar.f7959e;
        if (handler != null) {
            handler.post(new app.rive.core.a(lVar, surface, SystemClock.elapsedRealtime(), 4));
        }
        this.f13890o1 = true;
    }

    public final void y0(VideoSize videoSize) {
        if (videoSize.equals(VideoSize.f5575w) || videoSize.equals(this.F1)) {
            return;
        }
        this.F1 = videoSize;
        this.e1.N(videoSize);
    }

    public final void z0(cd.l lVar, int i5) {
        ke.b.c("releaseOutputBuffer");
        lVar.releaseOutputBuffer(i5, true);
        ke.b.t();
        this.X0.f5381e++;
        this.f13899x1 = 0;
        this.f13881f1.getClass();
        this.A1 = SystemClock.elapsedRealtime() * 1000;
        y0(this.E1);
        x0();
    }
}
