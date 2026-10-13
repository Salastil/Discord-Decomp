package ui;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class d {

    /* renamed from: d, reason: collision with root package name */
    public static final d f18933d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ d[] f18934e;

    static {
        d dVar = new d("DEFAULT", 0);
        f18933d = dVar;
        f18934e = new d[]{dVar, new d("SIGNED", 1), new d("FIXED", 2)};
    }

    public static d valueOf(String str) {
        return (d) Enum.valueOf(d.class, str);
    }

    public static d[] values() {
        return (d[]) f18934e.clone();
    }
}
