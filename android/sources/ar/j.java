package ar;

import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import yq.p0;

/* loaded from: classes3.dex */
public final class j implements p0 {
    public final k a;

    /* renamed from: b, reason: collision with root package name */
    public final String[] f2681b;

    /* renamed from: c, reason: collision with root package name */
    public final String f2682c;

    public j(k kind, String... formatParams) {
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(formatParams, "formatParams");
        this.a = kind;
        this.f2681b = formatParams;
        b[] bVarArr = b.f2660d;
        String str = kind.f2690d;
        Object[] copyOf = Arrays.copyOf(formatParams, formatParams.length);
        String format = String.format(str, Arrays.copyOf(copyOf, copyOf.length));
        Intrinsics.checkNotNullExpressionValue(format, "format(...)");
        String format2 = String.format("[Error type: %s]", Arrays.copyOf(new Object[]{format}, 1));
        Intrinsics.checkNotNullExpressionValue(format2, "format(...)");
        this.f2682c = format2;
    }

    @Override // yq.p0
    public final ip.i a() {
        l.a.getClass();
        return l.f2693c;
    }

    @Override // yq.p0
    public final Collection b() {
        return m0.f13512d;
    }

    @Override // yq.p0
    public final boolean c() {
        return false;
    }

    @Override // yq.p0
    public final fp.i g() {
        return (fp.e) fp.e.f8853f.getValue();
    }

    @Override // yq.p0
    public final List getParameters() {
        return m0.f13512d;
    }

    public final String toString() {
        return this.f2682c;
    }
}
