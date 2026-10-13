package om;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f16132d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f16133e;

    /* renamed from: i, reason: collision with root package name */
    public static final b f16134i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ b[] f16135v;

    static {
        b bVar = new b("INITIALIZED", 0);
        f16132d = bVar;
        b bVar2 = new b("START_DISPATCHED", 1);
        f16133e = bVar2;
        b bVar3 = new b("END_DISPATCHED", 2);
        f16134i = bVar3;
        b[] bVarArr = {bVar, bVar2, bVar3};
        f16135v = bVarArr;
        ki.b.p(bVarArr);
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f16135v.clone();
    }
}
