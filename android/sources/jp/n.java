package jp;

import fo.z;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.c0;
import kotlin.collections.v0;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class n {
    public static final List E;
    public static final List F;
    public static final List G;
    public static final List H;
    public static final List I;
    public static final List J;
    public static final List K;
    public static final n L;
    public static final n M;
    public static final n N;
    public static final n O;
    public static final n P;
    public static final n Q;
    public static final n R;
    public static final n S;
    public static final n T;
    public static final n U;
    public static final n V;
    public static final n W;
    public static final n X;
    public static final n Y;
    public static final n Z;
    public static final n a0;

    /* renamed from: b0, reason: collision with root package name */
    public static final n f13020b0;

    /* renamed from: c0, reason: collision with root package name */
    public static final n f13021c0;

    /* renamed from: d0, reason: collision with root package name */
    public static final n f13022d0;

    /* renamed from: e, reason: collision with root package name */
    public static final HashMap f13023e;

    /* renamed from: e0, reason: collision with root package name */
    public static final n f13024e0;

    /* renamed from: f0, reason: collision with root package name */
    public static final n f13025f0;

    /* renamed from: g0, reason: collision with root package name */
    public static final /* synthetic */ n[] f13026g0;
    public static final /* synthetic */ mo.a h0;

    /* renamed from: i, reason: collision with root package name */
    public static final List f13027i;

    /* renamed from: v, reason: collision with root package name */
    public static final List f13028v;

    /* renamed from: w, reason: collision with root package name */
    public static final List f13029w;

    /* renamed from: x, reason: collision with root package name */
    public static final List f13030x;

    /* renamed from: y, reason: collision with root package name */
    public static final List f13031y;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f13032d;

    static {
        n nVar = new n("CLASS", 0, true);
        L = nVar;
        n nVar2 = new n("ANNOTATION_CLASS", 1, true);
        M = nVar2;
        n nVar3 = new n("TYPE_PARAMETER", 2, false);
        N = nVar3;
        n nVar4 = new n("PROPERTY", 3, true);
        O = nVar4;
        n nVar5 = new n("FIELD", 4, true);
        P = nVar5;
        n nVar6 = new n("LOCAL_VARIABLE", 5, true);
        Q = nVar6;
        n nVar7 = new n("VALUE_PARAMETER", 6, true);
        R = nVar7;
        n nVar8 = new n("CONSTRUCTOR", 7, true);
        S = nVar8;
        n nVar9 = new n("FUNCTION", 8, true);
        T = nVar9;
        n nVar10 = new n("PROPERTY_GETTER", 9, true);
        U = nVar10;
        n nVar11 = new n("PROPERTY_SETTER", 10, true);
        V = nVar11;
        n nVar12 = new n("TYPE", 11, false);
        W = nVar12;
        n nVar13 = new n("EXPRESSION", 12, false);
        n nVar14 = new n("FILE", 13, false);
        X = nVar14;
        n nVar15 = new n("TYPEALIAS", 14, false);
        n nVar16 = new n("TYPE_PROJECTION", 15, false);
        n nVar17 = new n("STAR_PROJECTION", 16, false);
        n nVar18 = new n("PROPERTY_PARAMETER", 17, false);
        n nVar19 = new n("CLASS_ONLY", 18, false);
        Y = nVar19;
        n nVar20 = new n("OBJECT", 19, false);
        Z = nVar20;
        n nVar21 = new n("STANDALONE_OBJECT", 20, false);
        a0 = nVar21;
        n nVar22 = new n("COMPANION_OBJECT", 21, false);
        f13020b0 = nVar22;
        n nVar23 = new n("INTERFACE", 22, false);
        f13021c0 = nVar23;
        n nVar24 = new n("ENUM_CLASS", 23, false);
        f13022d0 = nVar24;
        n nVar25 = new n("ENUM_ENTRY", 24, false);
        f13024e0 = nVar25;
        n nVar26 = new n("LOCAL_CLASS", 25, false);
        f13025f0 = nVar26;
        n[] nVarArr = {nVar, nVar2, nVar3, nVar4, nVar5, nVar6, nVar7, nVar8, nVar9, nVar10, nVar11, nVar12, nVar13, nVar14, nVar15, nVar16, nVar17, nVar18, nVar19, nVar20, nVar21, nVar22, nVar23, nVar24, nVar25, nVar26, new n("LOCAL_FUNCTION", 26, false), new n("MEMBER_FUNCTION", 27, false), new n("TOP_LEVEL_FUNCTION", 28, false), new n("MEMBER_PROPERTY", 29, false), new n("MEMBER_PROPERTY_WITH_BACKING_FIELD", 30, false), new n("MEMBER_PROPERTY_WITH_DELEGATE", 31, false), new n("MEMBER_PROPERTY_WITHOUT_FIELD_OR_DELEGATE", 32, false), new n("TOP_LEVEL_PROPERTY", 33, false), new n("TOP_LEVEL_PROPERTY_WITH_BACKING_FIELD", 34, false), new n("TOP_LEVEL_PROPERTY_WITH_DELEGATE", 35, false), new n("TOP_LEVEL_PROPERTY_WITHOUT_FIELD_OR_DELEGATE", 36, false), new n("BACKING_FIELD", 37, true), new n("INITIALIZER", 38, false), new n("DESTRUCTURING_DECLARATION", 39, false), new n("LAMBDA_EXPRESSION", 40, false), new n("ANONYMOUS_FUNCTION", 41, false), new n("OBJECT_LITERAL", 42, false)};
        f13026g0 = nVarArr;
        mo.a p3 = ki.b.p(nVarArr);
        h0 = p3;
        f13023e = new HashMap();
        z zVar = new z(p3);
        while (zVar.hasNext()) {
            n nVar27 = (n) zVar.next();
            f13023e.put(nVar27.name(), nVar27);
        }
        mo.a aVar = h0;
        ArrayList arrayList = new ArrayList();
        aVar.getClass();
        z zVar2 = new z(aVar);
        while (zVar2.hasNext()) {
            Object next = zVar2.next();
            if (((n) next).f13032d) {
                arrayList.add(next);
            }
        }
        CollectionsKt.l0(arrayList);
        CollectionsKt.l0(h0);
        n nVar28 = M;
        n nVar29 = L;
        f13027i = c0.g(nVar28, nVar29);
        f13028v = c0.g(f13025f0, nVar29);
        f13029w = c0.g(Y, nVar29);
        n nVar30 = f13020b0;
        n nVar31 = Z;
        f13030x = c0.g(nVar30, nVar31, nVar29);
        f13031y = c0.g(a0, nVar31, nVar29);
        E = c0.g(f13021c0, nVar29);
        F = c0.g(f13022d0, nVar29);
        n nVar32 = f13024e0;
        n nVar33 = O;
        n nVar34 = P;
        G = c0.g(nVar32, nVar33, nVar34);
        n nVar35 = V;
        H = b0.c(nVar35);
        n nVar36 = U;
        I = b0.c(nVar36);
        J = b0.c(T);
        n nVar37 = X;
        K = b0.c(nVar37);
        d dVar = d.E;
        n nVar38 = R;
        v0.g(new Pair(dVar, nVar38), new Pair(d.f12997e, nVar34), new Pair(d.f12999v, nVar33), new Pair(d.f12998i, nVar37), new Pair(d.f13000w, nVar36), new Pair(d.f13001x, nVar35), new Pair(d.f13002y, nVar38), new Pair(d.F, nVar38), new Pair(d.G, nVar34));
    }

    public n(String str, int i5, boolean z5) {
        this.f13032d = z5;
    }

    public static n valueOf(String str) {
        return (n) Enum.valueOf(n.class, str);
    }

    public static n[] values() {
        return (n[]) f13026g0.clone();
    }
}
