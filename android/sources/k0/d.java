package k0;

import android.util.Log;
import com.discord.jank_stats.JankScreenContext;
import com.discord.primitives.ChannelId;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import org.webrtc.Logging;

/* loaded from: classes.dex */
public abstract /* synthetic */ class d {
    public static int a(int i5) {
        switch (i5) {
            case 0:
                return 1;
            case 1:
                return 2;
            case 2:
                return 3;
            case 3:
                return 4;
            case 4:
                return 5;
            case 5:
                return 6;
            case 6:
                return 7;
            case 7:
                return 8;
            case 8:
                return 9;
            default:
                throw new IllegalArgumentException(i(i5, "Unknown enum value: "));
        }
    }

    public static /* synthetic */ String b(int i5) {
        switch (i5) {
            case 1:
                return "bluetooth";
            case 2:
                return "cellular";
            case 3:
                return "ethernet";
            case 4:
                return "none";
            case 5:
                return JankScreenContext.UNKNOWN_SCREEN;
            case 6:
                return "wifi";
            case 7:
                return "wimax";
            case 8:
                return "vpn";
            default:
                throw null;
        }
    }

    public static float c(float f2, float f10, float f11, float f12) {
        return ((f2 - f10) * f11) + f12;
    }

    public static int d(int i5, int i6, boolean z5) {
        return (Boolean.hashCode(z5) + i5) * i6;
    }

    public static int e(long j, int i5, int i6) {
        return (ChannelId.m1168hashCodeimpl(j) + i5) * i6;
    }

    public static Object f(int i5, ArrayList arrayList) {
        return arrayList.get(arrayList.size() - i5);
    }

    public static Object g(int i5, List list) {
        return list.get(list.size() - i5);
    }

    public static String h(char c6, String str, String str2) {
        return str + str2 + c6;
    }

    public static String i(int i5, String str) {
        return str + i5;
    }

    public static String j(long j, String str) {
        return str + j;
    }

    public static String k(String str, String str2) {
        return str + str2;
    }

    public static String l(String str, String str2, String str3) {
        return str + str2 + str3;
    }

    public static String m(StringBuilder sb2, int i5, String str) {
        sb2.append(i5);
        sb2.append(str);
        return sb2.toString();
    }

    public static StringBuilder n(long j, String str, String str2) {
        StringBuilder sb2 = new StringBuilder(str);
        sb2.append(j);
        sb2.append(str2);
        return sb2;
    }

    public static StringBuilder o(String str) {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        return sb2;
    }

    public static StringBuilder p(String str, String str2) {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        sb2.append(str2);
        return sb2;
    }

    public static void q(int i5, String str, String str2) {
        Log.d(str2, str + i5);
    }

    public static void r(Integer num, String str, String str2, String str3, StringBuilder sb2) {
        sb2.append(num);
        sb2.append(str);
        sb2.append(str2);
        sb2.append(str3);
    }

    public static void s(StringBuilder sb2, Integer num, String str, Integer num2, String str2) {
        sb2.append(num);
        sb2.append(str);
        sb2.append(num2);
        sb2.append(str2);
    }

    public static boolean t(HashSet hashSet, HashSet hashSet2, HashSet hashSet3) {
        hashSet.removeAll(hashSet2);
        hashSet.removeAll(hashSet3);
        return hashSet.isEmpty();
    }

    public static boolean u(Map map, HashSet hashSet) {
        hashSet.removeAll(map.keySet());
        return hashSet.isEmpty();
    }

    public static void v(int i5, String str, String str2) {
        Logging.d(str2, str + i5);
    }

    public static /* synthetic */ String w(int i5) {
        switch (i5) {
            case 1:
                return "NONE";
            case 2:
                return "LEFT";
            case 3:
                return "TOP";
            case 4:
                return "RIGHT";
            case 5:
                return "BOTTOM";
            case 6:
                return "BASELINE";
            case 7:
                return "CENTER";
            case 8:
                return "CENTER_X";
            case 9:
                return "CENTER_Y";
            default:
                throw null;
        }
    }
}
