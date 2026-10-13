package fe;

import hc.g1;
import java.util.regex.Pattern;
import ke.d0;
import ke.w;

/* loaded from: classes3.dex */
public abstract class l {
    public static final Pattern a = Pattern.compile("^NOTE([ \t].*)?$");

    public static boolean a(w wVar) {
        wVar.getClass();
        String h6 = wVar.h(ei.d.f8100c);
        return h6 != null && h6.startsWith("WEBVTT");
    }

    public static float b(String str) {
        if (str.endsWith("%")) {
            return Float.parseFloat(str.substring(0, str.length() - 1)) / 100.0f;
        }
        throw new NumberFormatException("Percentages must end with %");
    }

    public static long c(String str) {
        int i5 = d0.a;
        String[] split = str.split("\\.", 2);
        long j = 0;
        for (String str2 : split[0].split(":", -1)) {
            j = (j * 60) + Long.parseLong(str2);
        }
        long j5 = j * 1000;
        if (split.length == 2) {
            j5 += Long.parseLong(split[1]);
        }
        return j5 * 1000;
    }

    public static void d(w wVar) {
        int i5 = wVar.f13363b;
        if (a(wVar)) {
            return;
        }
        wVar.F(i5);
        throw g1.a("Expected WEBVTT. Got " + wVar.h(ei.d.f8100c), null);
    }
}
