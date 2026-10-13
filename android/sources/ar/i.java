package ar;

import java.util.Arrays;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import rq.o;
import yq.b1;
import yq.c0;
import yq.k0;
import yq.p0;
import yq.y;

/* loaded from: classes3.dex */
public final class i extends c0 {
    public final String E;

    /* renamed from: e, reason: collision with root package name */
    public final p0 f2675e;

    /* renamed from: i, reason: collision with root package name */
    public final g f2676i;

    /* renamed from: v, reason: collision with root package name */
    public final k f2677v;

    /* renamed from: w, reason: collision with root package name */
    public final List f2678w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f2679x;

    /* renamed from: y, reason: collision with root package name */
    public final String[] f2680y;

    public i(p0 constructor, g memberScope, k kind, List arguments, boolean z5, String... formatParams) {
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Intrinsics.checkNotNullParameter(memberScope, "memberScope");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        Intrinsics.checkNotNullParameter(formatParams, "formatParams");
        this.f2675e = constructor;
        this.f2676i = memberScope;
        this.f2677v = kind;
        this.f2678w = arguments;
        this.f2679x = z5;
        this.f2680y = formatParams;
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        String str = kind.f2690d;
        Object[] copyOf = Arrays.copyOf(formatParams, formatParams.length);
        String format = String.format(str, Arrays.copyOf(copyOf, copyOf.length));
        Intrinsics.checkNotNullExpressionValue(format, "format(...)");
        this.E = format;
    }

    @Override // yq.c0
    /* renamed from: A0 */
    public final c0 x0(boolean z5) {
        String[] strArr = this.f2680y;
        return new i(this.f2675e, this.f2676i, this.f2677v, this.f2678w, z5, (String[]) Arrays.copyOf(strArr, strArr.length));
    }

    @Override // yq.c0
    /* renamed from: B0 */
    public final c0 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return this;
    }

    @Override // yq.y
    public final o N() {
        return this.f2676i;
    }

    @Override // yq.y
    public final List l0() {
        return this.f2678w;
    }

    @Override // yq.y
    public final k0 q0() {
        k0.f21045e.getClass();
        return k0.f21046i;
    }

    @Override // yq.y
    public final p0 r0() {
        return this.f2675e;
    }

    @Override // yq.y
    public final boolean t0() {
        return this.f2679x;
    }

    @Override // yq.y
    public final y v0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return this;
    }

    @Override // yq.b1
    public final b1 y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return this;
    }

    @Override // yq.c0, yq.b1
    public final b1 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return this;
    }
}
