package ke;

import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

/* loaded from: classes3.dex */
public final class d implements Iterable {

    /* renamed from: d, reason: collision with root package name */
    public final Object f13290d = new Object();

    /* renamed from: e, reason: collision with root package name */
    public final HashMap f13291e = new HashMap();

    /* renamed from: i, reason: collision with root package name */
    public Set f13292i = Collections.EMPTY_SET;

    /* renamed from: v, reason: collision with root package name */
    public List f13293v = Collections.EMPTY_LIST;

    public final int a(nc.n nVar) {
        int intValue;
        synchronized (this.f13290d) {
            try {
                intValue = this.f13291e.containsKey(nVar) ? ((Integer) this.f13291e.get(nVar)).intValue() : 0;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return intValue;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        Iterator it;
        synchronized (this.f13290d) {
            it = this.f13293v.iterator();
        }
        return it;
    }
}
