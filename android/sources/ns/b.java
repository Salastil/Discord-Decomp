package ns;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.Serializable;

/* loaded from: classes3.dex */
public final class b implements Serializable {
    private static final long serialVersionUID = 5986185471610524587L;
    private final long _raw;
    private final long _utc;
    private final is.a date;
    private final int shift;

    public b(is.a aVar, long j, int i5) {
        this.date = aVar;
        this.shift = i5;
        this._utc = Long.MIN_VALUE;
        this._raw = j;
    }

    public final is.a a() {
        return this.date;
    }

    public final int b() {
        return this.shift;
    }

    public final long c() {
        return this._raw;
    }

    public final long d() {
        return this._utc;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        sb2.append(b.class.getName());
        sb2.append('[');
        is.a aVar = this.date;
        sb2.append(String.format("%1$04d-%2$02d-%3$02d", Integer.valueOf(aVar.a()), Integer.valueOf(aVar.b()), Integer.valueOf(aVar.c())));
        sb2.append(": utc=");
        sb2.append(this._utc);
        sb2.append(", raw=");
        sb2.append(this._raw);
        sb2.append(" (shift=");
        return k0.d.m(sb2, this.shift, ")]");
    }

    public b(b bVar, int i5) {
        this.date = bVar.date;
        this.shift = bVar.shift;
        long j = bVar._raw;
        this._utc = i5 + j;
        this._raw = j;
    }
}
