package hn;

import fo.n;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f10114d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f10115e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ b[] f10116i;

    static {
        b bVar = new b("USER", 0);
        f10114d = bVar;
        b bVar2 = new b("PROGRAMMATIC_JS", 1);
        f10115e = bVar2;
        b[] bVarArr = {bVar, bVar2, new b("PROGRAMMATIC_NATIVE", 2)};
        f10116i = bVarArr;
        ki.b.p(bVarArr);
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f10116i.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "user";
        }
        if (ordinal == 1) {
            return "programmatic-js";
        }
        if (ordinal == 2) {
            return "programmatic-native";
        }
        throw new n();
    }
}
