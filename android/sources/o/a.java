package o;

/* loaded from: classes.dex */
public final class a extends d9.a {

    /* renamed from: u, reason: collision with root package name */
    public static volatile a f15701u;

    /* renamed from: v, reason: collision with root package name */
    public static final com.discord.misc.utilities.threading.a f15702v = new com.discord.misc.utilities.threading.a(2);

    /* renamed from: t, reason: collision with root package name */
    public final c f15703t;

    public a() {
        super(14);
        this.f15703t = new c();
    }

    public static a U() {
        if (f15701u != null) {
            return f15701u;
        }
        synchronized (a.class) {
            try {
                if (f15701u == null) {
                    f15701u = new a();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return f15701u;
    }
}
