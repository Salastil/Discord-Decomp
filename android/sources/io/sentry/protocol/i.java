package io.sentry.protocol;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.AbstractMap;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class i implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11803d;

    /* renamed from: e, reason: collision with root package name */
    public String f11804e;

    /* renamed from: i, reason: collision with root package name */
    public String f11805i;

    /* renamed from: v, reason: collision with root package name */
    public v f11806v;

    /* renamed from: w, reason: collision with root package name */
    public v f11807w;

    /* renamed from: x, reason: collision with root package name */
    public String f11808x;

    /* renamed from: y, reason: collision with root package name */
    public AbstractMap f11809y;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof i)) {
            return false;
        }
        i iVar = (i) obj;
        return d9.a.k(this.f11803d, iVar.f11803d) && d9.a.k(this.f11804e, iVar.f11804e) && d9.a.k(this.f11805i, iVar.f11805i) && d9.a.k(this.f11806v, iVar.f11806v) && d9.a.k(this.f11807w, iVar.f11807w) && d9.a.k(this.f11808x, iVar.f11808x) && d9.a.k(this.f11809y, iVar.f11809y);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11803d, this.f11804e, this.f11805i, this.f11806v, this.f11807w, this.f11808x, this.f11809y});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("message").s(this.f11803d);
        if (this.f11804e != null) {
            y2Var.C0("contact_email").s(this.f11804e);
        }
        if (this.f11805i != null) {
            y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11805i);
        }
        if (this.f11806v != null) {
            y2Var.C0("associated_event_id");
            this.f11806v.serialize(y2Var, iLogger);
        }
        if (this.f11807w != null) {
            y2Var.C0("replay_id");
            this.f11807w.serialize(y2Var, iLogger);
        }
        if (this.f11808x != null) {
            y2Var.C0("url").s(this.f11808x);
        }
        AbstractMap abstractMap = this.f11809y;
        if (abstractMap != null) {
            for (String str : abstractMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11809y.get(str));
            }
        }
        y2Var.O();
    }

    public final String toString() {
        return "Feedback{message='" + this.f11803d + "', contactEmail='" + this.f11804e + "', name='" + this.f11805i + "', associatedEventId=" + this.f11806v + ", replayId=" + this.f11807w + ", url='" + this.f11808x + "', unknown=" + this.f11809y + '}';
    }
}
