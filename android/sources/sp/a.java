package sp;

import a5.k0;
import java.util.Collection;
import java.util.LinkedHashSet;
import kq.n;
import uq.m;

/* loaded from: classes3.dex */
public final class a extends k0 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ m f18073b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ LinkedHashSet f18074c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ boolean f18075d;

    public a(m mVar, LinkedHashSet linkedHashSet, boolean z5) {
        this.f18073b = mVar;
        this.f18074c = linkedHashSet;
        this.f18075d = z5;
    }

    public static /* synthetic */ void a(int i5) {
        Object[] objArr = new Object[3];
        if (i5 == 1) {
            objArr[0] = "fromSuper";
        } else if (i5 == 2) {
            objArr[0] = "fromCurrent";
        } else if (i5 == 3) {
            objArr[0] = "member";
        } else if (i5 != 4) {
            objArr[0] = "fakeOverride";
        } else {
            objArr[0] = "overridden";
        }
        objArr[1] = "kotlin/reflect/jvm/internal/impl/load/java/components/DescriptorResolverUtils$1";
        if (i5 == 1 || i5 == 2) {
            objArr[2] = "conflict";
        } else if (i5 == 3 || i5 == 4) {
            objArr[2] = "setOverriddenDescriptors";
        } else {
            objArr[2] = "addFakeOverride";
        }
        throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", objArr));
    }

    @Override // a5.k0
    public final void T(ip.d dVar, Collection collection) {
        if (dVar == null) {
            a(3);
            throw null;
        }
        if (!this.f18075d || dVar.b() == ip.c.f12124e) {
            super.T(dVar, collection);
        }
    }

    @Override // a5.k0
    public final void f(ip.d dVar) {
        if (dVar == null) {
            a(0);
            throw null;
        }
        n.r(dVar, new aq.a(15, this));
        this.f18074c.add(dVar);
    }

    @Override // a5.k0
    public final void o(ip.d dVar, ip.d dVar2) {
        if (dVar2 != null) {
            return;
        }
        a(2);
        throw null;
    }
}
