package jq;

import java.util.ArrayList;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.x;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class i {
    public static final i E;
    public static final i F;
    public static final i G;
    public static final i H;
    public static final i I;
    public static final i J;
    public static final i K;
    public static final i L;
    public static final i M;
    public static final i N;
    public static final /* synthetic */ i[] O;

    /* renamed from: e, reason: collision with root package name */
    public static final Set f13054e;

    /* renamed from: i, reason: collision with root package name */
    public static final Set f13055i;

    /* renamed from: v, reason: collision with root package name */
    public static final i f13056v;

    /* renamed from: w, reason: collision with root package name */
    public static final i f13057w;

    /* renamed from: x, reason: collision with root package name */
    public static final i f13058x;

    /* renamed from: y, reason: collision with root package name */
    public static final i f13059y;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f13060d;

    static {
        i iVar = new i("VISIBILITY", 0, true);
        f13056v = iVar;
        i iVar2 = new i("MODALITY", 1, true);
        f13057w = iVar2;
        i iVar3 = new i("OVERRIDE", 2, true);
        f13058x = iVar3;
        i iVar4 = new i("ANNOTATIONS", 3, false);
        f13059y = iVar4;
        i iVar5 = new i("INNER", 4, true);
        E = iVar5;
        i iVar6 = new i("MEMBER_KIND", 5, true);
        F = iVar6;
        i iVar7 = new i("DATA", 6, true);
        G = iVar7;
        i iVar8 = new i("INLINE", 7, true);
        H = iVar8;
        i iVar9 = new i("EXPECT", 8, true);
        I = iVar9;
        i iVar10 = new i("ACTUAL", 9, true);
        J = iVar10;
        i iVar11 = new i("CONST", 10, true);
        K = iVar11;
        i iVar12 = new i("LATEINIT", 11, true);
        L = iVar12;
        i iVar13 = new i("FUN", 12, true);
        M = iVar13;
        i iVar14 = new i("VALUE", 13, true);
        N = iVar14;
        i[] iVarArr = {iVar, iVar2, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11, iVar12, iVar13, iVar14};
        O = iVarArr;
        ki.b.p(iVarArr);
        i[] values = values();
        ArrayList arrayList = new ArrayList();
        for (i iVar15 : values) {
            if (iVar15.f13060d) {
                arrayList.add(iVar15);
            }
        }
        f13054e = CollectionsKt.l0(arrayList);
        f13055i = x.J(values());
    }

    public i(String str, int i5, boolean z5) {
        this.f13060d = z5;
    }

    public static i valueOf(String str) {
        return (i) Enum.valueOf(i.class, str);
    }

    public static i[] values() {
        return (i[]) O.clone();
    }
}
