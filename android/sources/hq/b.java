package hq;

import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class b {
    public final c a;

    /* renamed from: b, reason: collision with root package name */
    public final c f10201b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f10202c;

    public b(c packageFqName, c relativeClassName, boolean z5) {
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(relativeClassName, "relativeClassName");
        this.a = packageFqName;
        this.f10201b = relativeClassName;
        this.f10202c = z5;
        relativeClassName.a.c();
    }

    public static final String c(c cVar) {
        String str = cVar.a.a;
        return StringsKt.E(str, '/') ? k0.d.h('`', "`", str) : str;
    }

    public final c a() {
        c cVar = this.a;
        boolean c6 = cVar.a.c();
        c cVar2 = this.f10201b;
        if (c6) {
            return cVar2;
        }
        return new c(cVar.a.a + '.' + cVar2.a.a);
    }

    public final String b() {
        c cVar = this.a;
        boolean c6 = cVar.a.c();
        c cVar2 = this.f10201b;
        if (c6) {
            return c(cVar2);
        }
        return x.m(cVar.a.a, '.', '/') + "/" + c(cVar2);
    }

    public final b d(e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return new b(this.a, this.f10201b.a(name), this.f10202c);
    }

    public final b e() {
        c b10 = this.f10201b.b();
        if (b10.a.c()) {
            return null;
        }
        return new b(this.a, b10, this.f10202c);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return Intrinsics.areEqual(this.a, bVar.a) && Intrinsics.areEqual(this.f10201b, bVar.f10201b) && this.f10202c == bVar.f10202c;
    }

    public final e f() {
        return this.f10201b.a.f();
    }

    public final boolean g() {
        return !this.f10201b.b().a.c();
    }

    public final int hashCode() {
        return Boolean.hashCode(this.f10202c) + ((this.f10201b.hashCode() + (this.a.hashCode() * 31)) * 31);
    }

    public final String toString() {
        if (!this.a.a.c()) {
            return b();
        }
        return "/" + b();
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public b(c packageFqName, e topLevelName) {
        this(packageFqName, tn.g.C(topLevelName), false);
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(topLevelName, "topLevelName");
        c cVar = c.f10203c;
    }
}
