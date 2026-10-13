package jp;

import ip.g0;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.l0;
import kotlin.collections.m0;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import kr.s;

/* loaded from: classes3.dex */
public final class i implements h {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13008d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f13009e;

    public i(List delegates, int i5) {
        this.f13008d = i5;
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(delegates, "delegates");
                this.f13009e = delegates;
                break;
            default:
                Intrinsics.checkNotNullParameter(delegates, "annotations");
                this.f13009e = delegates;
                break;
        }
    }

    @Override // jp.h
    public final b Q(hq.c fqName) {
        switch (this.f13008d) {
            case 0:
                return ki.b.q(this, fqName);
            case 1:
                Intrinsics.checkNotNullParameter(fqName, "fqName");
                return (b) s.k(s.o(CollectionsKt.C((List) this.f13009e), new g0(fqName, 1)));
            default:
                Intrinsics.checkNotNullParameter(fqName, "fqName");
                if (Intrinsics.areEqual(fqName, (hq.c) this.f13009e)) {
                    return zp.b.a;
                }
                return null;
        }
    }

    @Override // jp.h
    public final boolean isEmpty() {
        switch (this.f13008d) {
            case 0:
                return ((List) this.f13009e).isEmpty();
            case 1:
                List list = (List) this.f13009e;
                if (list != null && list.isEmpty()) {
                    return true;
                }
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    if (!((h) it.next()).isEmpty()) {
                        return false;
                    }
                }
                return true;
            default:
                return false;
        }
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        switch (this.f13008d) {
            case 0:
                return ((List) this.f13009e).iterator();
            case 1:
                return new kr.d(s.l(CollectionsKt.C((List) this.f13009e), k.f13013d));
            default:
                m0.f13512d.getClass();
                return l0.f13511d;
        }
    }

    @Override // jp.h
    public final boolean r(hq.c fqName) {
        switch (this.f13008d) {
            case 1:
                Intrinsics.checkNotNullParameter(fqName, "fqName");
                Iterator it = ((Iterable) CollectionsKt.C((List) this.f13009e).f13524b).iterator();
                while (it.hasNext()) {
                    if (((h) it.next()).r(fqName)) {
                        break;
                    }
                }
                break;
        }
        return ki.b.I(this, fqName);
    }

    public String toString() {
        switch (this.f13008d) {
            case 0:
                return ((List) this.f13009e).toString();
            default:
                return super.toString();
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public i(h[] delegates) {
        this(x.H(delegates), 1);
        this.f13008d = 1;
        Intrinsics.checkNotNullParameter(delegates, "delegates");
    }

    public i(hq.c fqNameToMatch) {
        this.f13008d = 2;
        Intrinsics.checkNotNullParameter(fqNameToMatch, "fqNameToMatch");
        this.f13009e = fqNameToMatch;
    }
}
