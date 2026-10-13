package bg;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class f1 extends h1 {

    /* renamed from: d, reason: collision with root package name */
    public final String f2950d;

    public f1(String str) {
        this.f2950d = str;
    }

    @Override // bg.h1
    public final int a() {
        return h1.d((byte) 96);
    }

    @Override // java.lang.Comparable
    public final /* bridge */ /* synthetic */ int compareTo(Object obj) {
        h1 h1Var = (h1) obj;
        int a = h1Var.a();
        int d6 = h1.d((byte) 96);
        if (d6 != a) {
            return d6 - h1Var.a();
        }
        String str = ((f1) h1Var).f2950d;
        int length = str.length();
        String str2 = this.f2950d;
        if (str2.length() == length) {
            return str2.compareTo(str);
        }
        return str2.length() - str.length();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && f1.class == obj.getClass()) {
            return this.f2950d.equals(((f1) obj).f2950d);
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(h1.d((byte) 96)), this.f2950d});
    }

    public final String toString() {
        return com.discord.chat.bridge.botuikit.a.j(new StringBuilder("\""), this.f2950d, "\"");
    }
}
