package jp;

import cp.d0;
import ip.o0;
import ip.p0;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import yq.y;

/* loaded from: classes3.dex */
public final class j implements b {
    public final fp.i a;

    /* renamed from: b, reason: collision with root package name */
    public final hq.c f13010b;

    /* renamed from: c, reason: collision with root package name */
    public final Map f13011c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f13012d;

    public j(fp.i builtIns, hq.c fqName, Map allValueArguments) {
        Intrinsics.checkNotNullParameter(builtIns, "builtIns");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(allValueArguments, "allValueArguments");
        this.a = builtIns;
        this.f13010b = fqName;
        this.f13011c = allValueArguments;
        this.f13012d = fo.l.b(fo.m.f8827e, new d0(8, this));
    }

    @Override // jp.b
    public final hq.c a() {
        return this.f13010b;
    }

    @Override // jp.b
    public final Map b() {
        return this.f13011c;
    }

    @Override // jp.b
    public final o0 d() {
        p0 NO_SOURCE = o0.f12151g;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
        return NO_SOURCE;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // jp.b
    public final y getType() {
        Object value = this.f13012d.getValue();
        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
        return (y) value;
    }
}
