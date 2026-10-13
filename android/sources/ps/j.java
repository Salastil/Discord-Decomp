package ps;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j {

    /* renamed from: c, reason: collision with root package name */
    public static final j f16547c = new j(CollectionsKt.l0(new ArrayList()), null);
    public final Set a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.f f16548b;

    public j(Set pins, e4.f fVar) {
        Intrinsics.checkNotNullParameter(pins, "pins");
        this.a = pins;
        this.f16548b = fVar;
    }

    public final void a(String hostname, Function0 cleanedPeerCertificatesFn) {
        Intrinsics.checkNotNullParameter(hostname, "hostname");
        Intrinsics.checkNotNullParameter(cleanedPeerCertificatesFn, "cleanedPeerCertificatesFn");
        Intrinsics.checkNotNullParameter(hostname, "hostname");
        Set set = this.a;
        m0 m0Var = m0.f13512d;
        Iterator it = set.iterator();
        if (it.hasNext()) {
            throw s4.h.b(it);
        }
        m0Var.getClass();
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof j)) {
            return false;
        }
        j jVar = (j) obj;
        return Intrinsics.areEqual(jVar.a, this.a) && Intrinsics.areEqual(jVar.f16548b, this.f16548b);
    }

    public final int hashCode() {
        int hashCode = (this.a.hashCode() + 1517) * 41;
        e4.f fVar = this.f16548b;
        return hashCode + (fVar != null ? fVar.hashCode() : 0);
    }
}
