package rp;

import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.e1;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class z {
    public static final hq.c a;

    /* renamed from: b, reason: collision with root package name */
    public static final hq.c f17509b;

    /* renamed from: c, reason: collision with root package name */
    public static final hq.c f17510c;

    /* renamed from: d, reason: collision with root package name */
    public static final hq.c f17511d;

    /* renamed from: e, reason: collision with root package name */
    public static final hq.c f17512e;

    /* renamed from: f, reason: collision with root package name */
    public static final hq.c f17513f;

    /* renamed from: g, reason: collision with root package name */
    public static final hq.c f17514g;

    /* renamed from: h, reason: collision with root package name */
    public static final hq.c f17515h;

    /* renamed from: i, reason: collision with root package name */
    public static final hq.c f17516i;
    public static final Set j;
    public static final Set k;

    /* renamed from: l, reason: collision with root package name */
    public static final Set f17517l;

    /* renamed from: m, reason: collision with root package name */
    public static final Set f17518m;

    /* renamed from: n, reason: collision with root package name */
    public static final Set f17519n;

    /* renamed from: o, reason: collision with root package name */
    public static final Set f17520o;

    /* renamed from: p, reason: collision with root package name */
    public static final hq.c f17521p;

    static {
        hq.c cVar = new hq.c("org.jspecify.nullness.Nullable");
        hq.c cVar2 = new hq.c("org.jspecify.nullness.NullMarked");
        a = cVar2;
        hq.c cVar3 = new hq.c("org.jspecify.nullness.NullnessUnspecified");
        hq.c cVar4 = new hq.c("org.jspecify.annotations.NonNull");
        hq.c cVar5 = new hq.c("org.jspecify.annotations.Nullable");
        hq.c cVar6 = new hq.c("org.jspecify.annotations.NullMarked");
        f17509b = cVar6;
        hq.c cVar7 = new hq.c("org.jspecify.annotations.NullnessUnspecified");
        hq.c cVar8 = new hq.c("org.jspecify.annotations.NullUnmarked");
        f17510c = cVar8;
        f17511d = new hq.c("javax.annotation.meta.TypeQualifier");
        f17512e = new hq.c("javax.annotation.meta.TypeQualifierNickname");
        f17513f = new hq.c("javax.annotation.meta.TypeQualifierDefault");
        hq.c cVar9 = new hq.c("javax.annotation.Nonnull");
        f17514g = cVar9;
        hq.c cVar10 = new hq.c("javax.annotation.Nullable");
        hq.c cVar11 = new hq.c("javax.annotation.CheckForNull");
        f17515h = new hq.c("javax.annotation.ParametersAreNonnullByDefault");
        f17516i = new hq.c("javax.annotation.ParametersAreNullableByDefault");
        hq.c[] elements = {cVar9, cVar11};
        Intrinsics.checkNotNullParameter(elements, "elements");
        j = kotlin.collections.x.J(elements);
        hq.c[] elements2 = {y.f17501h, cVar4, new hq.c("android.annotation.NonNull"), new hq.c("androidx.annotation.NonNull"), new hq.c("androidx.annotation.RecentlyNonNull"), new hq.c("android.support.annotation.NonNull"), new hq.c("com.android.annotations.NonNull"), new hq.c("org.checkerframework.checker.nullness.compatqual.NonNullDecl"), new hq.c("org.checkerframework.checker.nullness.qual.NonNull"), new hq.c("edu.umd.cs.findbugs.annotations.NonNull"), new hq.c("io.reactivex.annotations.NonNull"), new hq.c("io.reactivex.rxjava3.annotations.NonNull"), new hq.c("org.eclipse.jdt.annotation.NonNull"), new hq.c("lombok.NonNull")};
        Intrinsics.checkNotNullParameter(elements2, "elements");
        Set J = kotlin.collections.x.J(elements2);
        k = J;
        hq.c[] elements3 = {y.f17502i, cVar, cVar5, cVar10, cVar11, new hq.c("android.annotation.Nullable"), new hq.c("androidx.annotation.Nullable"), new hq.c("androidx.annotation.RecentlyNullable"), new hq.c("android.support.annotation.Nullable"), new hq.c("com.android.annotations.Nullable"), new hq.c("org.checkerframework.checker.nullness.compatqual.NullableDecl"), new hq.c("org.checkerframework.checker.nullness.qual.Nullable"), new hq.c("edu.umd.cs.findbugs.annotations.Nullable"), new hq.c("edu.umd.cs.findbugs.annotations.PossiblyNull"), new hq.c("edu.umd.cs.findbugs.annotations.CheckForNull"), new hq.c("io.reactivex.annotations.Nullable"), new hq.c("io.reactivex.rxjava3.annotations.Nullable"), new hq.c("org.eclipse.jdt.annotation.Nullable")};
        Intrinsics.checkNotNullParameter(elements3, "elements");
        Set J2 = kotlin.collections.x.J(elements3);
        f17517l = J2;
        hq.c[] elements4 = {cVar3, cVar7};
        Intrinsics.checkNotNullParameter(elements4, "elements");
        f17518m = kotlin.collections.x.J(elements4);
        e1.e(e1.e(e1.e(e1.e(e1.d(e1.d(new LinkedHashSet(), J), J2), cVar9), cVar2), cVar6), cVar8);
        hq.c[] elements5 = {y.k, y.f17503l};
        Intrinsics.checkNotNullParameter(elements5, "elements");
        f17519n = kotlin.collections.x.J(elements5);
        hq.c[] elements6 = {y.j, y.f17504m};
        Intrinsics.checkNotNullParameter(elements6, "elements");
        f17520o = kotlin.collections.x.J(elements6);
        v0.g(new Pair(y.f17496c, fp.o.f8900t), new Pair(y.f17497d, fp.o.f8903w), new Pair(y.f17498e, fp.o.f8893m), new Pair(y.f17499f, fp.o.f8904x));
        f17521p = new hq.c("kotlin.annotations.jvm.UnderMigration");
    }
}
