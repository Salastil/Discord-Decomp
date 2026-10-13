package q4;

import java.util.ArrayList;

/* loaded from: classes.dex */
public final class d {
    public final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public final char f16676b;

    /* renamed from: c, reason: collision with root package name */
    public final double f16677c;

    /* renamed from: d, reason: collision with root package name */
    public final String f16678d;

    /* renamed from: e, reason: collision with root package name */
    public final String f16679e;

    public d(ArrayList arrayList, char c6, double d6, String str, String str2) {
        this.a = arrayList;
        this.f16676b = c6;
        this.f16677c = d6;
        this.f16678d = str;
        this.f16679e = str2;
    }

    public static int a(char c6, String str, String str2) {
        return str2.hashCode() + a3.e.d(c6 * 31, 31, str);
    }

    public final int hashCode() {
        return a(this.f16676b, this.f16679e, this.f16678d);
    }
}
