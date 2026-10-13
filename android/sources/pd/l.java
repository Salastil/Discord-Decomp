package pd;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.upstream.DataSource;
import ie.p;

/* loaded from: classes3.dex */
public abstract class l extends e {
    public final long G;

    public l(DataSource dataSource, p pVar, Format format, int i5, Object obj, long j, long j5, long j7) {
        super(dataSource, pVar, 1, format, i5, obj, j, j5);
        format.getClass();
        this.G = j7;
    }

    public long a() {
        long j = this.G;
        if (j != -1) {
            return j + 1;
        }
        return -1L;
    }

    public abstract boolean b();
}
