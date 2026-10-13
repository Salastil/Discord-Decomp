package ha;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class c {
    public final u4.b a;

    /* renamed from: b, reason: collision with root package name */
    public final LinkedHashMap f9599b = new LinkedHashMap();

    /* renamed from: c, reason: collision with root package name */
    public int f9600c = 0;

    public c(u4.b bVar) {
        this.a = bVar;
    }

    public final synchronized int a() {
        return this.f9599b.size();
    }

    public final synchronized ArrayList b(hc.m mVar) {
        ArrayList arrayList;
        arrayList = new ArrayList(this.f9599b.entrySet().size());
        for (Map.Entry entry : this.f9599b.entrySet()) {
            if (mVar.apply(entry.getKey())) {
                arrayList.add(entry);
            }
        }
        return arrayList;
    }

    public final synchronized int c() {
        return this.f9600c;
    }

    public final synchronized void d(Object obj, Object obj2) {
        Object remove = this.f9599b.remove(obj);
        this.f9600c -= remove == null ? 0 : this.a.c(remove);
        this.f9599b.put(obj, obj2);
        this.f9600c += this.a.c(obj2);
    }

    public final synchronized Object e(Object obj) {
        Object remove;
        remove = this.f9599b.remove(obj);
        this.f9600c -= remove == null ? 0 : this.a.c(remove);
        return remove;
    }

    public final synchronized ArrayList f(o8.f fVar) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        Iterator it = this.f9599b.entrySet().iterator();
        while (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            if (fVar.apply(entry.getKey())) {
                arrayList.add(entry.getValue());
                int i5 = this.f9600c;
                Object value = entry.getValue();
                this.f9600c = i5 - (value == null ? 0 : this.a.c(value));
                it.remove();
            }
        }
        return arrayList;
    }
}
