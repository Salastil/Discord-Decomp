package hq;

import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: c, reason: collision with root package name */
    public static final c f10203c = new c("");
    public final d a;

    /* renamed from: b, reason: collision with root package name */
    public transient c f10204b;

    public c(String fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        this.a = new d(this, fqName);
    }

    public final c a(e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return new c(this.a.a(name), this);
    }

    public final c b() {
        c cVar = this.f10204b;
        if (cVar != null) {
            return cVar;
        }
        d dVar = this.a;
        if (dVar.c()) {
            throw new IllegalStateException("root");
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
        c cVar2 = new c(dVar2);
        this.f10204b = cVar2;
        return cVar2;
    }

    public final boolean c(e segment) {
        Intrinsics.checkNotNullParameter(segment, "segment");
        d dVar = this.a;
        dVar.getClass();
        String str = dVar.a;
        Intrinsics.checkNotNullParameter(segment, "segment");
        if (!dVar.c()) {
            int I = StringsKt.I(str, '.', 0, 6);
            if (I == -1) {
                I = str.length();
            }
            int i5 = I;
            String b10 = segment.b();
            Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
            if (i5 == b10.length() && x.j(dVar.a, false, 0, 0, b10, i5)) {
                return true;
            }
        }
        return false;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof c) {
            return Intrinsics.areEqual(this.a, ((c) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.a.hashCode();
    }

    public final String toString() {
        return this.a.toString();
    }

    public c(d fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        this.a = fqName;
    }

    public c(d dVar, c cVar) {
        this.a = dVar;
        this.f10204b = cVar;
    }
}
