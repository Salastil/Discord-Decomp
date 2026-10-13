package j$.time.temporal;

import j$.time.Duration;

/* loaded from: classes2.dex */
public enum h implements l {
    WEEK_BASED_YEARS("WeekBasedYears"),
    QUARTER_YEARS("QuarterYears");

    public final String a;

    static {
        Duration.a(31556952L, 0);
        Duration.a(7889238L, 0);
    }

    h(String str) {
        this.a = str;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.a;
    }
}
