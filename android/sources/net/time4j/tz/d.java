package net.time4j.tz;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.TimeZone;
import w3.q;

/* loaded from: classes3.dex */
public final class d extends i {
    private static final long serialVersionUID = -8432968264242113551L;
    public final transient m M;

    /* renamed from: id, reason: collision with root package name */
    private final f f15334id;
    private final boolean strict;
    private final TimeZone tz;

    public d(c cVar) {
        this(cVar, TimeZone.getDefault(), false);
    }

    private Object readResolve() {
        f fVar = this.f15334id;
        return fVar == null ? new d() : new d(fVar, this.tz, this.strict);
    }

    @Override // net.time4j.tz.i
    public final f a() {
        f fVar = this.f15334id;
        return fVar == null ? new c(TimeZone.getDefault().getID()) : fVar;
    }

    public final boolean d() {
        return (this.f15334id == null ? TimeZone.getDefault() : this.tz).getID().equals("GMT");
    }

    public final boolean equals(Object obj) {
        if (obj instanceof d) {
            d dVar = (d) obj;
            m mVar = dVar.M;
            if (this.f15334id == null) {
                return dVar.f15334id == null;
            }
            if (this.tz.equals(dVar.tz) && this.strict == dVar.strict) {
                m mVar2 = this.M;
                return mVar2 == null ? mVar == null : mVar2.equals(mVar);
            }
        }
        return false;
    }

    public final int hashCode() {
        if (this.f15334id == null) {
            return 0;
        }
        return this.tz.hashCode();
    }

    public final String toString() {
        TimeZone timeZone = this.f15334id == null ? TimeZone.getDefault() : this.tz;
        StringBuilder sb2 = new StringBuilder(IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
        sb2.append('[');
        sb2.append(d.class.getName());
        sb2.append(':');
        sb2.append(timeZone);
        sb2.append(']');
        return sb2.toString();
    }

    public d() {
        this.f15334id = null;
        this.tz = null;
        this.strict = false;
        this.M = null;
    }

    public d(f fVar, TimeZone timeZone, boolean z5) {
        this.f15334id = fVar;
        TimeZone timeZone2 = (TimeZone) timeZone.clone();
        this.tz = timeZone2;
        this.strict = z5;
        if (timeZone2.useDaylightTime()) {
            this.M = null;
            return;
        }
        String id2 = timeZone2.getID();
        if (!id2.startsWith("GMT") && !id2.startsWith("Etc/") && !id2.equals("Greenwich") && !id2.equals("UCT") && !id2.equals("UTC") && !id2.equals("Universal") && !id2.equals("Zulu")) {
            this.M = null;
        } else {
            this.M = m.e(q.l(timeZone2.getOffset(System.currentTimeMillis()), 1000), 0);
        }
    }
}
