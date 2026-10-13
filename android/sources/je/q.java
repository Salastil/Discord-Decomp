package je;

import com.google.android.exoplayer2.upstream.cache.SimpleCache;
import java.util.TreeSet;

/* loaded from: classes3.dex */
public final class q {
    public final TreeSet a = new TreeSet(new p());

    /* renamed from: b, reason: collision with root package name */
    public long f12751b;

    public final void a(b bVar, long j) {
        while (this.f12751b + j > 104857600 && !this.a.isEmpty()) {
            i iVar = (i) this.a.first();
            SimpleCache simpleCache = (SimpleCache) bVar;
            synchronized (simpleCache) {
                simpleCache.k(iVar);
            }
        }
    }

    public final void b(SimpleCache simpleCache, t tVar) {
        this.a.add(tVar);
        this.f12751b += tVar.f12736i;
        a(simpleCache, 0L);
    }
}
