package vs;

import et.j;
import java.io.IOException;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSource;
import okio.Source;
import okio.Timeout;
import ts.k;

/* loaded from: classes3.dex */
public abstract class a implements Source {

    /* renamed from: d, reason: collision with root package name */
    public final j f19572d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f19573e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ aj.a f19574i;

    public a(aj.a this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this.f19574i = this$0;
        this.f19572d = new j(((BufferedSource) this$0.f637e).timeout());
    }

    public final void c() {
        aj.a aVar = this.f19574i;
        int i5 = aVar.f635c;
        if (i5 == 6) {
            return;
        }
        if (i5 != 5) {
            throw new IllegalStateException(Intrinsics.stringPlus("state: ", Integer.valueOf(aVar.f635c)));
        }
        aj.a.i(aVar, this.f19572d);
        aVar.f635c = 6;
    }

    @Override // okio.Source
    public long read(Buffer sink, long j) {
        aj.a aVar = this.f19574i;
        Intrinsics.checkNotNullParameter(sink, "sink");
        try {
            return ((BufferedSource) aVar.f637e).read(sink, j);
        } catch (IOException e9) {
            ((k) aVar.f636d).k();
            c();
            throw e9;
        }
    }

    @Override // okio.Source
    public final Timeout timeout() {
        return this.f19572d;
    }
}
