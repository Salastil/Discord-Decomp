package lp;

import java.util.AbstractCollection;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class o extends a5.k0 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f14165b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ AbstractCollection f14166c;

    public /* synthetic */ o(AbstractCollection abstractCollection, int i5) {
        this.f14165b = i5;
        this.f14166c = abstractCollection;
    }

    public static /* synthetic */ void a(int i5) {
        Object[] objArr = new Object[3];
        if (i5 == 1) {
            objArr[0] = "fromSuper";
        } else if (i5 != 2) {
            objArr[0] = "fakeOverride";
        } else {
            objArr[0] = "fromCurrent";
        }
        objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/EnumEntrySyntheticClassDescriptor$EnumEntryScope$4";
        if (i5 == 1 || i5 == 2) {
            objArr[2] = "conflict";
        } else {
            objArr[2] = "addFakeOverride";
        }
        throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", objArr));
    }

    @Override // a5.k0
    public final void f(ip.d fakeOverride) {
        switch (this.f14165b) {
            case 0:
                if (fakeOverride == null) {
                    a(0);
                    throw null;
                }
                kq.n.r(fakeOverride, null);
                ((LinkedHashSet) this.f14166c).add(fakeOverride);
                return;
            default:
                Intrinsics.checkNotNullParameter(fakeOverride, "fakeOverride");
                kq.n.r(fakeOverride, null);
                ((ArrayList) this.f14166c).add(fakeOverride);
                return;
        }
    }

    @Override // a5.k0
    public final void o(ip.d fromSuper, ip.d fromCurrent) {
        switch (this.f14165b) {
            case 0:
                if (fromCurrent != null) {
                    return;
                }
                a(2);
                throw null;
            default:
                Intrinsics.checkNotNullParameter(fromSuper, "fromSuper");
                Intrinsics.checkNotNullParameter(fromCurrent, "fromCurrent");
                if (fromCurrent instanceof t) {
                    ((t) fromCurrent).I0(ip.r.a, fromSuper);
                    return;
                }
                return;
        }
    }
}
