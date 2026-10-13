package ke;

import android.app.UiModeManager;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.text.TextUtils;
import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.h0;
import com.discord.chat.presentation.message.view.MediaImageViewKt;
import com.discord.jank_stats.JankScreenContext;
import com.discord.media.engine.MediaEngine;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Player;
import hc.g1;
import j$.util.DesugarTimeZone;
import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Formatter;
import java.util.GregorianCalendar;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.MissingResourceException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.zip.DataFormatException;
import java.util.zip.Inflater;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public abstract class d0 {
    public static final int a;

    /* renamed from: b, reason: collision with root package name */
    public static final String f13294b;

    /* renamed from: c, reason: collision with root package name */
    public static final String f13295c;

    /* renamed from: d, reason: collision with root package name */
    public static final String f13296d;

    /* renamed from: e, reason: collision with root package name */
    public static final String f13297e;

    /* renamed from: f, reason: collision with root package name */
    public static final byte[] f13298f;

    /* renamed from: g, reason: collision with root package name */
    public static final Pattern f13299g;

    /* renamed from: h, reason: collision with root package name */
    public static final Pattern f13300h;

    /* renamed from: i, reason: collision with root package name */
    public static final Pattern f13301i;
    public static final Pattern j;
    public static HashMap k;

    /* renamed from: l, reason: collision with root package name */
    public static final String[] f13302l;

    /* renamed from: m, reason: collision with root package name */
    public static final String[] f13303m;

    /* renamed from: n, reason: collision with root package name */
    public static final int[] f13304n;

    /* renamed from: o, reason: collision with root package name */
    public static final int[] f13305o;

    static {
        int i5 = Build.VERSION.SDK_INT;
        a = i5;
        String str = Build.DEVICE;
        f13294b = str;
        String str2 = Build.MANUFACTURER;
        f13295c = str2;
        String str3 = Build.MODEL;
        f13296d = str3;
        f13297e = str + ", " + str3 + ", " + str2 + ", " + i5;
        f13298f = new byte[0];
        f13299g = Pattern.compile("(\\d\\d\\d\\d)\\-(\\d\\d)\\-(\\d\\d)[Tt](\\d\\d):(\\d\\d):(\\d\\d)([\\.,](\\d+))?([Zz]|((\\+|\\-)(\\d?\\d):?(\\d\\d)))?");
        f13300h = Pattern.compile("^(-)?P(([0-9]*)Y)?(([0-9]*)M)?(([0-9]*)D)?(T(([0-9]*)H)?(([0-9]*)M)?(([0-9.]*)S)?)?$");
        f13301i = Pattern.compile("%([A-Fa-f0-9]{2})");
        j = Pattern.compile("(?:.*\\.)?isml?(?:/(manifest(.*))?)?", 2);
        f13302l = new String[]{"alb", "sq", "arm", "hy", "baq", "eu", "bur", "my", "tib", "bo", "chi", "zh", "cze", "cs", "dut", "nl", "ger", "de", "gre", "el", "fre", "fr", "geo", "ka", "ice", "is", "mac", "mk", "mao", "mi", "may", "ms", "per", "fa", "rum", "ro", "scc", "hbs-srp", "slo", "sk", "wel", "cy", StackTraceHelper.ID_KEY, "ms-ind", "iw", "he", "heb", "he", "ji", "yi", "arb", "ar-arb", "in", "ms-ind", "ind", "ms-ind", "nb", "no-nob", "nob", "no-nob", "nn", "no-nno", "nno", "no-nno", "tw", "ak-twi", "twi", "ak-twi", "bs", "hbs-bos", "bos", "hbs-bos", "hr", "hbs-hrv", "hrv", "hbs-hrv", "sr", "hbs-srp", "srp", "hbs-srp", "cmn", "zh-cmn", "hak", "zh-hak", "nan", "zh-nan", "hsn", "zh-hsn"};
        f13303m = new String[]{"i-lux", "lb", "i-hak", "zh-hak", "i-navajo", "nv", "no-bok", "no-nob", "no-nyn", "no-nno", "zh-guoyu", "zh-cmn", "zh-hakka", "zh-hak", "zh-min-nan", "zh-nan", "zh-xiang", "zh-hsn"};
        f13304n = new int[]{0, 79764919, 159529838, 222504665, 319059676, 398814059, 445009330, 507990021, 638119352, 583659535, 797628118, 726387553, 890018660, 835552979, 1015980042, 944750013, 1276238704, 1221641927, 1167319070, 1095957929, 1595256236, 1540665371, 1452775106, 1381403509, 1780037320, 1859660671, 1671105958, 1733955601, 2031960084, 2111593891, 1889500026, 1952343757, -1742489888, -1662866601, -1851683442, -1788833735, -1960329156, -1880695413, -2103051438, -2040207643, -1104454824, -1159051537, -1213636554, -1284997759, -1389417084, -1444007885, -1532160278, -1603531939, -734892656, -789352409, -575645954, -646886583, -952755380, -1007220997, -827056094, -898286187, -231047128, -151282273, -71779514, -8804623, -515967244, -436212925, -390279782, -327299027, 881225847, 809987520, 1023691545, 969234094, 662832811, 591600412, 771767749, 717299826, 311336399, 374308984, 453813921, 533576470, 25881363, 88864420, 134795389, 214552010, 2023205639, 2086057648, 1897238633, 1976864222, 1804852699, 1867694188, 1645340341, 1724971778, 1587496639, 1516133128, 1461550545, 1406951526, 1302016099, 1230646740, 1142491917, 1087903418, -1398421865, -1469785312, -1524105735, -1578704818, -1079922613, -1151291908, -1239184603, -1293773166, -1968362705, -1905510760, -2094067647, -2014441994, -1716953613, -1654112188, -1876203875, -1796572374, -525066777, -462094256, -382327159, -302564546, -206542021, -143559028, -97365931, -17609246, -960696225, -1031934488, -817968335, -872425850, -709327229, -780559564, -600130067, -654598054, 1762451694, 1842216281, 1619975040, 1682949687, 2047383090, 2127137669, 1938468188, 2001449195, 1325665622, 1271206113, 1183200824, 1111960463, 1543535498, 1489069629, 1434599652, 1363369299, 622672798, 568075817, 748617968, 677256519, 907627842, 853037301, 1067152940, 995781531, 51762726, 131386257, 177728840, 240578815, 269590778, 349224269, 429104020, 491947555, -248556018, -168932423, -122852000, -60002089, -500490030, -420856475, -341238852, -278395381, -685261898, -739858943, -559578920, -630940305, -1004286614, -1058877219, -845023740, -916395085, -1119974018, -1174433591, -1262701040, -1333941337, -1371866206, -1426332139, -1481064244, -1552294533, -1690935098, -1611170447, -1833673816, -1770699233, -2009983462, -1930228819, -2119160460, -2056179517, 1569362073, 1498123566, 1409854455, 1355396672, 1317987909, 1246755826, 1192025387, 1137557660, 2072149281, 2135122070, 1912620623, 1992383480, 1753615357, 1816598090, 1627664531, 1707420964, 295390185, 358241886, 404320391, 483945776, 43990325, 106832002, 186451547, 266083308, 932423249, 861060070, 1041341759, 986742920, 613929101, 542559546, 756411363, 701822548, -978770311, -1050133554, -869589737, -924188512, -693284699, -764654318, -550540341, -605129092, -475935807, -413084042, -366743377, -287118056, -257573603, -194731862, -114850189, -35218492, -1984365303, -1921392450, -2143631769, -2063868976, -1698919467, -1635936670, -1824608069, -1744851700, -1347415887, -1418654458, -1506661409, -1561119128, -1129027987, -1200260134, -1254728445, -1309196108};
        f13305o = new int[]{0, 7, 14, 9, 28, 27, 18, 21, 56, 63, 54, 49, 36, 35, 42, 45, 112, 119, 126, 121, 108, 107, 98, 101, 72, 79, 70, 65, 84, 83, 90, 93, 224, 231, 238, 233, 252, 251, 242, 245, JfifUtil.MARKER_SOI, 223, 214, 209, 196, 195, 202, 205, 144, 151, 158, 153, 140, 139, 130, 133, 168, 175, 166, 161, 180, 179, 186, 189, 199, JfifUtil.MARKER_SOFn, 201, 206, 219, 220, 213, 210, 255, 248, 241, 246, 227, 228, 237, 234, 183, 176, 185, 190, 171, 172, 165, 162, 143, 136, 129, 134, 147, 148, 157, 154, 39, 32, 41, 46, 59, 60, 53, 50, 31, 24, 17, 22, 3, 4, 13, 10, 87, 80, 89, 94, 75, 76, 69, 66, 111, 104, 97, 102, 115, 116, 125, 122, 137, 142, 135, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, 149, MediaImageViewKt.OBSCURED_IMAGE_MIN_WIDTH, 155, 156, 177, 182, 191, 184, 173, 170, 163, 164, 249, 254, 247, 240, 229, 226, 235, 236, 193, 198, 207, h0.DEFAULT_DRAG_ANIMATION_DURATION, 221, JfifUtil.MARKER_SOS, 211, MediaImageViewKt.OBSCURED_IMAGE_MIN_HEIGHT, 105, 110, 103, 96, 117, MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION, 123, 124, 81, 86, 95, 88, 77, 74, 67, 68, 25, 30, 23, 16, 5, 2, 11, 12, 33, 38, 47, 40, 61, 58, 51, 52, 78, 73, 64, 71, 82, 85, 92, 91, 118, 113, 120, 127, 106, 109, 100, 99, 62, 57, 48, 55, 34, 37, 44, 43, 6, 1, 8, 15, 26, 29, 20, 19, 174, 169, 160, 167, 178, 181, 188, 187, 150, 145, 152, 159, 138, 141, 132, 131, 222, JfifUtil.MARKER_EOI, JfifUtil.MARKER_RST0, JfifUtil.MARKER_RST7, 194, 197, 204, 203, 230, JfifUtil.MARKER_APP1, 232, 239, h0.DEFAULT_SWIPE_ANIMATION_DURATION, 253, 244, 243};
    }

    public static String A(String str) {
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getMethod("get", String.class).invoke(cls, str);
        } catch (Exception e9) {
            b.s("Util", "Failed to read system property ".concat(str), e9);
            return null;
        }
    }

    public static String B(int i5) {
        switch (i5) {
            case -2:
                return "none";
            case -1:
                return JankScreenContext.UNKNOWN_SCREEN;
            case 0:
                return "default";
            case 1:
                return MediaStreamTrack.AUDIO_TRACK_KIND;
            case 2:
                return MediaStreamTrack.VIDEO_TRACK_KIND;
            case 3:
                return "text";
            case 4:
                return "image";
            case 5:
                return "metadata";
            case 6:
                return "camera motion";
            default:
                return i5 >= 10000 ? s4.h.e(i5, "custom (", ")") : "?";
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x002a  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x002e A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean C(Player player) {
        boolean z5 = false;
        if (player == null) {
            return false;
        }
        int w5 = player.w();
        if (w5 != 1 || !player.E(2)) {
            if (w5 == 4 && player.E(4)) {
                player.n();
            }
            if (player.E(1)) {
                return z5;
            }
            player.B();
            return true;
        }
        player.a();
        z5 = true;
        if (player.E(1)) {
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x0040, code lost:
    
        if (r0.equals("m3u8") == false) goto L14;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int D(Uri uri) {
        int i5;
        String scheme = uri.getScheme();
        char c6 = 3;
        if (scheme != null && tn.g.j("rtsp", scheme)) {
            return 3;
        }
        String lastPathSegment = uri.getLastPathSegment();
        if (lastPathSegment != null) {
            int lastIndexOf = lastPathSegment.lastIndexOf(46);
            if (lastIndexOf >= 0) {
                String x5 = tn.g.x(lastPathSegment.substring(lastIndexOf + 1));
                x5.getClass();
                switch (x5.hashCode()) {
                    case 104579:
                        if (x5.equals("ism")) {
                            c6 = 0;
                            break;
                        }
                        c6 = 65535;
                        break;
                    case 108321:
                        if (x5.equals("mpd")) {
                            c6 = 1;
                            break;
                        }
                        c6 = 65535;
                        break;
                    case 3242057:
                        if (x5.equals("isml")) {
                            c6 = 2;
                            break;
                        }
                        c6 = 65535;
                        break;
                    case 3299913:
                        break;
                    default:
                        c6 = 65535;
                        break;
                }
                switch (c6) {
                    case 0:
                    case 2:
                        i5 = 1;
                        break;
                    case 1:
                        i5 = 0;
                        break;
                    case 3:
                        i5 = 2;
                        break;
                    default:
                        i5 = 4;
                        break;
                }
                if (i5 != 4) {
                    return i5;
                }
            }
            String path = uri.getPath();
            path.getClass();
            Matcher matcher = j.matcher(path);
            if (matcher.matches()) {
                String group = matcher.group(2);
                if (group != null) {
                    if (group.contains("format=mpd-time-csf")) {
                        return 0;
                    }
                    if (group.contains("format=m3u8-aapl")) {
                        return 2;
                    }
                }
                return 1;
            }
        }
        return 4;
    }

    /* JADX WARN: Code restructure failed: missing block: B:28:0x0062, code lost:
    
        return false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean E(w wVar, w wVar2, Inflater inflater) {
        if (wVar.a() <= 0) {
            return false;
        }
        if (wVar2.a.length < wVar.a()) {
            wVar2.b(wVar.a() * 2);
        }
        if (inflater == null) {
            inflater = new Inflater();
        }
        inflater.setInput(wVar.a, wVar.f13363b, wVar.a());
        int i5 = 0;
        while (true) {
            try {
                byte[] bArr = wVar2.a;
                i5 += inflater.inflate(bArr, i5, bArr.length - i5);
                if (!inflater.finished()) {
                    if (inflater.needsDictionary() || inflater.needsInput()) {
                        break;
                    }
                    byte[] bArr2 = wVar2.a;
                    if (i5 == bArr2.length) {
                        wVar2.b(bArr2.length * 2);
                    }
                } else {
                    wVar2.E(i5);
                    inflater.reset();
                    return true;
                }
            } catch (DataFormatException unused) {
                return false;
            } finally {
                inflater.reset();
            }
        }
    }

    public static boolean F(int i5) {
        return i5 == 3 || i5 == 2 || i5 == 268435456 || i5 == 536870912 || i5 == 805306368 || i5 == 4;
    }

    public static boolean G(int i5) {
        return i5 == 10 || i5 == 13;
    }

    public static boolean H(Context context) {
        UiModeManager uiModeManager = (UiModeManager) context.getApplicationContext().getSystemService("uimode");
        return uiModeManager != null && uiModeManager.getCurrentModeType() == 4;
    }

    public static long I(long j5) {
        return (j5 == -9223372036854775807L || j5 == Long.MIN_VALUE) ? j5 : j5 * 1000;
    }

    public static String J(String str) {
        if (str == null) {
            return null;
        }
        String replace = str.replace('_', '-');
        if (!replace.isEmpty() && !replace.equals("und")) {
            str = replace;
        }
        String x5 = tn.g.x(str);
        int i5 = 0;
        String str2 = x5.split("-", 2)[0];
        if (k == null) {
            String[] iSOLanguages = Locale.getISOLanguages();
            int length = iSOLanguages.length;
            String[] strArr = f13302l;
            HashMap hashMap = new HashMap(length + strArr.length);
            for (String str3 : iSOLanguages) {
                try {
                    String iSO3Language = new Locale(str3).getISO3Language();
                    if (!TextUtils.isEmpty(iSO3Language)) {
                        hashMap.put(iSO3Language, str3);
                    }
                } catch (MissingResourceException unused) {
                }
            }
            for (int i6 = 0; i6 < strArr.length; i6 += 2) {
                hashMap.put(strArr[i6], strArr[i6 + 1]);
            }
            k = hashMap;
        }
        String str4 = (String) k.get(str2);
        if (str4 != null) {
            StringBuilder o6 = k0.d.o(str4);
            o6.append(x5.substring(str2.length()));
            x5 = o6.toString();
            str2 = str4;
        }
        if (!"no".equals(str2) && !"i".equals(str2) && !"zh".equals(str2)) {
            return x5;
        }
        while (true) {
            String[] strArr2 = f13303m;
            if (i5 >= strArr2.length) {
                return x5;
            }
            if (x5.startsWith(strArr2[i5])) {
                return strArr2[i5 + 1] + x5.substring(strArr2[i5].length());
            }
            i5 += 2;
        }
    }

    public static Object[] K(int i5, Object[] objArr) {
        b.g(i5 <= objArr.length);
        return Arrays.copyOf(objArr, i5);
    }

    public static long L(String str) {
        Matcher matcher = f13299g.matcher(str);
        if (!matcher.matches()) {
            throw g1.a("Invalid date/time format: " + str, null);
        }
        int i5 = 0;
        if (matcher.group(9) != null && !matcher.group(9).equalsIgnoreCase("Z")) {
            i5 = Integer.parseInt(matcher.group(13)) + (Integer.parseInt(matcher.group(12)) * 60);
            if ("-".equals(matcher.group(11))) {
                i5 *= -1;
            }
        }
        GregorianCalendar gregorianCalendar = new GregorianCalendar(DesugarTimeZone.getTimeZone("GMT"));
        gregorianCalendar.clear();
        gregorianCalendar.set(Integer.parseInt(matcher.group(1)), Integer.parseInt(matcher.group(2)) - 1, Integer.parseInt(matcher.group(3)), Integer.parseInt(matcher.group(4)), Integer.parseInt(matcher.group(5)), Integer.parseInt(matcher.group(6)));
        if (!TextUtils.isEmpty(matcher.group(8))) {
            gregorianCalendar.set(14, new BigDecimal("0." + matcher.group(8)).movePointRight(3).intValue());
        }
        long timeInMillis = gregorianCalendar.getTimeInMillis();
        return i5 != 0 ? timeInMillis - (i5 * LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE) : timeInMillis;
    }

    public static void M(Handler handler, Runnable runnable) {
        if (handler.getLooper().getThread().isAlive()) {
            if (handler.getLooper() == Looper.myLooper()) {
                runnable.run();
            } else {
                handler.post(runnable);
            }
        }
    }

    public static void N(ArrayList arrayList, int i5, int i6) {
        if (i5 < 0 || i6 > arrayList.size() || i5 > i6) {
            throw new IllegalArgumentException();
        }
        if (i5 != i6) {
            arrayList.subList(i5, i6).clear();
        }
    }

    public static long O(int i5, long j5) {
        return (j5 * 1000000) / i5;
    }

    public static long P(long j5, long j7, long j10) {
        if (j10 >= j7 && j10 % j7 == 0) {
            return j5 / (j10 / j7);
        }
        if (j10 < j7 && j7 % j10 == 0) {
            return (j7 / j10) * j5;
        }
        return (long) (j5 * (j7 / j10));
    }

    public static void Q(long[] jArr, long j5) {
        int i5 = 0;
        if (j5 >= 1000000 && j5 % 1000000 == 0) {
            long j7 = j5 / 1000000;
            while (i5 < jArr.length) {
                jArr[i5] = jArr[i5] / j7;
                i5++;
            }
            return;
        }
        if (j5 >= 1000000 || 1000000 % j5 != 0) {
            double d6 = 1000000 / j5;
            while (i5 < jArr.length) {
                jArr[i5] = (long) (jArr[i5] * d6);
                i5++;
            }
            return;
        }
        long j10 = 1000000 / j5;
        while (i5 < jArr.length) {
            jArr[i5] = jArr[i5] * j10;
            i5++;
        }
    }

    public static boolean R(Player player) {
        return player == null || !player.g() || player.w() == 1 || player.w() == 4;
    }

    public static String[] S(String str) {
        return TextUtils.isEmpty(str) ? new String[0] : str.trim().split("(\\s*,\\s*)", -1);
    }

    public static byte[] T(InputStream inputStream) {
        byte[] bArr = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        while (true) {
            int read = inputStream.read(bArr);
            if (read == -1) {
                return byteArrayOutputStream.toByteArray();
            }
            byteArrayOutputStream.write(bArr, 0, read);
        }
    }

    public static long U(long j5) {
        return (j5 == -9223372036854775807L || j5 == Long.MIN_VALUE) ? j5 : j5 / 1000;
    }

    public static boolean a(Object obj, Object obj2) {
        return obj == null ? obj2 == null : obj.equals(obj2);
    }

    public static int b(long[] jArr, long j5, boolean z5) {
        int i5;
        int binarySearch = Arrays.binarySearch(jArr, j5);
        if (binarySearch < 0) {
            return ~binarySearch;
        }
        while (true) {
            i5 = binarySearch + 1;
            if (i5 >= jArr.length || jArr[i5] != j5) {
                break;
            }
            binarySearch = i5;
        }
        return z5 ? binarySearch : i5;
    }

    public static int c(Long l6, boolean z5, List list) {
        int i5;
        int binarySearch = Collections.binarySearch(list, l6);
        if (binarySearch < 0) {
            i5 = -(binarySearch + 2);
        } else {
            while (true) {
                int i6 = binarySearch - 1;
                if (i6 < 0 || ((Comparable) list.get(i6)).compareTo(l6) != 0) {
                    break;
                }
                binarySearch = i6;
            }
            i5 = binarySearch;
        }
        return z5 ? Math.max(0, i5) : i5;
    }

    public static int d(int[] iArr, int i5, boolean z5, boolean z6) {
        int i6;
        int i10;
        int binarySearch = Arrays.binarySearch(iArr, i5);
        if (binarySearch < 0) {
            i10 = -(binarySearch + 2);
        } else {
            while (true) {
                i6 = binarySearch - 1;
                if (i6 < 0 || iArr[i6] != i5) {
                    break;
                }
                binarySearch = i6;
            }
            i10 = z5 ? binarySearch : i6;
        }
        return z6 ? Math.max(0, i10) : i10;
    }

    public static int e(long[] jArr, long j5, boolean z5) {
        int i5;
        int binarySearch = Arrays.binarySearch(jArr, j5);
        if (binarySearch < 0) {
            i5 = -(binarySearch + 2);
        } else {
            while (true) {
                int i6 = binarySearch - 1;
                if (i6 < 0 || jArr[i6] != j5) {
                    break;
                }
                binarySearch = i6;
            }
            i5 = binarySearch;
        }
        return z5 ? Math.max(0, i5) : i5;
    }

    public static int f(int i5, int i6) {
        return ((i5 + i6) - 1) / i6;
    }

    public static void g(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException unused) {
            }
        }
    }

    public static float h(float f2, float f10, float f11) {
        return Math.max(f10, Math.min(f2, f11));
    }

    public static int i(int i5, int i6, int i10) {
        return Math.max(i6, Math.min(i5, i10));
    }

    public static long j(long j5, long j7, long j10) {
        return Math.max(j7, Math.min(j5, j10));
    }

    public static boolean k(Object[] objArr, Comparable comparable) {
        for (Object obj : objArr) {
            if (a(obj, comparable)) {
                return true;
            }
        }
        return false;
    }

    public static int l(int i5, int i6, int i10, byte[] bArr) {
        while (i5 < i6) {
            i10 = f13304n[((i10 >>> 24) ^ (bArr[i5] & 255)) & 255] ^ (i10 << 8);
            i5++;
        }
        return i10;
    }

    public static Handler m(Handler.Callback callback) {
        Looper myLooper = Looper.myLooper();
        b.l(myLooper);
        return new Handler(myLooper, callback);
    }

    public static String n(byte[] bArr) {
        return new String(bArr, ei.d.f8100c);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0015 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int o(int i5) {
        switch (i5) {
            case 1:
                return 4;
            case 2:
                return 12;
            case 3:
                return 28;
            case 4:
                return 204;
            case 5:
                return 220;
            case 6:
                return 252;
            case 7:
                return 1276;
            case 8:
                return 6396;
            case 9:
            case 11:
            default:
                return 0;
            case 10:
                if (a >= 32) {
                    return 737532;
                }
                break;
            case 12:
                return 743676;
        }
    }

    public static int p(int i5, String str) {
        int i6 = 0;
        for (String str2 : S(str)) {
            if (i5 == o.h(o.d(str2))) {
                i6++;
            }
        }
        return i6;
    }

    public static String q(int i5, String str) {
        String[] S = S(str);
        if (S.length == 0) {
            return null;
        }
        StringBuilder sb2 = new StringBuilder();
        for (String str2 : S) {
            if (i5 == o.h(o.d(str2))) {
                if (sb2.length() > 0) {
                    sb2.append(",");
                }
                sb2.append(str2);
            }
        }
        if (sb2.length() > 0) {
            return sb2.toString();
        }
        return null;
    }

    public static Drawable r(Context context, Resources resources, int i5) {
        return a >= 21 ? c0.a(context, resources, i5) : resources.getDrawable(i5);
    }

    public static int s(int i5) {
        if (i5 == 2 || i5 == 4) {
            return 6005;
        }
        if (i5 == 10) {
            return 6004;
        }
        if (i5 == 7) {
            return 6005;
        }
        if (i5 == 8) {
            return 6003;
        }
        switch (i5) {
            case 15:
                return 6003;
            case 16:
            case 18:
                return 6005;
            case 17:
            case 19:
            case 20:
            case 21:
            case 22:
                return 6004;
            default:
                switch (i5) {
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 28:
                        return 6002;
                    default:
                        return 6006;
                }
        }
    }

    public static int t(String str) {
        String[] split;
        int length;
        int i5 = 0;
        if (str == null || (length = (split = str.split("_", -1)).length) < 2) {
            return 0;
        }
        String str2 = split[length - 1];
        boolean z5 = length >= 3 && "neg".equals(split[length - 2]);
        try {
            str2.getClass();
            i5 = Integer.parseInt(str2);
            if (z5) {
                return -i5;
            }
        } catch (NumberFormatException unused) {
        }
        return i5;
    }

    public static long u(long j5, float f2) {
        return f2 == 1.0f ? j5 : Math.round(j5 * f2);
    }

    public static long v(long j5) {
        return j5 == -9223372036854775807L ? System.currentTimeMillis() : SystemClock.elapsedRealtime() + j5;
    }

    public static int w(int i5) {
        if (i5 == 8) {
            return 3;
        }
        if (i5 == 16) {
            return 2;
        }
        if (i5 != 24) {
            return i5 != 32 ? 0 : 805306368;
        }
        return 536870912;
    }

    public static int x(int i5, int i6) {
        if (i5 != 2) {
            if (i5 == 3) {
                return i6;
            }
            if (i5 != 4) {
                if (i5 != 268435456) {
                    if (i5 == 536870912) {
                        return i6 * 3;
                    }
                    if (i5 != 805306368) {
                        throw new IllegalArgumentException();
                    }
                }
            }
            return i6 * 4;
        }
        return i6 * 2;
    }

    public static long y(long j5, float f2) {
        return f2 == 1.0f ? j5 : Math.round(j5 / f2);
    }

    public static String z(StringBuilder sb2, Formatter formatter, long j5) {
        if (j5 == -9223372036854775807L) {
            j5 = 0;
        }
        String str = j5 < 0 ? "-" : "";
        long abs = (Math.abs(j5) + 500) / 1000;
        long j7 = abs % 60;
        long j10 = (abs / 60) % 60;
        long j11 = abs / 3600;
        sb2.setLength(0);
        return j11 > 0 ? formatter.format("%s%d:%02d:%02d", str, Long.valueOf(j11), Long.valueOf(j10), Long.valueOf(j7)).toString() : formatter.format("%s%02d:%02d", str, Long.valueOf(j10), Long.valueOf(j7)).toString();
    }
}
