package jq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public abstract class s {

    /* renamed from: d, reason: collision with root package name */
    public static final r f13094d;

    /* renamed from: e, reason: collision with root package name */
    public static final q f13095e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ s[] f13096i;

    static {
        r rVar = new r();
        f13094d = rVar;
        q qVar = new q();
        f13095e = qVar;
        s[] sVarArr = {rVar, qVar};
        f13096i = sVarArr;
        ki.b.p(sVarArr);
    }

    public static s valueOf(String str) {
        return (s) Enum.valueOf(s.class, str);
    }

    public static s[] values() {
        return (s[]) f13096i.clone();
    }

    public abstract String a(String str);
}
