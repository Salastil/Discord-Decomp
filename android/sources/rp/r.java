package rp;

import kotlin.Pair;
import kotlin.collections.v0;

/* loaded from: classes3.dex */
public abstract class r {
    public static final hq.c a;

    /* renamed from: b, reason: collision with root package name */
    public static final hq.c[] f17481b;

    /* renamed from: c, reason: collision with root package name */
    public static final e4.r f17482c;

    /* renamed from: d, reason: collision with root package name */
    public static final s f17483d;

    static {
        hq.c cVar = new hq.c("org.jspecify.nullness");
        hq.c cVar2 = new hq.c("org.jspecify.annotations");
        a = cVar2;
        hq.c cVar3 = new hq.c("io.reactivex.rxjava3.annotations");
        hq.c cVar4 = new hq.c("org.checkerframework.checker.nullness.compatqual");
        String str = cVar3.a.a;
        f17481b = new hq.c[]{new hq.c(k0.d.k(str, ".Nullable")), new hq.c(k0.d.k(str, ".NonNull"))};
        hq.c cVar5 = new hq.c("org.jetbrains.annotations");
        s sVar = s.f17484d;
        Pair pair = new Pair(cVar5, sVar);
        Pair pair2 = new Pair(new hq.c("androidx.annotation"), sVar);
        Pair pair3 = new Pair(new hq.c("android.support.annotation"), sVar);
        Pair pair4 = new Pair(new hq.c("android.annotation"), sVar);
        Pair pair5 = new Pair(new hq.c("com.android.annotations"), sVar);
        Pair pair6 = new Pair(new hq.c("org.eclipse.jdt.annotation"), sVar);
        Pair pair7 = new Pair(new hq.c("org.checkerframework.checker.nullness.qual"), sVar);
        Pair pair8 = new Pair(cVar4, sVar);
        Pair pair9 = new Pair(new hq.c("javax.annotation"), sVar);
        Pair pair10 = new Pair(new hq.c("edu.umd.cs.findbugs.annotations"), sVar);
        Pair pair11 = new Pair(new hq.c("io.reactivex.annotations"), sVar);
        hq.c cVar6 = new hq.c("androidx.annotation.RecentlyNullable");
        c0 c0Var = c0.f17432i;
        Pair pair12 = new Pair(cVar6, new s(c0Var, 4));
        Pair pair13 = new Pair(new hq.c("androidx.annotation.RecentlyNonNull"), new s(c0Var, 4));
        Pair pair14 = new Pair(new hq.c("lombok"), sVar);
        fo.k kVar = new fo.k(2, 1, 0);
        c0 c0Var2 = c0.f17433v;
        f17482c = new e4.r(v0.g(pair, pair2, pair3, pair4, pair5, pair6, pair7, pair8, pair9, pair10, pair11, pair12, pair13, pair14, new Pair(cVar, new s(c0Var, kVar, c0Var2)), new Pair(cVar2, new s(c0Var, new fo.k(2, 1, 0), c0Var2)), new Pair(cVar3, new s(c0Var, new fo.k(1, 8, 0), c0Var2))));
        f17483d = new s(c0Var, 4);
    }
}
