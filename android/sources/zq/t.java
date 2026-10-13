package zq;

import kotlin.jvm.internal.Intrinsics;
import yq.b1;
import yq.n0;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public abstract class t {

    /* renamed from: d, reason: collision with root package name */
    public static final r f21400d;

    /* renamed from: e, reason: collision with root package name */
    public static final p f21401e;

    /* renamed from: i, reason: collision with root package name */
    public static final s f21402i;

    /* renamed from: v, reason: collision with root package name */
    public static final q f21403v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ t[] f21404w;

    static {
        r rVar = new r();
        f21400d = rVar;
        p pVar = new p();
        f21401e = pVar;
        s sVar = new s();
        f21402i = sVar;
        q qVar = new q();
        f21403v = qVar;
        t[] tVarArr = {rVar, pVar, sVar, qVar};
        f21404w = tVarArr;
        ki.b.p(tVarArr);
    }

    public static t b(b1 type) {
        Intrinsics.checkNotNullParameter(type, "<this>");
        if (type.t0()) {
            return f21401e;
        }
        if (type instanceof yq.o) {
        }
        Intrinsics.checkNotNullParameter(type, "type");
        return yq.c.g(n.f21398d.m(), yq.c.l(type), n0.f21051b) ? f21403v : f21402i;
    }

    public static t valueOf(String str) {
        return (t) Enum.valueOf(t.class, str);
    }

    public static t[] values() {
        return (t[]) f21404w.clone();
    }

    public abstract t a(b1 b1Var);
}
