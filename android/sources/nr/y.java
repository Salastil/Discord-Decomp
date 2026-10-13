package nr;

/* loaded from: classes3.dex */
public abstract class y {
    public static final a0 a;

    static {
        String str;
        a0 a0Var;
        int i5 = sr.w.a;
        try {
            str = System.getProperty("kotlinx.coroutines.main.delay");
        } catch (SecurityException unused) {
            str = null;
        }
        if (str != null ? Boolean.parseBoolean(str) : false) {
            ur.e eVar = g0.a;
            or.d dVar = sr.q.a;
            or.d dVar2 = dVar.f16185w;
            a0Var = dVar;
            if (dVar == null) {
                a0Var = kotlinx.coroutines.a.G;
            }
        } else {
            a0Var = kotlinx.coroutines.a.G;
        }
        a = a0Var;
    }
}
