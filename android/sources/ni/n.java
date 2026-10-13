package ni;

import java.util.Collections;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class n implements yi.a {
    public volatile Set a;

    /* renamed from: b, reason: collision with root package name */
    public volatile Set f15503b;

    /* JADX WARN: Code restructure failed: missing block: B:25:0x003a, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x003f, code lost:
    
        throw r0;
     */
    @Override // yi.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object get() {
        if (this.f15503b == null) {
            synchronized (this) {
                try {
                    if (this.f15503b == null) {
                        this.f15503b = Collections.newSetFromMap(new ConcurrentHashMap());
                        synchronized (this) {
                            Iterator it = this.a.iterator();
                            while (it.hasNext()) {
                                this.f15503b.add(((yi.a) it.next()).get());
                            }
                            this.a = null;
                        }
                    }
                } finally {
                }
            }
        }
        return Collections.unmodifiableSet(this.f15503b);
    }
}
