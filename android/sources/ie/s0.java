package ie;

import android.net.Uri;
import com.google.android.exoplayer2.upstream.DataSource;
import java.util.Collections;
import java.util.Map;

/* loaded from: classes3.dex */
public final class s0 implements DataSource {

    /* renamed from: d, reason: collision with root package name */
    public final DataSource f10754d;

    /* renamed from: e, reason: collision with root package name */
    public long f10755e;

    /* renamed from: i, reason: collision with root package name */
    public Uri f10756i;

    /* renamed from: v, reason: collision with root package name */
    public Map f10757v;

    public s0(DataSource dataSource) {
        dataSource.getClass();
        this.f10754d = dataSource;
        this.f10756i = Uri.EMPTY;
        this.f10757v = Collections.EMPTY_MAP;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        this.f10754d.close();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void n(u0 u0Var) {
        u0Var.getClass();
        this.f10754d.n(u0Var);
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(p pVar) {
        this.f10756i = pVar.a;
        this.f10757v = Collections.EMPTY_MAP;
        DataSource dataSource = this.f10754d;
        long o6 = dataSource.o(pVar);
        Uri x5 = dataSource.x();
        x5.getClass();
        this.f10756i = x5;
        this.f10757v = dataSource.s();
        return o6;
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        int read = this.f10754d.read(bArr, i5, i6);
        if (read != -1) {
            this.f10755e += read;
        }
        return read;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Map s() {
        return this.f10754d.s();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return this.f10754d.x();
    }
}
