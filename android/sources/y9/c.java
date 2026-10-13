package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class c {

    /* renamed from: d, reason: collision with root package name */
    public static final c f20690d;

    /* renamed from: e, reason: collision with root package name */
    public static final c f20691e;

    /* renamed from: i, reason: collision with root package name */
    public static final c f20692i;

    /* renamed from: v, reason: collision with root package name */
    public static final c f20693v;

    /* renamed from: w, reason: collision with root package name */
    public static final c f20694w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ c[] f20695x;

    static {
        c cVar = new c("BASE", 0);
        f20690d = cVar;
        c cVar2 = new c("ACCENT", 1);
        f20691e = cVar2;
        c cVar3 = new c("CASE", 2);
        f20692i = cVar3;
        c cVar4 = new c("VARIANT", 3);
        f20693v = cVar4;
        c cVar5 = new c("LOCALE", 4);
        f20694w = cVar5;
        f20695x = new c[]{cVar, cVar2, cVar3, cVar4, cVar5};
    }

    public static c valueOf(String str) {
        return (c) Enum.valueOf(c.class, str);
    }

    public static c[] values() {
        return (c[]) f20695x.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "base";
        }
        if (ordinal == 1) {
            return "accent";
        }
        if (ordinal == 2) {
            return "case";
        }
        if (ordinal == 3) {
            return "variant";
        }
        if (ordinal == 4) {
            return "";
        }
        throw new IllegalArgumentException();
    }
}
