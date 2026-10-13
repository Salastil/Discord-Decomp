package nr;

/* loaded from: classes3.dex */
public abstract class o1 {
    public static final ThreadLocal a = new ThreadLocal();

    public static p0 a() {
        ThreadLocal threadLocal = a;
        p0 p0Var = (p0) threadLocal.get();
        if (p0Var != null) {
            return p0Var;
        }
        g gVar = new g(Thread.currentThread());
        threadLocal.set(gVar);
        return gVar;
    }
}
