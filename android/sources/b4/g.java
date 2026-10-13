package b4;

import c4.i;
import e4.o;
import kotlin.jvm.internal.Intrinsics;
import v3.p;
import v3.q;

/* loaded from: classes.dex */
public final class g extends e {

    /* renamed from: b, reason: collision with root package name */
    public final int f2744b;

    static {
        Intrinsics.checkNotNullExpressionValue(p.f("NetworkNotRoamingCtrlr"), "tagWithPrefix(\"NetworkNotRoamingCtrlr\")");
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(i tracker) {
        super(tracker);
        Intrinsics.checkNotNullParameter(tracker, "tracker");
        this.f2744b = 7;
    }

    @Override // b4.e
    public final int a() {
        return this.f2744b;
    }

    @Override // b4.e
    public final boolean b(o workSpec) {
        Intrinsics.checkNotNullParameter(workSpec, "workSpec");
        return workSpec.j.a == q.f19215v;
    }

    @Override // b4.e
    public final boolean c(Object obj) {
        a4.d value = (a4.d) obj;
        Intrinsics.checkNotNullParameter(value, "value");
        return (value.a && value.f105d) ? false : true;
    }
}
