package b4;

import android.os.Build;
import c4.i;
import e4.o;
import kotlin.jvm.internal.Intrinsics;
import v3.p;
import v3.q;

/* loaded from: classes.dex */
public final class f extends e {

    /* renamed from: c, reason: collision with root package name */
    public static final String f2742c;

    /* renamed from: b, reason: collision with root package name */
    public final int f2743b;

    static {
        String f2 = p.f("NetworkMeteredCtrlr");
        Intrinsics.checkNotNullExpressionValue(f2, "tagWithPrefix(\"NetworkMeteredCtrlr\")");
        f2742c = f2;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(i tracker) {
        super(tracker);
        Intrinsics.checkNotNullParameter(tracker, "tracker");
        this.f2743b = 7;
    }

    @Override // b4.e
    public final int a() {
        return this.f2743b;
    }

    @Override // b4.e
    public final boolean b(o workSpec) {
        Intrinsics.checkNotNullParameter(workSpec, "workSpec");
        return workSpec.j.a == q.f19216w;
    }

    @Override // b4.e
    public final boolean c(Object obj) {
        a4.d value = (a4.d) obj;
        Intrinsics.checkNotNullParameter(value, "value");
        if (Build.VERSION.SDK_INT >= 26) {
            return (value.a && value.f104c) ? false : true;
        }
        p.d().a(f2742c, "Metered network constraint is not supported before API 26, only checking for connected state.");
        return !value.a;
    }
}
