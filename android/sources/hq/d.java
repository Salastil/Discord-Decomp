package hq;

import java.util.ArrayList;
import java.util.List;
import java.util.regex.Pattern;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public final class d {

    /* renamed from: e, reason: collision with root package name */
    public static final e f10205e;
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public transient c f10206b;

    /* renamed from: c, reason: collision with root package name */
    public transient d f10207c;

    /* renamed from: d, reason: collision with root package name */
    public transient e f10208d;

    static {
        e g6 = e.g("<root>");
        Intrinsics.checkNotNullExpressionValue(g6, "special(...)");
        f10205e = g6;
        Intrinsics.checkNotNullExpressionValue(Pattern.compile("\\."), "compile(...)");
    }

    public d(c safe, String fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(safe, "safe");
        this.a = fqName;
        this.f10206b = safe;
    }

    public static final List e(d dVar) {
        if (dVar.c()) {
            return new ArrayList();
        }
        d dVar2 = dVar.f10207c;
        if (dVar2 == null) {
            if (dVar.c()) {
                throw new IllegalStateException("root");
            }
            dVar.b();
            dVar2 = dVar.f10207c;
            Intrinsics.checkNotNull(dVar2);
        }
        List e9 = e(dVar2);
        e9.add(dVar.f());
        return e9;
    }

    public final d a(e name) {
        String str;
        Intrinsics.checkNotNullParameter(name, "name");
        if (c()) {
            str = name.b();
        } else {
            str = this.a + '.' + name.b();
        }
        Intrinsics.checkNotNull(str);
        return new d(str, this, name);
    }

    public final void b() {
        String str = this.a;
        int length = str.length() - 1;
        boolean z5 = false;
        while (true) {
            if (length < 0) {
                length = -1;
                break;
            }
            char charAt = str.charAt(length);
            if (charAt == '.' && !z5) {
                break;
            }
            if (charAt == '`') {
                z5 = !z5;
            } else if (charAt == '\\') {
                length--;
            }
            length--;
        }
        if (length < 0) {
            this.f10208d = e.d(str);
            this.f10207c = c.f10203c.a;
            return;
        }
        String substring = str.substring(length + 1);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        this.f10208d = e.d(substring);
        String substring2 = str.substring(0, length);
        Intrinsics.checkNotNullExpressionValue(substring2, "substring(...)");
        this.f10207c = new d(substring2);
    }

    public final boolean c() {
        return this.a.length() == 0;
    }

    public final boolean d() {
        return this.f10206b != null || StringsKt.I(this.a, '<', 0, 6) < 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof d) {
            return Intrinsics.areEqual(this.a, ((d) obj).a);
        }
        return false;
    }

    public final e f() {
        e eVar = this.f10208d;
        if (eVar != null) {
            return eVar;
        }
        if (c()) {
            throw new IllegalStateException("root");
        }
        b();
        e eVar2 = this.f10208d;
        Intrinsics.checkNotNull(eVar2);
        return eVar2;
    }

    public final c g() {
        c cVar = this.f10206b;
        if (cVar != null) {
            return cVar;
        }
        c cVar2 = new c(this);
        this.f10206b = cVar2;
        return cVar2;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        if (!c()) {
            return this.a;
        }
        String b10 = f10205e.b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        return b10;
    }

    public d(String fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        this.a = fqName;
    }

    public d(String str, d dVar, e eVar) {
        this.a = str;
        this.f10207c = dVar;
        this.f10208d = eVar;
    }
}
