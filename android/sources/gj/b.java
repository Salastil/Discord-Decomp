package gj;

import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* loaded from: classes3.dex */
public final class b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final c f9326b;

    public b(Set set, c cVar) {
        this.a = b(set);
        this.f9326b = cVar;
    }

    public static String b(Set set) {
        StringBuilder sb2 = new StringBuilder();
        Iterator it = set.iterator();
        while (it.hasNext()) {
            a aVar = (a) it.next();
            sb2.append(aVar.a);
            sb2.append('/');
            sb2.append(aVar.f9325b);
            if (it.hasNext()) {
                sb2.append(' ');
            }
        }
        return sb2.toString();
    }

    public final String a() {
        Set unmodifiableSet;
        Set unmodifiableSet2;
        String str = this.a;
        c cVar = this.f9326b;
        synchronized (((HashSet) cVar.f9329e)) {
            unmodifiableSet = Collections.unmodifiableSet((HashSet) cVar.f9329e);
        }
        if (unmodifiableSet.isEmpty()) {
            return str;
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        sb2.append(' ');
        synchronized (((HashSet) cVar.f9329e)) {
            unmodifiableSet2 = Collections.unmodifiableSet((HashSet) cVar.f9329e);
        }
        sb2.append(b(unmodifiableSet2));
        return sb2.toString();
    }
}
