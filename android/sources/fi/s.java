package fi;

import java.util.Map;

/* loaded from: classes3.dex */
public final class s extends m {

    /* renamed from: d, reason: collision with root package name */
    public final Object f8707d;

    /* renamed from: e, reason: collision with root package name */
    public int f8708e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ t f8709i;

    public s(t tVar, int i5) {
        this.f8709i = tVar;
        Object obj = t.G;
        this.f8707d = tVar.i()[i5];
        this.f8708e = i5;
    }

    public final void a() {
        int i5 = this.f8708e;
        Object obj = this.f8707d;
        t tVar = this.f8709i;
        if (i5 != -1 && i5 < tVar.size()) {
            if (w3.q.j(obj, tVar.i()[this.f8708e])) {
                return;
            }
        }
        Object obj2 = t.G;
        this.f8708e = tVar.d(obj);
    }

    @Override // java.util.Map.Entry
    public final Object getKey() {
        return this.f8707d;
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        t tVar = this.f8709i;
        Map b10 = tVar.b();
        if (b10 != null) {
            return b10.get(this.f8707d);
        }
        a();
        int i5 = this.f8708e;
        if (i5 == -1) {
            return null;
        }
        return tVar.j()[i5];
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        t tVar = this.f8709i;
        Map b10 = tVar.b();
        Object obj2 = this.f8707d;
        if (b10 != null) {
            return b10.put(obj2, obj);
        }
        a();
        int i5 = this.f8708e;
        if (i5 == -1) {
            tVar.put(obj2, obj);
            return null;
        }
        Object obj3 = tVar.j()[i5];
        tVar.j()[this.f8708e] = obj;
        return obj3;
    }
}
