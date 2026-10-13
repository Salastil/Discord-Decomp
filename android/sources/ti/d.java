package ti;

import java.util.Date;
import java.util.HashMap;
import ri.f;
import ri.g;

/* loaded from: classes3.dex */
public final class d implements si.a {

    /* renamed from: f, reason: collision with root package name */
    public static final b f18644f;

    /* renamed from: g, reason: collision with root package name */
    public static final b f18645g;
    public final HashMap a;

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f18647b;

    /* renamed from: c, reason: collision with root package name */
    public final a f18648c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f18649d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f18643e = new a(0);

    /* renamed from: h, reason: collision with root package name */
    public static final c f18646h = new c();

    /* JADX WARN: Type inference failed for: r0v1, types: [ti.b] */
    /* JADX WARN: Type inference failed for: r0v2, types: [ti.b] */
    static {
        final int i5 = 0;
        f18644f = new f() { // from class: ti.b
            @Override // ri.a
            public final void a(Object obj, Object obj2) {
                switch (i5) {
                    case 0:
                        ((g) obj2).b((String) obj);
                        break;
                    default:
                        ((g) obj2).c(((Boolean) obj).booleanValue());
                        break;
                }
            }
        };
        final int i6 = 1;
        f18645g = new f() { // from class: ti.b
            @Override // ri.a
            public final void a(Object obj, Object obj2) {
                switch (i6) {
                    case 0:
                        ((g) obj2).b((String) obj);
                        break;
                    default:
                        ((g) obj2).c(((Boolean) obj).booleanValue());
                        break;
                }
            }
        };
    }

    public d() {
        HashMap hashMap = new HashMap();
        this.a = hashMap;
        HashMap hashMap2 = new HashMap();
        this.f18647b = hashMap2;
        this.f18648c = f18643e;
        this.f18649d = false;
        hashMap2.put(String.class, f18644f);
        hashMap.remove(String.class);
        hashMap2.put(Boolean.class, f18645g);
        hashMap.remove(Boolean.class);
        hashMap2.put(Date.class, f18646h);
        hashMap.remove(Date.class);
    }

    public final si.a a(Class cls, ri.d dVar) {
        this.a.put(cls, dVar);
        this.f18647b.remove(cls);
        return this;
    }
}
