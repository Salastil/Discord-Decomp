package c3;

import java.util.Locale;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes.dex */
public final class a {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f3281b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f3282c;

    /* renamed from: d, reason: collision with root package name */
    public final int f3283d;

    /* renamed from: e, reason: collision with root package name */
    public final String f3284e;

    /* renamed from: f, reason: collision with root package name */
    public final int f3285f;

    /* renamed from: g, reason: collision with root package name */
    public final int f3286g;

    public a(String name, String type, String str, int i5, int i6, boolean z5) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(type, "type");
        this.a = name;
        this.f3281b = type;
        this.f3282c = z5;
        this.f3283d = i5;
        this.f3284e = str;
        this.f3285f = i6;
        int i10 = 5;
        if (type != null) {
            Locale US = Locale.US;
            Intrinsics.checkNotNullExpressionValue(US, "US");
            String upperCase = type.toUpperCase(US);
            Intrinsics.checkNotNullExpressionValue(upperCase, "this as java.lang.String).toUpperCase(locale)");
            if (StringsKt.D(upperCase, "INT", false)) {
                i10 = 3;
            } else if (StringsKt.D(upperCase, "CHAR", false) || StringsKt.D(upperCase, "CLOB", false) || StringsKt.D(upperCase, "TEXT", false)) {
                i10 = 2;
            } else if (!StringsKt.D(upperCase, "BLOB", false)) {
                i10 = (StringsKt.D(upperCase, "REAL", false) || StringsKt.D(upperCase, "FLOA", false) || StringsKt.D(upperCase, "DOUB", false)) ? 4 : 1;
            }
        }
        this.f3286g = i10;
    }

    public final boolean equals(Object obj) {
        if (this != obj) {
            if (!(obj instanceof a)) {
                return false;
            }
            a aVar = (a) obj;
            if (this.f3283d != aVar.f3283d) {
                return false;
            }
            int i5 = aVar.f3285f;
            String str = aVar.f3284e;
            if (!Intrinsics.areEqual(this.a, aVar.a) || this.f3282c != aVar.f3282c) {
                return false;
            }
            String str2 = this.f3284e;
            int i6 = this.f3285f;
            if (i6 == 1 && i5 == 2 && str2 != null && !ta.a.q(str2, str)) {
                return false;
            }
            if (i6 == 2 && i5 == 1 && str != null && !ta.a.q(str, str2)) {
                return false;
            }
            if (i6 != 0 && i6 == i5) {
                if (str2 != null) {
                    if (!ta.a.q(str2, str)) {
                        return false;
                    }
                } else if (str != null) {
                    return false;
                }
            }
            if (this.f3286g != aVar.f3286g) {
                return false;
            }
        }
        return true;
    }

    public final int hashCode() {
        return (((((this.a.hashCode() * 31) + this.f3286g) * 31) + (this.f3282c ? 1231 : 1237)) * 31) + this.f3283d;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Column{name='");
        sb2.append(this.a);
        sb2.append("', type='");
        sb2.append(this.f3281b);
        sb2.append("', affinity='");
        sb2.append(this.f3286g);
        sb2.append("', notNull=");
        sb2.append(this.f3282c);
        sb2.append(", primaryKeyPosition=");
        sb2.append(this.f3283d);
        sb2.append(", defaultValue='");
        String str = this.f3284e;
        if (str == null) {
            str = "undefined";
        }
        return com.discord.chat.bridge.botuikit.a.j(sb2, str, "'}");
    }
}
