package jp;

import java.util.Iterator;
import kotlin.collections.l0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f implements h {
    @Override // jp.h
    public final b Q(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        return null;
    }

    @Override // jp.h
    public final boolean isEmpty() {
        return true;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        m0.f13512d.getClass();
        return l0.f13511d;
    }

    @Override // jp.h
    public final boolean r(hq.c cVar) {
        return ki.b.I(this, cVar);
    }

    public final String toString() {
        return "EMPTY";
    }
}
