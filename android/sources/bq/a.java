package bq;

import java.util.LinkedHashMap;
import kotlin.collections.u0;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {
    public static final a E;
    public static final a F;
    public static final /* synthetic */ a[] G;

    /* renamed from: e, reason: collision with root package name */
    public static final j8.c f3135e;

    /* renamed from: i, reason: collision with root package name */
    public static final LinkedHashMap f3136i;

    /* renamed from: v, reason: collision with root package name */
    public static final a f3137v;

    /* renamed from: w, reason: collision with root package name */
    public static final a f3138w;

    /* renamed from: x, reason: collision with root package name */
    public static final a f3139x;

    /* renamed from: y, reason: collision with root package name */
    public static final a f3140y;

    /* renamed from: d, reason: collision with root package name */
    public final int f3141d;

    static {
        a aVar = new a("UNKNOWN", 0, 0);
        f3137v = aVar;
        a aVar2 = new a("CLASS", 1, 1);
        f3138w = aVar2;
        a aVar3 = new a("FILE_FACADE", 2, 2);
        f3139x = aVar3;
        a aVar4 = new a("SYNTHETIC_CLASS", 3, 3);
        f3140y = aVar4;
        a aVar5 = new a("MULTIFILE_CLASS", 4, 4);
        E = aVar5;
        a aVar6 = new a("MULTIFILE_CLASS_PART", 5, 5);
        F = aVar6;
        a[] aVarArr = {aVar, aVar2, aVar3, aVar4, aVar5, aVar6};
        G = aVarArr;
        ki.b.p(aVarArr);
        f3135e = new j8.c();
        a[] values = values();
        int a = u0.a(values.length);
        LinkedHashMap linkedHashMap = new LinkedHashMap(a < 16 ? 16 : a);
        for (a aVar7 : values) {
            linkedHashMap.put(Integer.valueOf(aVar7.f3141d), aVar7);
        }
        f3136i = linkedHashMap;
    }

    public a(String str, int i5, int i6) {
        this.f3141d = i6;
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) G.clone();
    }
}
