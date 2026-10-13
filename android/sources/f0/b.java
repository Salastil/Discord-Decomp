package f0;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f8304d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ b[] f8305e;

    /* JADX INFO: Fake field, exist only in values array */
    b EF0;

    static {
        b bVar = new b("Initial", 0);
        b bVar2 = new b("Main", 1);
        f8304d = bVar2;
        f8305e = new b[]{bVar, bVar2, new b("Final", 2)};
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f8305e.clone();
    }
}
