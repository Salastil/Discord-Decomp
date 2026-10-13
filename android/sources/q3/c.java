package q3;

/* loaded from: classes.dex */
public final class c {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final String f16658b;

    /* renamed from: c, reason: collision with root package name */
    public final String f16659c;

    /* renamed from: d, reason: collision with root package name */
    public final b f16660d;

    public c(String str, String str2, boolean z5, b bVar) {
        if (str2.isEmpty() || str2.charAt(0) != '/') {
            throw new IllegalArgumentException("Path should start with a slash '/'.");
        }
        if (!str2.endsWith("/")) {
            throw new IllegalArgumentException("Path should end with a slash '/'");
        }
        this.f16658b = str;
        this.f16659c = str2;
        this.a = z5;
        this.f16660d = bVar;
    }
}
