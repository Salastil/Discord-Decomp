package bq;

import aq.m;
import aq.o;
import ha.l;
import java.security.AccessControlException;
import java.util.HashMap;
import rp.y;

/* loaded from: classes3.dex */
public final class e implements o {
    public static final boolean F;
    public static final HashMap G;
    public String[] E;

    /* renamed from: d, reason: collision with root package name */
    public int[] f3148d;

    /* renamed from: e, reason: collision with root package name */
    public String f3149e;

    /* renamed from: i, reason: collision with root package name */
    public int f3150i;

    /* renamed from: v, reason: collision with root package name */
    public String[] f3151v;

    /* renamed from: w, reason: collision with root package name */
    public String[] f3152w;

    /* renamed from: x, reason: collision with root package name */
    public String[] f3153x;

    /* renamed from: y, reason: collision with root package name */
    public a f3154y;

    static {
        try {
            F = "true".equals(System.getProperty("kotlin.ignore.old.metadata"));
        } catch (AccessControlException unused) {
            F = false;
        }
        HashMap hashMap = new HashMap();
        G = hashMap;
        hashMap.put(ta.a.K(new hq.c("kotlin.jvm.internal.KotlinClass")), a.f3138w);
        hashMap.put(ta.a.K(new hq.c("kotlin.jvm.internal.KotlinFileFacade")), a.f3139x);
        hashMap.put(ta.a.K(new hq.c("kotlin.jvm.internal.KotlinMultifileClass")), a.E);
        hashMap.put(ta.a.K(new hq.c("kotlin.jvm.internal.KotlinMultifileClassPart")), a.F);
        hashMap.put(ta.a.K(new hq.c("kotlin.jvm.internal.KotlinSyntheticClass")), a.f3140y);
    }

    @Override // aq.o
    public final m Z(hq.b bVar, np.a aVar) {
        a aVar2;
        hq.c a = bVar.a();
        if (a.equals(y.a)) {
            return new gj.c(6, this);
        }
        if (a.equals(y.f17506o)) {
            return new l(this);
        }
        if (F || this.f3154y != null || (aVar2 = (a) G.get(bVar)) == null) {
            return null;
        }
        this.f3154y = aVar2;
        return new u4.b(6, this);
    }
}
