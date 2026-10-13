package p;

import java.util.Iterator;
import java.util.Map;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public class f implements Iterable {

    /* renamed from: d, reason: collision with root package name */
    public c f16256d;

    /* renamed from: e, reason: collision with root package name */
    public c f16257e;

    /* renamed from: i, reason: collision with root package name */
    public final WeakHashMap f16258i = new WeakHashMap();

    /* renamed from: v, reason: collision with root package name */
    public int f16259v = 0;

    public c a(Object obj) {
        c cVar = this.f16256d;
        while (cVar != null && !cVar.f16249d.equals(obj)) {
            cVar = cVar.f16251i;
        }
        return cVar;
    }

    public Object b(Object obj) {
        c a = a(obj);
        if (a == null) {
            return null;
        }
        this.f16259v--;
        WeakHashMap weakHashMap = this.f16258i;
        if (!weakHashMap.isEmpty()) {
            Iterator it = weakHashMap.keySet().iterator();
            while (it.hasNext()) {
                ((e) it.next()).a(a);
            }
        }
        c cVar = a.f16252v;
        if (cVar != null) {
            cVar.f16251i = a.f16251i;
        } else {
            this.f16256d = a.f16251i;
        }
        c cVar2 = a.f16251i;
        if (cVar2 != null) {
            cVar2.f16252v = cVar;
        } else {
            this.f16257e = cVar;
        }
        a.f16251i = null;
        a.f16252v = null;
        return a.f16250e;
    }

    /* JADX WARN: Code restructure failed: missing block: B:31:0x0048, code lost:
    
        if (r3.hasNext() != false) goto L28;
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x0050, code lost:
    
        if (((p.b) r7).hasNext() != false) goto L28;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x0052, code lost:
    
        return true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0053, code lost:
    
        return false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof f)) {
            return false;
        }
        f fVar = (f) obj;
        if (this.f16259v != fVar.f16259v) {
            return false;
        }
        Iterator it = iterator();
        Iterator it2 = fVar.iterator();
        while (true) {
            b bVar = (b) it;
            if (!bVar.hasNext()) {
                break;
            }
            b bVar2 = (b) it2;
            if (!bVar2.hasNext()) {
                break;
            }
            Map.Entry entry = (Map.Entry) bVar.next();
            Object next = bVar2.next();
            if ((entry != null || next == null) && (entry == null || entry.equals(next))) {
            }
        }
        return false;
    }

    public final int hashCode() {
        Iterator it = iterator();
        int i5 = 0;
        while (true) {
            b bVar = (b) it;
            if (!bVar.hasNext()) {
                return i5;
            }
            i5 += ((Map.Entry) bVar.next()).hashCode();
        }
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        b bVar = new b(this.f16256d, this.f16257e, 0);
        this.f16258i.put(bVar, Boolean.FALSE);
        return bVar;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("[");
        Iterator it = iterator();
        while (true) {
            b bVar = (b) it;
            if (!bVar.hasNext()) {
                sb2.append("]");
                return sb2.toString();
            }
            sb2.append(((Map.Entry) bVar.next()).toString());
            if (bVar.hasNext()) {
                sb2.append(", ");
            }
        }
    }
}
