package wq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class j {

    /* renamed from: d, reason: collision with root package name */
    public static final j f20011d;

    /* renamed from: e, reason: collision with root package name */
    public static final j f20012e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ j[] f20013i;

    static {
        j jVar = new j("STABLE", 0);
        f20011d = jVar;
        j jVar2 = new j("UNSTABLE", 1);
        f20012e = jVar2;
        j[] jVarArr = {jVar, jVar2};
        f20013i = jVarArr;
        ki.b.p(jVarArr);
    }

    public static j valueOf(String str) {
        return (j) Enum.valueOf(j.class, str);
    }

    public static j[] values() {
        return (j[]) f20013i.clone();
    }
}
