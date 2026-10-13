package rs;

import java.io.Closeable;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;
import okio.Source;

/* loaded from: classes3.dex */
public final class e implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final String f17645d;

    /* renamed from: e, reason: collision with root package name */
    public final long f17646e;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f17647i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ g f17648v;

    public e(g this$0, String key, long j, ArrayList sources, long[] lengths) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(sources, "sources");
        Intrinsics.checkNotNullParameter(lengths, "lengths");
        this.f17648v = this$0;
        this.f17645d = key;
        this.f17646e = j;
        this.f17647i = sources;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        Iterator it = this.f17647i.iterator();
        while (it.hasNext()) {
            qs.b.c((Source) it.next());
        }
    }
}
