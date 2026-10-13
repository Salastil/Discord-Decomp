package ls;

import java.util.Collections;
import java.util.Locale;
import java.util.Map;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: b, reason: collision with root package name */
    public static final /* synthetic */ int f14219b = 0;
    public final Map a = Collections.EMPTY_MAP;

    static {
        new f0(String.class, "CALENDAR_TYPE");
        new f0(Locale.class, "LANGUAGE");
        new f0(net.time4j.tz.f.class, "TIMEZONE_ID");
        new f0(net.time4j.tz.l.class, "TRANSITION_STRATEGY");
        new f0(f.class, "LENIENCY");
        new f0(i0.class, "TEXT_WIDTH");
        new f0(y.class, "OUTPUT_CONTEXT");
        new f0(Boolean.class, "PARSE_CASE_INSENSITIVE");
        new f0(Boolean.class, "PARSE_PARTIAL_COMPARE");
        new f0(Boolean.class, "PARSE_MULTIPLE_CONTEXT");
        new f0(x.class, "NUMBER_SYSTEM");
        new f0(Character.class, "ZERO_DIGIT");
        new f0(Boolean.class, "NO_GMT_PREFIX");
        new f0(Character.class, "DECIMAL_SEPARATOR");
        new f0(Character.class, "PAD_CHAR");
        new f0(Integer.class, "PIVOT_YEAR");
        new f0(Boolean.class, "TRAILING_CHARACTERS");
        new f0(Integer.class, "PROTECTED_CHARACTERS");
        new f0(String.class, "CALENDAR_VARIANT");
        new f0(ks.n.class, "START_OF_DAY");
        new f0(Boolean.class, "FOUR_DIGIT_YEAR");
        new f0(ns.e.class, "TIME_SCALE");
        new f0(String.class, "FORMAT_PATTERN");
        new a();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof a) {
            return this.a.equals(((a) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        Map map = this.a;
        StringBuilder sb2 = new StringBuilder(map.size() * 32);
        sb2.append(a.class.getName());
        sb2.append('[');
        sb2.append(map);
        sb2.append(']');
        return sb2.toString();
    }
}
