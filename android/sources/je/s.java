package je;

import android.os.ConditionVariable;
import com.google.android.exoplayer2.upstream.cache.SimpleCache;

/* loaded from: classes3.dex */
public final class s extends Thread {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ConditionVariable f12753d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ SimpleCache f12754e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s(SimpleCache simpleCache, ConditionVariable conditionVariable) {
        super("ExoPlayer:SimpleCacheInit");
        this.f12754e = simpleCache;
        this.f12753d = conditionVariable;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        synchronized (this.f12754e) {
            this.f12753d.open();
            SimpleCache.a(this.f12754e);
            this.f12754e.f5567b.getClass();
        }
    }
}
