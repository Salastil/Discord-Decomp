package ie;

import android.text.TextUtils;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public abstract class e0 {
    public static final Pattern a = Pattern.compile("bytes (\\d+)-(\\d+)/(?:\\d+|\\*)");

    /* renamed from: b, reason: collision with root package name */
    public static final Pattern f10666b = Pattern.compile("bytes (?:(?:\\d+-\\d+)|\\*)/(\\d+)");

    public static String a(long j, long j5) {
        if (j == 0 && j5 == -1) {
            return null;
        }
        StringBuilder n6 = k0.d.n(j, "bytes=", "-");
        if (j5 != -1) {
            n6.append((j + j5) - 1);
        }
        return n6.toString();
    }

    /* JADX WARN: Removed duplicated region for block: B:24:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:6:0x002d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static long b(String str, String str2) {
        long parseLong;
        if (!TextUtils.isEmpty(str)) {
            try {
                parseLong = Long.parseLong(str);
            } catch (NumberFormatException unused) {
                ke.b.r("HttpUtil", "Unexpected Content-Length [" + str + "]");
            }
            if (!TextUtils.isEmpty(str2)) {
                return parseLong;
            }
            Matcher matcher = a.matcher(str2);
            if (!matcher.matches()) {
                return parseLong;
            }
            try {
                String group = matcher.group(2);
                group.getClass();
                long parseLong2 = Long.parseLong(group);
                String group2 = matcher.group(1);
                group2.getClass();
                long parseLong3 = (parseLong2 - Long.parseLong(group2)) + 1;
                if (parseLong < 0) {
                    return parseLong3;
                }
                if (parseLong == parseLong3) {
                    return parseLong;
                }
                ke.b.N("HttpUtil", "Inconsistent headers [" + str + "] [" + str2 + "]");
                return Math.max(parseLong, parseLong3);
            } catch (NumberFormatException unused2) {
                ke.b.r("HttpUtil", "Unexpected Content-Range [" + str2 + "]");
                return parseLong;
            }
        }
        parseLong = -1;
        if (!TextUtils.isEmpty(str2)) {
        }
    }

    public static long c(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1L;
        }
        Matcher matcher = f10666b.matcher(str);
        if (!matcher.matches()) {
            return -1L;
        }
        String group = matcher.group(1);
        group.getClass();
        return Long.parseLong(group);
    }
}
